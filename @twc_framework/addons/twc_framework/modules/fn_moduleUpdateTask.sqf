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

_id = _logic getVariable "TaskID";
_status = _logic getVariable "Status";

[_id,_status] spawn twc_fnc_updateTask;

// TODO: change spawn to call above when alternate stationary units is introduced

if (!isNull _logic) then {
    deleteVehicle _logic;
};