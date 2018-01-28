params ["_unit", "_isUncon"];

if (!local _unit) exitWith {};

// the unit just went unconsicous, we don't need to double check until some time
// prevents waking up temp knock outs prematurely

if (_isUncon) then {
	[twc_medical_fnc_extendedUnconLoop, [_unit], 5] call CBA_fnc_waitAndExecute;
};