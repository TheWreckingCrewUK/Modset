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

hint"HQ Spawned";
params["_marker"];

_CentralMarker = format ["%1",_marker];

if isServer then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[0,300],random 360,0] call SHK_pos;
	_PatrolTanks = [_pos, EAST, bmp] call BIS_fnc_spawnGroup;
	[_PatrolTanks, getmarkerpos _CentralMarker, 400] call CBA_fnc_taskDefend;
};
if isServer then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[0,200],random 360,0] call SHK_pos;
	_PatrolTank = [_pos, EAST, tunguska] call BIS_fnc_spawnGroup;
	[_Patroltank, getmarkerpos _CentralMarker, 300] call CBA_fnc_taskDefend;
};

[_CentralMarker, ATteam] spawn{
	for "_i" from 0 to 2 do {
	if isServer then {
			sleep 2;
			private ["_pos","_m"];
			_pos = [getmarkerpos (_this select 0),[50,200],random 360,0] call SHK_pos;
			_DefendAT = [_pos, EAST, (_this select 1)] call BIS_fnc_spawnGroup;
			[_DefendAT, getmarkerpos (_this select 0), 200] call CBA_fnc_taskPatrol;
		};
	};

};
[_CentralMarker, AAteam] spawn{
	for "_i" from 0 to 1 do {
		if isServer then {
			private ["_pos","_m"];
			_pos = [getmarkerpos (_this select 0),[50,200],random 360,0] call SHK_pos;
			_DefendAA = [_pos, EAST, (_this select 1)] call BIS_fnc_spawnGroup;
			[_DefendAA, getmarkerpos (_this select 0), 200] call CBA_fnc_taskPatrol;
		};
	};
};
[_CentralMarker, squad] spawn{
	for "_i" from 0 to 3 do {
		if isServer then{
			sleep 5;
			private ["_pos","_m"];
			_pos = [getmarkerpos (_this select 0),[50,200],random 360,0] call SHK_pos;
			_DefendAA = [_pos, EAST, (_this select 1)] call BIS_fnc_spawnGroup;
			[_DefendAA, getmarkerpos (_this select 0), 200] call CBA_fnc_taskDefend;
		};
	};
};