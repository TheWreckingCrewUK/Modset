/*
* Details:
* 
* Creates a enemy squad to defend around a given marker
*
* Required parameters:
*
* 0 - String     Marker name
*
* Example:
*
*["bastam"] spawn twc_SpawnDefend
*
* Author: [TWC] Fakematty / [TWC] Jayman
*/

params["_marker"];
_random = random 100;
if (_random < 100) then {
	if (isServer) then {
		_groupSpawn = [getMarkerPos _marker, East, ["CUP_I_GUE_Soldier_AKM","CUP_I_GUE_Soldier_AKM","CUP_I_GUE_Soldier_AT","CUP_I_GUE_Soldier_AKM"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn] call CBA_fnc_TaskDefend;
	};
};
