/*
 * Author: Rik
 * Module function to airdrop in a crate.
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
_dir = getDir _logic;
_type = _logic getVariable "Plane";
_cargo = _logic getVariable "Cargo";
_cargo = parseSimpleArray _cargo;

[_pos, _dir, _type, _cargo] call twc_fnc_crateParadrop;

if (!isNull _logic) then {
	deleteVehicle _logic;
};