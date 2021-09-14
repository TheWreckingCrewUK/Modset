params ["_unit", "_isUncon"];

if (!local _unit) exitWith {};

// first, let's make sure they haven't passed the death threshold (in 2 frames)
[{ [TWC_Medical_fnc_checkDamage, _this] call CBA_fnc_execNextFrame; }, _unit] call CBA_fnc_execNextFrame;

// the unit just went unconsicous, we don't need to double check until some time
// prevents waking up temp knock outs prematurely

_time = 2 + (random 4);
[twc_medical_fnc_unconSoundLoop, [_unit], _time] call CBA_fnc_waitAndExecute;

if (isPlayer _unit) exitWith {
	if (_isUncon) exitWith {
		// Double check they're in the proper animation after a second or so
		// and if not, put them into it
		[{
			params ["_unit"];

			_anim = [_unit] call ace_common_fnc_getDeathAnim;

			if ((_unit getVariable ["ACE_isUnconscious", false]) and (animationState _unit != _anim)) then {
				[_unit, _anim, 2, true] call ace_common_fnc_doAnimation;
			};
		}, [_unit], 1, 0] call CBA_fnc_waitAndExecute;
		
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