/*
	File: fn_IEDFactory.sqf
	Author: Stanhope - Transferred by Dom
	Description: Secondary objective to destroy an IED factory
*/
if (AW_secondaryActive isNotEqualTo "") exitWith {["A secondary mission is in already progress."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner]};
private _buildingPosition = ["opforObjective"] call AW_fnc_findSafePosition;
if (_buildingPosition isEqualTo []) exitWith {
	["No suitable position was found."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner];
};
_buildingPosition params ["_xPos","_yPos"];

[-15] call AW_fnc_adjustIntel;
AW_secondaryActive = "IED";
publicVariable "AW_secondaryActive";

private _factoryObjects = [];
private _factoryObjectives = [];
private _factoryDefenders = [];

private _factoryArray = selectRandom (getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforIEDFactories"));
_factoryArray params ["_objects","_objectives"];
{
	_x params ["_class","_pos","_dir"];
	_pos = _pos vectorAdd [_xPos,_yPos,0];
	private _object = createVehicle [_class,_pos,[],0,"CAN_COLLIDE"];
	_object setPosATL _pos;
	if (_class isEqualTo "Land_Laptop_unfolded_F") then {
		[_object] remoteExecCall ["AW_fnc_secureLaptop",-2,_object];
	} else {
		_object setVectorUp [0,0,1];
	};
	_object setDir _dir;
	_object lock 2;

	_factoryObjects pushBack _object;
} forEach _objects;

{
	_x params ["_class","_pos","_dir"];
	_pos = _pos vectorAdd [_xPos,_yPos,0];
	private _object = createVehicle [_class,_pos,[],0,"CAN_COLLIDE"];
	_object setPosATL _pos;
	_object setVectorUp [0,0,1];
	_object setDir _dir;

	_factoryObjectives pushBack _object;
} forEach _objectives;

private _squadCount = (ceil(count playableUnits / 4)) max 2;
if (AW_isLambsEnabled) then {
	_squadCount = _squadCount + 1;
} else {
	private _spawnBuildingPositions = (_factoryObjectives select 0) buildingPos -1;
	private _group = ["AW_opforBasicSquad",_spawnBuildingPositions,round(count _spawnBuildingPositions * 0.6),1] call AW_fnc_createSquadInBuilding;
	_factoryDefenders pushBack _group;
};

private _squadTypes = ["AW_opforBasicSquad","AW_opforATSquad","AW_opforAASquad","AW_balancedSquad"];
for "_i" from 1 to _squadCount do {
	private _group = [selectRandom _squadTypes,_buildingPosition] call AW_fnc_createSquad;
	_factoryDefenders pushBack _group;
};

private _lightVehicles = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforLightVehicles");
for "_i" from 1 to (round (_squadCount / 2)) do {
	private _group = [selectRandom _lightVehicles,_buildingPosition,[250]] call AW_fnc_createVehicle;
	_factoryDefenders pushBack _group;
};
[[_factoryDefenders,_buildingPosition,100],AW_fnc_initSectorPatrol] call AW_fnc_waitForTransferAndExecute;

private _markerPos = _buildingPosition getPos [random 500,random 360];
private _marker = createMarker ["IEDFactory",_markerPos];
_marker setMarkerColor "ColorOPFOR";
_marker setMarkerShape "ELLIPSE";
_marker setMarkerBrush "FDiagonal";
_marker setMarkerSize [1000,1000];

["The area the factory is in has been marked.","generalNotif","IED Factory"] remoteExecCall ["AW_fnc_notify",-2];
[
	{
		params ["_objectives"];
		(_objectives select {alive _x}) isEqualTo []
	},
	{
		params ["","","_marker"];
		["The factory has been destroyed.","successNotif","IED Factory"] remoteExecCall ["AW_fnc_notify",-2];
		[-15] call AW_fnc_adjustThreat;
		deleteMarker _marker;
		AW_secondaryMissionsCompleted = AW_secondaryMissionsCompleted + 1;
		AW_secondaryActive = "";
		publicVariable "AW_secondaryActive";
		call AW_fnc_saveGame;
		[
			{
				params ["","_buildingPosition"];
				(playableUnits findIf {_x distance _buildingPosition < 1000}) isEqualTo -1
			},
			{
				params ["_objectives","_buildingPosition","","_objects","_groups"];
				{
					deleteVehicle _x;
				} forEach _objectives;

				{
					private _object = _x;
					private _nearPlayers = playableUnits findIf {_x distance _object < 200};
					if (_nearPlayers isEqualTo -1 && {!(_x getVariable ["AW_playerUsed",false])}) then {
						deleteVehicle _object;
					};
				} forEach _objects;

				{
					deleteVehicle _x;
				} forEach (nearestObjects [_buildingPosition,["Ruins"],25]);

				{
					[_x] call AW_fnc_deleteGroup;
				} forEach _groups;
			},
			_this
		] call CBA_fnc_waitUntilAndExecute;
	},
	[_factoryObjectives,_buildingPosition,_marker,_factoryObjects,_factoryDefenders]
] call CBA_fnc_waitUntilAndExecute;