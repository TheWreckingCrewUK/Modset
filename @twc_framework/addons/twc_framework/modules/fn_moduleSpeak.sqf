/*
 * Author: Bosenator
 * Module function to make a unit speak within a certain range.
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

_message = _logic getVariable "Message";
_range = _logic getVariable "Range";

[_message, _logic, _range] call TWC_fnc_speak;

if (!isNull _logic) then {
	deleteVehicle _logic;
};