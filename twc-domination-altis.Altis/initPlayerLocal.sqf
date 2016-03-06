waitUntil{!isNull player};
[player] join grpNull ;

execVM "steam\acreCheck.sqf";

if (!hasInterface) exitWith {};

global_sync = false;

execVM "client\init.sqf";

execVM "client\playerlist\init.sqf";