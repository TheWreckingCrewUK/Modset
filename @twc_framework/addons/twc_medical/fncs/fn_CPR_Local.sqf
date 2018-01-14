params ["_caller", "_target"];

if !([_target] call twc_medical_fnc_canCPR) exitWith {
	[_target, "activity", localize "STR_TWC_CPR_UNNEEDED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_TWC_CPR_UNNEEDED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

	false;
};

_isMedic = _caller getVariable ["ACE_medical_medicClass", 0];
_probability = 2;

if (_isMedic > 0) then {
	_probability = 7;
};

// potential issue here, needs investigating
_gotEpi = _target getVariable ["ace_medical_epinephrine_insystem", 0];
_probability = _probability + (5 * _gotEpi);

//reduces probability depending on total blood loss of patient:
_bloodLoss = [_caller, _target] call twc_medical_fnc_getBloodLoss;
_probability = _probability - (10 - (10 * _bloodLoss));

_diceRoll = floor(random 100);

if (_probability < 2) then {
	_probability = 2;
};

if ( _probability >= _diceRoll ) exitWith {
	_target setVariable ["ace_medical_inCardiacArrest", nil, true];
	_target setVariable ["ace_medical_heartRate", (round(random [30, 35, 40])), true];
	
	/* _bloodPressure = [_target] call ace_medical_fnc_getBloodPressure;
	_bloodPressure params ["_bloodPressureL", "_bloodPressureH"];
	
	_changed = false;
	
	if (_bloodPressureH < 60) then {
		_bloodPressureH = 60;
		_changed = true;
	};
	
	if (_bloodPressureL < 40) then {
		_bloodPressureL = 40;
		_changed = true;
	};
	
	if (_changed) then {
		_target setVariable ["ace_medical_bloodPressure", [_bloodPressureL, _bloodPressureH], true];
	};
	
	if ((_target getVariable ["ace_medical_bloodVolume", 0]) < 30) then {
		_target setVariable ["ace_medical_bloodVolume", 30, true];
	}; */
	
	// Q  = 19.04761
	// bV = 60
	// HR = 40
	
	// (60/19.04761) + (40/80-1)
	// 3.1500 [...] + -0.5
	// 2.65
	
	// (2.65 * 0.229)
	// bPH = 0.60685 (*100)
	// (2.65 * 0.1524)
	// bPL = 0.40386 (*100)
	
	if ((_target getVariable ["ace_medical_bloodVolume", 0]) < 60) then {
		_target setVariable ["ace_medical_bloodVolume", 60, true];
		_resistance = (_target getVariable ["ace_medical_peripheralResistance", 100]);
		
		_bloodPressureH = (0.60685 * _resistance);
		_bloodPressureL = (0.40386 * _resistance);
		_target setVariable ["ace_medical_bloodPressure", [_bloodPressureL, _bloodPressureH], true];
	};
	
	_target setVariable ["ACE_isUnconscious", false, true];

	if (_target getVariable ["ace_medical_inReviveState", false]) then {
		_target setVariable ["ace_medical_inReviveState", false, true];
	};
	
	[_target, "activity", localize "STR_TWC_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_TWC_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

	true;
};

[_target, "activity", localize "STR_TWC_CPR_EXECUE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_TWC_CPR_EXECUE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

false;