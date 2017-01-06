InsP_fnc_deleteMarkers = compile preProcessFileLineNumbers "server\sys_cache\fn_deleteMarkers.sqf";
InsP_fnc_counterAttack = compile preProcessFileLineNumbers "server\sys_cache\fn_counterAttack.sqf";

#include "cacheLocations.sqf";

execVM "server\sys_cache\cacheSetup.sqf";