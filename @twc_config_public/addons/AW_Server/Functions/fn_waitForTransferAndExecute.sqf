/*
	File: fn_waitForTransferAndExecute.sqf
	Author: Dom
	Description: Used to call the AI behaviour as the HC needs to own the clients prior to LAMBS executing code on them, needed for opfor units only
*/
params [
	["_parameters",[],[[]]], //first element always needs to be the groups
	["_code",{},[{}]]
];

if (isNull HC1) then {
	_parameters call _code;
} else {
	[
		{
			(_this select 0) params ["_groups"];
			private _hcID = owner HC1;
			(_groups select {!isNull _x && {groupOwner _x isNotEqualTo _hcID}}) isEqualTo []
		},
		{
			params ["_params","_code"];
			_params call _code;
		},
		[_parameters,_code]
	] call CBA_fnc_waitUntilAndExecute;
};