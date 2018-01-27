params ["_unit"];

if (!local _unit) exitWith {};

// the unit just went unconsicous, we don't need to double check until some time
// prevents waking up temp knock outs prematurely

[twc_medical_fnc_extendedUnconLoop, [_unit], 30] call CBA_fnc_waitAndExecute;