/*
*   AO Funtion for Flashpoint for use only on TWC by Jayman
*
*   Parameters
*
*   0 - Marker that is named with the name of the town it is placed over
*
*
*  returns
*
*  fuck all expect for one AO
*
*/

hint"Village garrison spawned";
params["_marker"];

_CentralMarker = format ["%1",_marker];

if isServer then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[100,250],random 360,0,[1],[300, "Air"]] call SHK_pos;
	_PatrolSPAAG = [_pos, EAST, uralZu23] call BIS_fnc_spawnGroup;
	};

if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,150],random 360,0] call SHK_pos;
		_PatrolSquad = [_pos, EAST, squad] call BIS_fnc_spawnGroup;
		[_PatrolSquad, getmarkerpos _CentralMarker, 200] call CBA_fnc_taskPatrol;
	};
	if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,100],random 360,0] call SHK_pos;
		_DefendSquad = [_pos, EAST, squad] call BIS_fnc_spawnGroup;
		[_DefendSquad, getmarkerpos _CentralMarker, 150] call CBA_fnc_taskDefend;
	};
if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,50],random 360,0] call SHK_pos;
		_DefendAT = [_pos, EAST, ATteam] call BIS_fnc_spawnGroup;
		[_DefendAT, getmarkerpos _CentralMarker, 75] call CBA_fnc_taskDefend;
	};
if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,50],random 360,0] call SHK_pos;
		_DefendAA = [_pos, EAST, AAteam] call BIS_fnc_spawnGroup;
		[_DefendAA, getmarkerpos _CentralMarker, 75] call CBA_fnc_taskDefend;
	};