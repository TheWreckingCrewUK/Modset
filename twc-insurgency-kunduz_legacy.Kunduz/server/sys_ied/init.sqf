TWC_fnc_spawnIed = compile preprocessFileLineNumbers "server\sys_ied\fnc_spawnIed.sqf";
TWC_fnc_populateIeds = compile preprocessFileLineNumbers "server\sys_ied\fnc_populateIeds.sqf";
TWC_fnc_iedAttack = compile preprocessFileLineNumbers "server\sys_ied\fnc_iedAttack.sqf";

if (isNil "InsP_iedGroup") then {
	InsP_iedGroup = [];
	publicVariable "InsP_iedGroup";
};

if (isNil "InsP_iedMarkerGroup") then {
	InsP_iedMarkerGroup = [];
	publicVariable "InsP_iedMarkerGroup";
};

if (isNil "InsP_iedDestroyed") then {
	InsP_iedDestroyed = 0;
	publicVariable "InsP_iedDestroyed";
};

[100, ["iedRestrictionZone"]] call TWC_fnc_populateIeds;
