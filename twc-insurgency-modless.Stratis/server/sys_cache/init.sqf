InsP_fnc_deadCache = compile preProcessFileLineNumbers "server\sys_cache\fn_deadCache.sqf";
InsP_fnc_deleteMarkers = compile preProcessFileLineNumbers "server\sys_cache\fn_deleteMarkers.sqf";
InsP_fnc_counterAttack = compile preProcessFileLineNumbers "server\sys_cache\fn_counterAttack.sqf";

if (isNil "InsP_ammoCaches") then {
	InsP_ammoCaches = 0;
	publicVariable "InsP_ammoCaches";
};

if (isNil "cacheAMarkers") then {
	cacheAMarkers = [];
	publicVariable "cacheAMarkers";
	cacheBMarkers = [];
	publicVariable "cacheBMarkers";
	cacheCMarkers = [];
	publicVariable "cacheCMarkers";
};

#include "cacheSetup.sqf";