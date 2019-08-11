/*
 * Author: Bosenator
 * Module function to set probability of ignoring halt on unit.
 *
 * Arguments:
 * 0: The Module Logic <OBJECT>
 * 1: Synced Objects <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
params ["_logic", "_units", "_activated"];

if (!_activated || !isServer) exitWith {};

_probability = _logic getVariable "probability";
_probability = round ((_probability max 0) min 100);

{
	(group _x) setVariable ["TWC_AI_Control_Gestures_HaltIgnoreChance", _probability, true];
} forEach _units;

if (!isNull _logic) then {
	deleteVehicle _logic;
};