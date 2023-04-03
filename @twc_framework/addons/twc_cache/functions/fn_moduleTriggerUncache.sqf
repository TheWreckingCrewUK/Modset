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
	if (vehicle _x == _x) then {
		(group _x) enableDynamicSimulation false;
	} else {
		(group _x) enableDynamicSimulation false;
		
		//uncache passengers
		{
			(group _x) enableDynamicSimulation false;
		} forEach (crew vehicle _x);
	};
} forEach _units;

if (!isNull _logic) then {
	deleteVehicle _logic;
};