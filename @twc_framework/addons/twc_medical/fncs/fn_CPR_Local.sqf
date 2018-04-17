params ["_caller", "_target"];

// animation movement fix
_caller setPos (_caller modelToWorld [0, 0.18, 0]);

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

//increases probability based on how much epi is in their system
_gotEpi = _target getVariable ["ace_medical_epinephrine_insystem", 0];
_probability = _probability + (5 * _gotEpi);

//reduces probability based on how much blood thinners there is in their system (morphine, atropine, adenosine)
_resistance = _target getVariable ["ace_medical_peripheralResistance", 100];
_probability = _probability - (5 * (1 - (_resistance / 100)));

//reduces probability depending on total blood loss of patient:
_bloodLoss = [_caller, _target] call twc_medical_fnc_getBloodVolume;
_probability = _probability - (10 - (10 * _bloodLoss));

_isPublic = missionNameSpace getVariable ["TWC_enablePublicCPRChance", false];
if (_isPublic) then { _probability = _probability + 5; };

_diceRoll = floor(random 110);

if (_probability < 2) then {
	_probability = 2;
};

if ( _probability >= _diceRoll ) exitWith {
	_target setVariable ["ace_medical_inReviveState", false, true];
	_target setVariable ["ace_medical_inCardiacArrest", false, true];

	_target setVariable ["ace_medical_heartRate", (round(random [30, 35, 40])), true];

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

		_bloodPressureH = (0.60685 * _resistance);
		_bloodPressureL = (0.40386 * _resistance);
		_target setVariable ["ace_medical_bloodPressure", [_bloodPressureL, _bloodPressureH], true];
	};
	
	_target setVariable ["ACE_isUnconscious", false, true];

	_forceSync = (CBA_missionTime - 60);
	_target setVariable ["ACE_medical_lastMomentValuesSynced", _forceSync, true];

	[_target, "activity", localize "STR_TWC_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_TWC_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

	true;
};

[_target, "activity", localize "STR_TWC_CPR_EXECUE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_TWC_CPR_EXECUE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

false;