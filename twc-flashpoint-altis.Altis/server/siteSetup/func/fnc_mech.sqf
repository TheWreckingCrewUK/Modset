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

params["_marker"];

_CentralMarker = format ["%1",_marker];

for "_i" from 1 to 2 do {
	if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,200],random 360,0] call SHK_pos;
		_PatrolSquad = [_pos, EAST, mechSquad] call BIS_fnc_spawnGroup;
		[_PatrolSquad, getmarkerpos _CentralMarker, 350] call CBA_fnc_taskPatrol;
	};
};

for "_i" from 1 to 2 do {
	if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,200],random 360,0] call SHK_pos;
		_PatrolSquad = [_pos, EAST, bmp] call BIS_fnc_spawnGroup;
		[_PatrolSquad, getmarkerpos _CentralMarker, 350] call CBA_fnc_taskPatrol;
	};
};

[_CentralMarker, _ATDefend]spawn{
	if isServer then {
		private ["_pos","_m"];
		sleep 5;
		_pos = [getmarkerpos (_this select 0),[0,100],random 360,0] call SHK_pos;
		_DefendAT = [_pos, EAST, (_this select 1)] call BIS_fnc_spawnGroup;
		[_DefendAT, getmarkerpos (_this select 0), 200] call CBA_fnc_taskPatrol;
	};
};
	
if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,100],random 360,0] call SHK_pos;
		_PatrolBRDM = [_pos, EAST, BRDM] call BIS_fnc_spawnGroup;
		[_PatrolBRDM, getmarkerpos _CentralMarker, 200] call CBA_fnc_taskPatrol;
	};
	
if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,50],random 360,0] call SHK_pos;
		_DefendAA = [_pos, EAST, AAteam] call BIS_fnc_spawnGroup;
		[_DefendAA, getmarkerpos _CentralMarker, 100] call CBA_fnc_taskDefend;
	};
	
if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,100],random 360,0] call SHK_pos;
		_PatrolSPAA = [_pos, EAST, tunguska] call BIS_fnc_spawnGroup;
		[_PatrolSPAA, getmarkerpos _CentralMarker, 200] call CBA_fnc_taskDefend;
	};