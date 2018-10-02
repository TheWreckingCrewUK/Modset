/*
* Author: Rik
* Module function to make a static harmless.
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

if (!_activated || !(isServer || isDedicated)) exitWith {};

{[_x] call twc_fnc_dummyBullets} forEach _units;

if (!isNull _logic) then {
	deleteVehicle _logic;
};