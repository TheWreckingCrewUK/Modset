/*
* Created by [TWC] jayman Using code form [TWC] WiredTiger
*
* Pre-Compiled as twc_spawnAIUnits
*
* Description:
* twc_townSetup passes along the marker waves and group radius which then has the morale
* added to the waves before spawning in the group. Unfortunently waves are predefined here.
*/

params ["_marker","_waves","_groupradius"];
_waves = _waves - floor InsP_enemyMorale;
if (_waves < 1) then {
	_waves = 1;
};
for "_i" from 1 to _waves do {
	_pos = [getMarkerPos _marker,_groupradius] call SHK_pos;
	_groupSpawned = [_pos, East, ["CUP_I_GUE_Soldier_AKM","CUP_I_GUE_Soldier_AT","CUP_I_GUE_Soldier_AKM"]] call BIS_fnc_spawnGroup;
    [_groupSpawned, (_marker), 40] call CBA_fnc_taskAttack;	
};