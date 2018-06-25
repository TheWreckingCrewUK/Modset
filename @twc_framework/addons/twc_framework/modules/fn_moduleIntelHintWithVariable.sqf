/*
 * Author: Bosenator
 * Module function to make a unit or group stationary.
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
_title = _logic getVariable "Title";
_message = _logic getVariable "Message";
_variableName = _logic getVariable "VariableName";

// Wait until PostInit has completed, then execute our function
[{
	params ["_units","_title","_message", "_variableName"];
	{ [_x, _title, _message, _variableName] call twc_fnc_intelHintWithVariable; } forEach _units;
}, [_units, _title, _message, _variableName], 0.05] call CBA_fnc_waitAndExecute;

if (!isNull _logic) then {
	deleteVehicle _logic;
};