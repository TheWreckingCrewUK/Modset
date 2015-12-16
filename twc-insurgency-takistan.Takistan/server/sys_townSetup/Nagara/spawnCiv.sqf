//Written by [TWC]jayman
//takes the marker position of the town "Nagara"
//Spawns the Civilian to the town
//Currently sets them to cba defend script

if (isServer) then {
_groupSpawn = [getMarkerPos "Nagara", Civilian, ["LOP_Tak_Civ_Man_01","LOP_Tak_Civ_Man_01","LOP_Tak_Civ_Man_01","LOP_Tak_Civ_Man_01"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
[_groupSpawn] call CBA_fnc_TaskDefend;
_groupSpawn allowfleeing 0;
};