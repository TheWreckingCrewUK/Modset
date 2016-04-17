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

hint"Hamlet garrison spawned";
params["_marker"];

_CentralMarker = format ["%1",_marker];


[_CentralMarker, AAteam] spawn{
	if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos (_this select 0),[0,50],random 360,0] call SHK_pos;
		_DefendAA = [_pos, EAST, (_this select 1)] call BIS_fnc_spawnGroup;
		[_DefendAA, getmarkerpos (_this select 0), 100] call CBA_fnc_taskPatrol;
	};
};
[_CentralMarker, squad] spawn{
	if isServer then {
		sleep 3;
		private ["_pos","_m"];
		_pos = [getmarkerpos (_this select 0),[0,100],random 360,0] call SHK_pos;
		_PatrolSquad = [_pos, EAST, (_this select 1)] call BIS_fnc_spawnGroup;
		[_PatrolSquad, getmarkerpos (_this select 0), 100] call CBA_fnc_taskDefend;
	};
};

[_CentralMarker, ATteam] spawn{
	if isServer then {
		sleep 5;
		private ["_pos","_m"];
		_pos = [getmarkerpos (_this select 0),[0,50],random 360,0] call SHK_pos;
		_DefendAT = [_pos, EAST, (_this select 1)] call BIS_fnc_spawnGroup;
		[_DefendAT, getmarkerpos (_this select 0), 100] call CBA_fnc_taskPatrol;
	};
};