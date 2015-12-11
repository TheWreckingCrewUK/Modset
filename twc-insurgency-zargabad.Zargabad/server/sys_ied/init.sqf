TWC_fnc_spawnIed = compile preprocessFileLineNumbers "server\sys_ied\fnc_spawnIed.sqf";
TWC_fnc_populateIeds = compile preprocessFileLineNumbers "server\sys_ied\fnc_populateIeds.sqf";

[50, ["iedRestrictionZone"]] call TWC_fnc_populateIeds;
