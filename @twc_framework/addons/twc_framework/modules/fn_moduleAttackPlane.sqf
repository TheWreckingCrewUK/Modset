/*
 * Author: Bosenator
 * Module function to make a unit or group stationary.
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
_patrol = _logic getVariable "Patrol";
_radius = _logic getVariable "Radius";
_type = _logic getVariable "Type";

[[_pos select 0,_pos select 1],_patrol,_radius,_type] spawn twc_fnc_AttackPlane;

// TODO: change spawn to call above when alternate stationary units is introduced

if (!isNull _logic) then {
    deleteVehicle _logic;
};