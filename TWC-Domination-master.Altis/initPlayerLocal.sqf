waitUntil{!isNull player};
[player] join grpNull ;

if (!hasInterface) exitWith {};

global_sync = false;

execVM "player\init.sqf";