if (!isDedicated) exitWith {};

/** Captures death events and stores the data. This is used for death screens and outros. **/
TWC_Dead_Players = [];

// Legacy support for bloodlust.
["TWC_UnitVaporized", {
	params ["_unit"];
	
	// Not a player, ignore unit.
	if (getPlayerUID _x == "" || getPlayerUID _x == "_SP_AI_") exitWith {};
	
	_deathData = [_unit, "instant_death"] call TWC_Incorporeal_fnc_getDeathData;
	TWC_Dead_Players pushBack [_unit, [_deathData]];
}] call CBA_fnc_addEventHandler;

["TWC_Unit_Perished", {
	params ["_unit", ["_reason", "clinical_death"]];
	
	_deathData = [_unit, _reason] call TWC_Incorporeal_fnc_getDeathData;
	TWC_Dead_Players pushBack [_unit, [_deathData]];
}] call CBA_fnc_addEventHandler;