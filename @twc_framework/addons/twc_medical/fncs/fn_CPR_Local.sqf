params ["_caller", "_target"];

if !([_target] call twc_medical_fnc_canCPR) exitWith {};

private _isMedic = _caller getVariable ["ACE_medical_medicClass", 0];

_probability = 2;

if (_isMedic > 0) then {
	_probability = 5;
};

// potential issue here, needs investigating
private _gotEpi = _target getVariable ["ace_medical_epinephrine_insystem", 0];
_probability = _probability + (5 * _gotEpi);

//reduces probability depending on total blood loss of patient:
private _bloodLoss = [_caller, _target] call twc_medical_fnc_getBloodLoss;
_probability = _probability - (10 - (10 * _bloodLoss));

private _diceRoll = floor(random 105);

if (_probability < 1) then {
	_probability = 1;
};

if ( _probability >= _diceRoll ) exitWith {
	_target setVariable ["ace_medical_inReviveState", false, true];
	_target setVariable ["ace_medical_inCardiacArrest", nil, true];
	
	call {
		if (_target getVariable "ace_medical_bloodVolume" > 60 && !(_gotEpi > 0.5)) exitWith {
			_target setVariable ["ace_medical_heartRate", 30];
		};
		
		_target setVariable ["ace_medical_heartRate", 40];
	};
	
	if (_target getVariable "ace_medical_bloodVolume" < 30) then {
		_target setVariable ["ace_medical_bloodVolume", 30];
	};
	
	[_target, "activity", localize "STR_TWC_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_TWC_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

	true;
};

[_target, "activity", localize "STR_TWC_CPR_EXECUE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_TWC_CPR_EXECUE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

false;