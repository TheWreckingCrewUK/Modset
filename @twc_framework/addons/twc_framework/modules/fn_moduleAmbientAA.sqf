/*
 * Author: Anschluss
 * Module function to make AA fire around module position.
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

{[_x, getPos _logic] call twc_fnc_ambientAA} forEach _units;