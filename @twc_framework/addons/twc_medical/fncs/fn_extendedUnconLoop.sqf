params ["_unit"];

if (!local _unit) exitWith {};
if (!alive _unit) exitWith {};

_continue = true;
_unCon = (_unit getVariable ["ACE_isUnconscious", false]);

if (_unCon) then {
	if (!([_unit] call ace_medical_fnc_getUnconsciousCondition)) then {
		_unit setVariable ["ACE_isUnconscious", false, true];
		_continue = false;
	};
};

if (_continue) then {
	[twc_medical_fnc_extendedUnconLoop, [_unit], 1] call CBA_fnc_waitAndExecute; // execute this fnc again in a second
};