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

if !(_activated) exitWith {};

{
	[_x] call twc_fnc_stationaryUnits;
} forEach _units;

if (!isNull _logic) then {
	deleteVehicle _logic;
};