// Monitors Take & Put local events, and translates them to global events for framework
if (!hasInterface) exitWith {};

player addEventHandler ["Take", {
	params ["_unit", "_container", "_item"];

	["twc_inventoryRemoved", ["_container", "_item", "_unit"]] call CBA_fnc_globalEvent;
}];

player addEventHandler ["Put", {
	params ["_unit", "_container", "_item"];

	["twc_inventoryAdded", ["_container", "_item", "_unit"]] call CBA_fnc_globalEvent;
}];