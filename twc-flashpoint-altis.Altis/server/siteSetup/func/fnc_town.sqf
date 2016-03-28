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

hint"Town garrison spawned";
params["_marker"];

_CentralMarker = format ["%1",_marker];

//units
_squad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySquad");
_ATteam = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionAT");
_AAteam = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionAA");
_BRDM = "CUP_O_BRDM2_SLA";
_BRDMAT= "CUP_O_BRDM2_ATGM_SLA";
/*
for "_i" from 0 to 2 do {
	if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,300],random 360,0] call SHK_pos;
		_PatrolSquad = [_pos, EAST, _squad] call BIS_fnc_spawnGroup;
		[_PatrolSquad, getmarkerpos _CentralMarker, 450] call CBA_fnc_taskPatrol;
		};
	};
for "_i" from 0 to 2 do {
	if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,200],random 360,0] call SHK_pos;
		_DefendSquad = [_pos, EAST, _squad] call BIS_fnc_spawnGroup;
		[_DefendSquad, getmarkerpos _CentralMarker, 300] call CBA_fnc_taskPatrol;
	};
};
*/
for "_i" from 0 to 2 do {
if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,100],random 360,0] call SHK_pos;
		_DefendAT = [_pos, EAST, _ATteam] call BIS_fnc_spawnGroup;
		[_DefendAT, getmarkerpos _CentralMarker, 200] call CBA_fnc_taskDefend;
	};
};
for "_i" from 0 to 2 do {
	if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,100],random 360,0] call SHK_pos;
		_DefendAA = [_pos, EAST, _AAteam] call BIS_fnc_spawnGroup;
		[_DefendAA, getmarkerpos _CentralMarker, 20] call CBA_fnc_taskDefend;
	};
};
if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,300],random 360,0] call SHK_pos;
		_DefendBRDM = [_pos, EAST, _BRDM] call BIS_fnc_spawnGroup;
		[_PatrolBRDM, getmarkerpos _CentralMarker, 400] call CBA_fnc_taskPatrol;
	};
if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,300],random 360,0] call SHK_pos;
		_DefendBRDMAT = [_pos, EAST, _BRDMAT] call BIS_fnc_spawnGroup;
		[_PatrolBRDMAT, getmarkerpos _CentralMarker, 400] call CBA_fnc_taskPatrol;
	};

[format["Task%1",TaskIncrease],format[ "Primary Objective : Capture %1",_CentralMarker],"The enemy infantry holds this town."] call TWC_fnc_CreateTask;