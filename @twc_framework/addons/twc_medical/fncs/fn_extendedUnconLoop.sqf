params ["_unit"];

if (!local _unit) exitWith {};
if (!alive _unit) exitWith {};

_continue = true;
_unCon = (_unit getVariable ["ACE_isUnconscious", false]);

if (_unCon) then {
	_unit hideObjectGlobal false;
	_bloodVolume = (_unit getVariable ["ace_medical_bloodVolume", 100]);
	_heartRate = (_unit getVariable ["ace_medical_heartRate", 80]);
	_inReviveState = (_unit getVariable ["ace_medical_inReviveState", false]);

	if (_inReviveState) then {
		// should we be ?
		if (_heartRate >= 30 && _bloodVolume >= 50) then {
			_unit setVariable ["ace_medical_inReviveState", false, true];
		};
	};

	if (_bloodVolume <= 0) exitWith {
		[_unit, true, false] call ace_medical_fnc_setDead;
	};

	if (!([_unit] call ace_medical_fnc_getUnconsciousCondition)) then {
		_unit setVariable ["ACE_isUnconscious", false, true];
		_continue = false;
	};
};

if (_continue) then {
	[twc_medical_fnc_extendedUnconLoop, [_unit], 1] call CBA_fnc_waitAndExecute; // execute this fnc again in a second
};