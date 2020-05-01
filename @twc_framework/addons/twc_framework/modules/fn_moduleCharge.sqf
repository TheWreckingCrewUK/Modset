/*
 * Author: Bosenator
 * Module function to make a group execute a (banzai) charge
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

_banzai = _logic getVariable "Banzai";
_pos = getPos _logic;

{
	[_x, _pos, _banzai] call twc_fnc_charge;
} forEach _units;

if (!isNull _logic) then {
	deleteVehicle _logic;
};