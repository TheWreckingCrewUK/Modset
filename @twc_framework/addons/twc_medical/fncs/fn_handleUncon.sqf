params ["_unit", "_isUncon"];

if (!local _unit) exitWith {};

// the unit just went unconsicous, we don't need to double check until some time
// prevents waking up temp knock outs prematurely

if (_isUncon) then {
	_unconTimer = ceil(random 5) + 1;
	
	if (isPlayer _unit) then {
		[twc_medical_fnc_extendedUnconLoop, [_unit], _unconTimer] call CBA_fnc_waitAndExecute;
	} else {
		[twc_medical_fnc_handleAIUncon, [_unit], _unconTimer] call CBA_fnc_waitAndExecute;
	};
};