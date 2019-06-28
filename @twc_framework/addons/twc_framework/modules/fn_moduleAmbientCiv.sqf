/*
 * Author: Rik
 * Module function to populate an area with civilians.
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

if (!isServer) exitWith {};

if (!_activated) exitwith {[_units select 0] call twc_fnc_ambientCivDepopulate};

_pos = getPos _logic;
_type = _logic getVariable "Type";
_size = _logic getVariable "Size";
_radius = _logic getVariable "Radius";

[_pos, _type, _size, _radius, _units select 0] call twc_fnc_ambientCivPopulate;