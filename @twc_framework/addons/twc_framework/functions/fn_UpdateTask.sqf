
Params ["_taskname","_state"];

[_taskname,_state,false] call BIS_fnc_taskSetState;

format["%1 has %2",_taskname, _state] call twc_fnc_commandMessage;

if(isNil "completedTasks") then{
	completedTasks = [[_taskname, _state]];
	publicVariable "completedTasks";
}else{
	completedTasks = completedTasks + [[_taskname, _state]];
	publicVariable "completedTasks";
};