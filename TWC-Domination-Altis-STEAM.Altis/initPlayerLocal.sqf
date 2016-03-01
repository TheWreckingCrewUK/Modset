waitUntil{!isNull player};
[player] join grpNull ;

if (!hasInterface) exitWith {};
global_sync = false;

execVM "client\init.sqf";
execVM "client\zeus\zeus.sqf";
execVM "client\playerlist\init.sqf";