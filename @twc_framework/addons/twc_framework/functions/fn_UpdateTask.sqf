/*
* Author: [TWC] jayman
* Updates the tasks so they work with JIP. Also only notifies via command message
*
* Arguments:
* 0: TaskName <STRING>
* 1: Task State <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* ["task1","Failed] call twc_fnc_updateTask
*
* Public: no
*/

Params ["_taskname", "_state", ["_message", nil]];

[_taskname, _state, false] call BIS_fnc_taskSetState;

if (isNil "_message") then {
	format["%1 has %2", _taskname, _state] call twc_fnc_commandMessage;
} else {
	format["%1", _message] call twc_fnc_commandMessage;
};

if (isNil "completedTasks") then {
	completedTasks = [[_taskname, _state]];
	publicVariable "completedTasks";
} else {
	completedTasks = completedTasks + [[_taskname, _state]];
	publicVariable "completedTasks";
};