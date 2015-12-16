//Written by [TWC]jayman
//takes the marker position of the town "Mulladost"
//Spawns the insurgents to the town
//sets them to the cba taskdefend function
//executes the townClear script

if (isServer) then {
_groupSpawn = [getMarkerPos "Mulladost", East, ["LOP_AM_Infantr_TL","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_AT"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
[_groupSpawn] call CBA_fnc_TaskDefend;
execVM "server\sys_townSetup\Mulladost\townClear.sqf";
};
