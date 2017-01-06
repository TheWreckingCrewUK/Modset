TWC_fnc_spawnIed = compile preprocessFileLineNumbers "server\sys_ied\fnc_spawnIed.sqf";
TWC_fnc_populateIeds = compile preprocessFileLineNumbers "server\sys_ied\fnc_populateIeds.sqf";
TWC_fnc_iedAttack = compile preprocessFileLineNumbers "server\sys_ied\fnc_iedAttack.sqf";

[40, ["iedRestrictionZone"]] call TWC_fnc_populateIeds;
