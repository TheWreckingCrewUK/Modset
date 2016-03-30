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

hint"Tanks Spawned";
params["_marker"];

_CentralMarker = format ["%1",_marker];

//units
_tanks = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Armored" >> "CUP_O_SLA_TankPlatoon");
_t72 = ["CUP_O_T72_SLA"];
_shilka = ["CUP_O_ZSU23_SLA"];



if isServer then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[0,300],random 360,0] call SHK_pos;
	_PatrolTanks = [_pos, EAST, _tanks] call BIS_fnc_spawnGroup;
	[_PatrolTanks, getmarkerpos _CentralMarker, 400] call CBA_fnc_taskDefend;
};
if isServer then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[0,200],random 360,0] call SHK_pos;
	_PatrolTank = [_pos, EAST, _shilka] call BIS_fnc_spawnGroup;
	[_Patroltank, getmarkerpos _CentralMarker, 300] call CBA_fnc_taskDefend;
};