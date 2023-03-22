params ["_unit"];

if (!local _unit) exitWith {};
if (!alive _unit) exitWith {};

if (missionnamespace getvariable ["twc_pubaiuncon", false]) exitwith {};

_unCon = (_unit getVariable ["ACE_isUnconscious", false]);
_continue = _unCon;

if (_unCon) then {
	_unit hideObjectGlobal false;

	_diceRoll = floor random (10);

	if (_diceRoll <= 4) then {
		[_unit, true] call ace_medical_fnc_setDead;
		_continue = false;
	} else {
		if (_diceRoll > 8) then {
			// rolled nat 10, get healed' (except for head)
			[_unit, ["head"]] call twc_medical_fnc_fullyBandageUnit;
			_continue = false;
		};
	};

	if (!([_unit] call ace_medical_fnc_getUnconsciousCondition)) then {
		_unit setVariable ["ACE_isUnconscious", false, true];
		_continue = false;
	};
};

if (_continue) then {
	// execute this fnc again in a bit
	_delay = (floor random (16)) + 4;
	[twc_medical_fnc_handleAIUncon, [_unit], _delay] call CBA_fnc_waitAndExecute;
};