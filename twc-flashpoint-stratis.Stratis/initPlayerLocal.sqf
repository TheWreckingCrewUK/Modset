waitUntil{!isNull player};
[player] join grpNull ;

if (!hasInterface) exitWith {};

execVM "steam\acreCheck.sqf";

global_sync = false;

execVM "client\init.sqf";

execVM "client\playerlist\init.sqf";