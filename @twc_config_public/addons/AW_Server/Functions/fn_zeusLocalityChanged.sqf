/*
	File: fn_zeusLocalityChanged.sqf
	Author: Dom
	Description: Handles a change in ownership of a zeus module (player dies, it transfers to server)
*/
params ["_zeus","_local"];

if !(_local) then {
	private _unit = getAssignedCuratorUnit _zeus;

	if (getAssignedCuratorLogic _unit isNotEqualTo _zeus) then {
		unassignCurator _zeus;
		[
			{
				params ["_zeus"];
				isNull getAssignedCuratorUnit _zeus
			},
			{
				params ["_zeus","_unit"];
				_unit assignCurator _zeus;
			},
			[_zeus,_unit]
		] call CBA_fnc_waitUntilAndExecute;
	};
};