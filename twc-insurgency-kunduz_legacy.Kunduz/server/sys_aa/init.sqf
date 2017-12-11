InsP_fnc_deadCache = compile preProcessFileLineNumbers "server\sys_cache\fnc_deadCache.sqf";
InsP_fnc_deadAAGun = compile preProcessFileLineNumbers "server\sys_aa\fnc_deadAAGun.sqf";

if (isNil "InsP_aagDestroyed") then {
	InsP_aagDestroyed = 0;
	publicVariable "InsP_aagDestroyed";
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
execVM "server\sys_aa\aaSetup.sqf";
//execVM "server\sys_aa\aaTeam.sqf";