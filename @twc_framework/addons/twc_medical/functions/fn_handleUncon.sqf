params ["_unit", "_isUncon"];

if (!local _unit) exitWith {};

// the unit just went unconsicous, we don't need to double check until some time
// prevents waking up temp knock outs prematurely

_time = 2 + (random 4);
[twc_medical_fnc_unconSoundLoop, [_unit], _time] call CBA_fnc_waitAndExecute;

if (isPlayer _unit) exitWith {
	if (_isUncon) exitWith {
		_unconTimer = ceil(random 5) + 1;
		[twc_medical_fnc_extendedUnconLoop, [_unit], _unconTimer] call CBA_fnc_waitAndExecute;
	};
};

// AI from this point on
if (_isUncon) then {
	_unconTimer = ceil(random 5) + 1;
	_unit disableAI "ANIM";
	[twc_medical_fnc_handleAIUncon, [_unit], _unconTimer] call CBA_fnc_waitAndExecute;
} else {
	_unit enableAI "ANIM";
};