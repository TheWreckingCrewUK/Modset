/*
 * Author: Bosenator
 * Module function to set up artillery pieces for Bosenator's Big Boom Bundle.
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
/* [{
	params ["_units"];

	
}, [_units], 0.05] call CBA_fnc_waitAndExecute; */

if (!isNull _logic) then {
    deleteVehicle _logic;
};