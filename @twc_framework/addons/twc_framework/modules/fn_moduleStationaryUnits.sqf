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

// Wait until PostInit has completed, then execute our function
[{
	params ["_units"];
	{ [_x] spawn twc_fnc_stationaryUnits; } forEach _units;
}, [_units], 0.05] call CBA_fnc_waitAndExecute;

// TODO: change spawn to call above when alternate stationary units is introduced

if (!isNull _logic) then {
    deleteVehicle _logic;
};