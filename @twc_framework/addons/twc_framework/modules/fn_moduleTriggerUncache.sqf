/*
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

if (!_activated || !isServer) exitWith {};

{
	if (_x isKindOf "CAManBase") then {
		(group _x) setVariable ["twc_cacheDisabled", true, true];
		[(group _x)] call twc_fnc_unCacheGroup;
	} else {
		_x setVariable ["twc_cacheDisabled", true, true];
		[_x] call twc_fnc_unCacheVehicle;
	};
} forEach _units;

if (!isNull _logic) then {
	deleteVehicle _logic;
};