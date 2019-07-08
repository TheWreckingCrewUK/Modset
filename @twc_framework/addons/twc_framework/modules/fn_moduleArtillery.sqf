/*
 * Author: TWC
 * Module function to make an existing piece of artillery fire.
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

_type = _logic getVariable "TYPE";
_rounds = _logic getVariable "Rounds";
_dispersion = _logic getVariable "Dispersion";
_delay = _logic getVariable "Delay";

[_units, getPos _logic, _dispersion, _rounds, _type, _delay] call twc_fnc_artillery;