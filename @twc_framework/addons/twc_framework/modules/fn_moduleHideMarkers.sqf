/*
 * Author: Rik
 * Module function to hide markers for a certain side.
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

if (!_activated) exitWith {};
_side = _logic getVariable "Side";
_markers = _logic getVariable "Markers";
_markers = parseSimpleArray _markers;

[_side, _markers] remoteExecCall ["twc_fnc_hideMarkers", 0, true];

if (!isNull _logic) then {
	deleteVehicle _logic;
};