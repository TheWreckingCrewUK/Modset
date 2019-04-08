/*
 * Author: Bosenator
 * Module function to disable caching on synced objects.
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

{
	if (_x isKindOf "CAManBase") then {
		(group _x) setVariable ["twc_cacheDisabled", true, true];
	} else {
		_x setVariable ["twc_cacheDisabled", true, true];
	};
} forEach _units;

if (!isNull _logic) then {
	deleteVehicle _logic;
};