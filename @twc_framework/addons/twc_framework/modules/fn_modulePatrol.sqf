/*
 * Author: Sarge
 * Module function to make a unit or group patrol an area.
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
_count = _logic getVariable "wpCount";

[{
	params ["_units","_pos","_radius","_count"];
	{ [_x,_pos,_radius,_count] call twc_fnc_patrol; } forEach _units;
}, [_units,_pos,_radius,_count], 0.05] call CBA_fnc_waitAndExecute;

// TODO: change spawn to call above when alternate stationary units is introduced

if (!isNull _logic) then {
    deleteVehicle _logic;
};