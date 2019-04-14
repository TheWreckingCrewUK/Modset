params ["_caller", "_target"];

_caller setVariable ["TWC_Medical_Resuscitate_hasMoved", false, true];

if !([_target] call twc_medical_fnc_canCPR) exitWith {
	[_target, "activity", localize "STR_TWC_CPR_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_TWC_CPR_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

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

_probability = [_probability, _target] call TWC_Medical_Resuscitate_fnc_badLuckProtection;

_isPublic = missionNameSpace getVariable ["TWC_enablePublicCPRChance", false];
if (_isPublic) then { _probability = _probability + 5; };

_diceRoll = floor(random 100);

if (_probability < 3) then {
	_probability = 3;
};

if ( _probability >= _diceRoll ) exitWith {
	_wakeUp = [_caller, _target] call twc_medical_fnc_getWakeUp;
	[_target, [30, 35, 40], true, _wakeUp] call twc_medical_fnc_resuscitate;

	_forceSync = (CBA_missionTime - 60);
	_target setVariable ["ACE_medical_lastMomentValuesSynced", _forceSync, true];

	[_target, "activity", localize "STR_TWC_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_TWC_CPR_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

	true;
};

[_target, "activity", localize "STR_TWC_CPR_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_TWC_CPR_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

false;