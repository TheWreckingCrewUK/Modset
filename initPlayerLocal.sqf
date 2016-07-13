waitUntil{!isNull player};
[player] join grpNull ;

execVM "steam\acreCheck.sqf";

if (!hasInterface) exitWith {};

global_sync = false;

execVM "client\player\init.sqf";

execVM "client\init.sqf";

numTimesInsurgent = 0;