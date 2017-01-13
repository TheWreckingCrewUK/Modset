waitUntil {!isNull player};
waitUntil {player == player};

#include "sys_restrict\init.sqf";
#include "sys_intel\init.sqf";

execVM "client\sys_blufor\init.sqf";
execVM "client\cleanup\init.sqf";
execvM "client\arsenal\init.sqf";