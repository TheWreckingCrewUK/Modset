/*
* Details
*
* Gives a 50-50 chance of spawning a squad around the marker and set them to cba defend.
*
* example ["Gospandi"] call twc_smallTown;
*/

params["_marker"];
_random = random 100;
if (_random < 75) then {
	if (isServer) then {
		_groupSpawn = [getMarkerPos _marker, East, ["CUP_I_GUE_Soldier_AKM","CUP_I_GUE_Soldier_AT","CUP_I_GUE_Soldier_AKM"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn] call CBA_fnc_TaskDefend;
	};
};