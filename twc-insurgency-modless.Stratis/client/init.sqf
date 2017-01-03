waitUntil {!isNull player};
waitUntil {player == player};

#include "sys_restrict\init.sqf";
#include "sys_intel\init.sqf";

execVM "client\sys_blufor\init.sqf";
execVM "client\cleanup\init.sqf";
execvM "client\arsenal\init.sqf";

cba_fnc_randPos = compile preprocessfilelinenumbers "server\func\fnc_randPos.sqf";
cba_fnc_getPos = compile preprocessfilelinenumbers "server\func\fnc_getPos.sqf";