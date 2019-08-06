// HC & Server
if (!hasInterface) exitWith {};

params ["_thisUnit"];

// Find which one's in control
if (!local _thisUnit) exitWith {};

/**

Do radi check on _unit.
For all civilian units/vehicles in radi, act upon;

For halt:
	- set variable on unit, saying player halted
	- add hold waypoint at their current location, order 0 (should halt immediately)
	
	- check periodically whilst hold, if players are in range
		- if none are remove hold waypoint and variable, should resume route
	
For advance:
	- check if variable on unit is set
		- if so, remove waypoint at 0 (should be hold), civ should return to route
		- nill the variable

**/

["TWC_AI_Control_Gestures_doAdvance", {
	params ["_unit"];
	
	
}] call CBA_fnc_addEventHandler;

["TWC_AI_Control_Gestures_doHalt", {
	params ["_unit"];
	
	
}] call CBA_fnc_addEventHandler;