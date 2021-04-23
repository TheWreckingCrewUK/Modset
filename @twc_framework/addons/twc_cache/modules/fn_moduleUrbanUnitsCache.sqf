/**
 * Author: Bosenator
 * Module function to trigger the uncaching of connected unit(s).
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

_debug = false;

if (!_activated || (!_debug && hasInterface)) exitWith {};

_urbanRange = missionNamespace getVariable ["TWC_Cache_Urban_Range", 750];

{
	(group _x) setVariable ["TWC_Cache_Group_Range", _urbanRange];
} forEach _units;

if (!isNull _logic) then {
	deleteVehicle _logic;
};
