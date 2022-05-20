/*
	File: fn_spawnTower.sqf
	Author: Dom
	Description: Spawns a radio tower depending on space available
*/
params [
	["_sector","",[""]]
];
private _markerPos = markerPos _sector;
private _index = AW_sectorDetails findIf {_x select 0 isEqualTo _sector};
private _towerArray = AW_sectorDetails select _index;

private _fnc_findPos = {
	params ["_centre","_radius"];

	private _position = [];
	while {_position isEqualTo []} do {
		private _testPos = _centre getPos [random 50,random 360];
		if (
			_testPos isFlatEmpty [-1,-1,0.2,(_radius * 0.75),0,false,objNull] isNotEqualTo [] &&
			{nearestTerrainObjects [_testPos,["HIDE","BUILDING","ROCK","ROCKS"],_radius,false] isEqualTo []}
		) then {
			_position = _testPos;
		};
	};
	_position
};

private _radioTowerArray = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforTowers");
private _objects = [];
private _spawnPos = [];
private _maxCount = (count _radioTowerArray) - 1;
{
	_x params ["_radius","_objectArray"];
	private _safePos = [_markerPos,_radius] call _fnc_findPos;
	if (_safePos isNotEqualTo [] || {_forEachIndex isEqualTo _maxCount}) exitWith {
		_objects = _objectArray;
		_spawnPos = _markerPos;
	};
} forEach _radioTowerArray;
_spawnPos params ["_xPos","_yPos"];

private _nearTrees = nearestTerrainObjects [_spawnPos,["TREE"],50,false];
{
	_x hideObjectGlobal true;
} forEach _nearTrees;

{
	_x params ["_class","_pos","_dir"];
	if (_class in ["Land_Communication_F","Land_TTowerSmall_2_F","Land_TTowerBig_1_F"] && {(_towerArray select 2) isEqualTo -1}) then {continue};
	_pos = _pos vectorAdd [_xPos,_yPos,0];
	private _object = createVehicle [_class,_pos,[],0,"CAN_COLLIDE"];
	_object setPosATL _pos;
	_object setVectorUp [0,0,1];
	_object setDir _dir;

	if (_class isEqualTo "Land_Laptop_unfolded_F") then {
		[_object,_sector] remoteExecCall ["AW_fnc_gatherIntel",-2,_object];
	} else {
		if (_class in ["Land_Communication_F","Land_TTowerSmall_2_F","Land_TTowerBig_1_F"]) then {
			_object addEventHandler ["Killed",{_this call AW_fnc_towerDestroyed}];
			if (_sector in AW_bluforSectors) then {
				AW_bluforTowerCount = AW_bluforTowerCount + 1;
			};
		};
	};
} forEach _objects;