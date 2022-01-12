/*
	File: fn_spawnTroopCarrier.sqf
	Author: Dom
	Description: Creates the vehicle pulled from the config and adds troops inside
*/
params [
	["_position",[],[[]]],
	["_posData",[100],[[]]],
	["_maxInVehicle",-1,[0]]
];

private _classData = selectRandom (getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforTroopCarriers"));
private _className = _classData;
private _spawnFactionCrew = false;
if (_classData isEqualType []) then {
	_className = _classData select 0;
	_spawnFactionCrew = call compile (_classData select 1);
};

_posData pushBack _className;
private _spawnPosition = ["opforVehicle",_position,_posData] call AW_fnc_findSafePosition;
if (_spawnPosition isEqualTo []) exitWith {[format["Vehicle could not be spawned at %1",_position]] call AW_fnc_logIt; grpNull};

private _vehicle = createVehicle [_className,_spawnPosition];
_vehicle setVectorUp surfaceNormal getPosATL _vehicle;

private _group = createGroup [east,true];
if (_spawnFactionCrew) then {
	[_group,_vehicle] call AW_fnc_forceCreateFactionCrew;
} else {
	private _crew = createVehicleCrew _vehicle;
	(units _crew) joinSilent _group;
};
[_group] call CBA_fnc_clearWaypoints;

private _squadComposition = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforBasicSquad");
private _seatCount = getNumber(configOf _vehicle >> "transportSoldier");
private _troopCount = ceil (random _seatCount);
if (_maxInVehicle isNotEqualTo -1) then {
	_troopCount = _troopCount min _maxInVehicle;
};

for "_i" from 1 to _troopCount do {
	private _unit = [_group,east,selectRandom _squadComposition,_vehicle] call AW_fnc_createUnit;
	_unit moveInCargo _vehicle;
};
_vehicle setUnloadInCombat [true,false];

_group;