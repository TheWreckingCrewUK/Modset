//Written by [TWC]jayman
//takes the marker position of the town "Falar"
//Spawns the Civilian to the town
//Currently locks them in place and doesn't let the move

if (isServer) then {
_groupSpawn = [getMarkerPos "Falar", Civilian, ["LOP_Tak_Civ_Man_01","LOP_Tak_Civ_Man_01","LOP_Tak_Civ_Man_01","LOP_Tak_Civ_Man_01"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
[_groupSpawn] call CBA_fnc_TaskDefend;
_groupSpawn allowfleeing 0;
};