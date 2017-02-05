
Params ["_taskname","_state"];

[_taskname,_state,true] call BIS_fnc_taskSetState;

if(isNil "completedTasks") then{
	completedTasks = [[_taskname, _state]];
	publicVariable "completedTasks";
}else{
	completedTasks = completedTasks + [[_taskname, _state]];
	publicVariable "completedTasks";
};