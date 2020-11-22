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
_pos = getPos _logic;
_radius = _logic getVariable "Radius";
_size = _logic getVariable "Size";
_patrol = _logic getVariable "Patrol";
_hold = _logic getVariable "Hold";

[{
	params ["_units","_pos","_radius","_size","_patrol","_hold"];
	{ [_x,_pos,_radius,_size,_patrol,_hold] call twc_fnc_defend; } forEach _units;
}, [_units,_pos,_radius,_size,_patrol,_hold], 0.05] call CBA_fnc_waitAndExecute;

// TODO: change spawn to call above when alternate stationary units is introduced

if (!isNull _logic) then {
    deleteVehicle _logic;
};