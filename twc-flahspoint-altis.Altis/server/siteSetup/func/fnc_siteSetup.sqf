/*params["_marker"];

hint _marker;
smallTownSquad = ["CUP_I_GUE_Soldier_AKM","CUP_I_GUE_Soldier_AT","CUP_I_GUE_Soldier_AKM"];

_random = 0;
if (_random < 75) then {
	if (isServer) then {
		_groupSpawn = [getMarkerPos _marker, East, smallTownSquad,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn] call CBA_fnc_TaskDefend;
	};
};