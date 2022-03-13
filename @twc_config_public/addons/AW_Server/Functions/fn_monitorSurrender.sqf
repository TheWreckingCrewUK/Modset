/*
	File: fn_monitorSurrender.sqf
	Author: Dom
	Description: Monitors surrender state of an AI
*/
params [
	["_unit",objNull,[objNull]]
];

[
	{
		params ["_unit"];
		!alive _unit ||
		{_unit getVariable ["ace_captives_isHandcuffed",false]}
	},
	{
		params ["_unit"];
		if (alive _unit) then {
			if (_unit getVariable ["ace_captives_isHandcuffed",false]) then {
				//call nearby ambient for assistance after certain time?
			};
		};
	},
	[_unit],
	150 + (random 450),
	{
		params ["_unit"];
		if ((playableUnits findIf {_x distance _unit < 1000}) isEqualTo -1) then {
			deleteVehicle _unit;
		} else {
			[_unit,false] remoteExecCall ["ACE_captives_fnc_setSurrendered",_unit];
		};
	}
] call CBA_fnc_waitUntilAndExecute;