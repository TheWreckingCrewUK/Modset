/*
	File: fn_createVehicle.sqf
	Author: Dom
	Description: Creates the vehicle pulled from the config
*/
params [
	["_classData","",["",[]]],
	["_position",[],[[]]],
	["_posData",[100],[[]]],
	["_side",east,[east]]
];

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

private _group = createGroup [_side,true];
if (_spawnFactionCrew) then {
	[_group,_vehicle] call AW_fnc_forceCreateFactionCrew;
} else {
	private _crew = createVehicleCrew _vehicle;
	(units _crew) joinSilent _group;
};
[_group] call CBA_fnc_clearWaypoints;

_group;