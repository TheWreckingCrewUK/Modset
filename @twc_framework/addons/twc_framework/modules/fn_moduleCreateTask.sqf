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
_taskId = _logic getVariable "Id";
_taskDescription = _logic getVariable "Description";
_taskTitle = _logic getVariable "Title";
_pos = _logic getVariable "Position";

[_taskId, _taskDescription, _taskTitle, _pos] call twc_fnc_createTask;

if (!isNull _logic) then {
	deleteVehicle _logic;
};