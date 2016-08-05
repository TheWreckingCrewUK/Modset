#include "defines.sqf";
execVM "server\cleanup\deadbodies.sqf";
InsP_fnc_deadCache = compile preProcessFileLineNumbers "server\sys_cache\fnc_deadCache.sqf";
InsP_fnc_deadAAGun = compile preProcessFileLineNumbers "server\sys_aa\fnc_deadAAGun.sqf";

TWC_fnc_GlobalChat = compile preProcessFileLineNumbers "server\functions\fnc_GlobalChat.sqf";

if (isNil "InsP_iedDestroyed") then {
	InsP_iedDestroyed = 0;
	publicVariable "InsP_iedDestroyed";
};

if (isNil "InsP_ammoCaches") then {
	InsP_ammoCaches = 0;
	publicVariable "InsP_ammoCaches";
};

if (isNil "InsP_aagDestroyed") then {
	InsP_aagDestroyed = 0;
	publicVariable "InsP_aagDestroyed";
};

if (isNil "InsP_enemyMorale") then {
	InsP_enemyMorale = 0;
	publicVariable "InsP_enemyMorale";
};

if(isNil "InsP_civTrust") then{
	InsP_civTrust = 0;
	publicVariable "InsP_civTrust";
};

if (isNil "InsP_bluDeath") then {
	InsP_bluDeath = 0;
	publicVariable "InsP_bluDeath";
};

if (isNil "DeadInsurgents") then {
	DeadInsurgents = [];
	publicVariable "DeadInsurgents";
};

if (isNil "InsP_iedGroup") then {
	InsP_iedGroup = [];
	publicVariable "InsP_iedGroup";
};
if (isNil "InsP_iedMarkerGroup") then {
	InsP_iedMarkerGroup = [];
	publicVariable "InsP_iedMarkerGroup";
};

if (isNil "cacheAMarkers") then {
	cacheAMarkers = [];
	publicVariable "cacheAMarkers";
	cacheBMarkers = [];
	publicVariable "cacheBMarkers";
	cacheCMarkers = [];
	publicVariable "cacheCMarkers";
};
if (isNil "aaGunAMarkers") then {
	aaGunAMarkers = [];
	publicVariable "aaGunAMarkers";
	aaGunBMarkers = [];
	publicVariable "aaGunBMarkers";
};

if (isNil "InsP_aatDestroyed") then {
	InsP_aatDestroyed = 0;
	publicVariable "InsP_aatDestroyed";
};

#include "sys_cache\init.sqf";
#include "sys_aa\init.sqf";
#include "sys_bluDeath\init.sqf";
#include "sys_ied\init.sqf";

#include "sys_vehicles\init.sqf";

#include "sys_townSetup\init.sqf";
#include "sys_smallTown\init.sqf";

#include "sys_buildings\init.sqf";