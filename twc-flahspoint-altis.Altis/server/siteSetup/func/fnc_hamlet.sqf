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


//units
_squad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySquad");
_ATteam = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionAT");
_AAteam = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionAA");

if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,50],random 360,0] call SHK_pos;
		_PatrolSquad = [_pos, EAST, _squad] call BIS_fnc_spawnGroup;
		[_PatrolSquad, getmarkerpos _CentralMarker, 50] call CBA_fnc_taskPatrol;
	};
if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,25],random 360,0] call SHK_pos;
		_DefendAT = [_pos, EAST, _ATteam] call BIS_fnc_spawnGroup;
		[_DefendAT, getmarkerpos _CentralMarker, 25] call CBA_fnc_taskDefend;
	};
if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,25],random 360,0] call SHK_pos;
		_DefendAA = [_pos, EAST, _AAteam] call BIS_fnc_spawnGroup;
		[_DefendAA, getmarkerpos _CentralMarker, 25] call CBA_fnc_taskDefend;
	};

[format["Task%1",TaskIncrease],format[ "Primary Objective : Capture %1",_CentralMarker],"The enemy infantry holds this key position."] call TWC_fnc_CreateTask;