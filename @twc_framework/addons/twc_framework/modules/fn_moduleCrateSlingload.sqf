/*
 * Author: Rik
 * Module function to slingload in a crate.
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
_type = _logic getVariable "Helicopter";
_cargo = _logic getVariable "Cargo";
_cargo = parseSimpleArray _cargo;

[_pos, _dir, _type, _cargo] call twc_fnc_crateSlingload;

if (!isNull _logic) then {
	deleteVehicle _logic;
};