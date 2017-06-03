params ["_caller", "_target"];

if !([_target] call twc_cpr_fnc_canCPR) exitWith {};

private _isMedic = _caller getVariable ["ACE_medical_medicClass", 0];
private _probabilities = [10,5];

private _probability = call {
	// isn't a medic
	if (_isMedic isEqualTo 0) exitWith {
		_probabilities select 1;
	};
	
	_probabilities select 0;
};

// potential issue here, needs investigating
private _gotEpi = _target getVariable ["ace_medical_epinephrine_insystem", 0];
_probability = _probability + (5 * ((_gotEpi min 0) max 1));

systemChat format["%1 _gotEpi - %2 _probability", str _gotEpi, str _probability];

//reduces probability depending on total blood loss of patient:
private _bloodLoss = [_caller, _target] call twc_cpr_fnc_getBloodLoss;
_probability = _probability - (10 - (10 * ((_bloodLoss max 1) min 0)));

systemChat format["%1 _bloodLoss - %2 _probability", str _gotEpi, str _probability];

private _diceRoll = 1 + floor(random 100);

if (_probability < 2) then {
	_probability = 2;
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