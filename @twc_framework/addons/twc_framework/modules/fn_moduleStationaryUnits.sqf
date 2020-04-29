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

_viewLimit = _logic getVariable "ViewLimit";

{
	[_x, _viewLimit] call twc_fnc_stationaryUnits;
} forEach _units;

if (!isNull _logic) then {
	deleteVehicle _logic;
};