/*
	action:
	- takes 8 seconds to perform
	- has a failure rate, with the patients prognosis affected by their blood level & epi (like cpr)

	on success:
	- patients heart rate should be at a reasonable rate, but will require further attention when convienent
	- patient is in pain, but not in a state to receive morphine

	on failure:
	- nothing
*/
params ["_caller", "_target"];

if !(alive _target) exitWith {
	[_target, "activity", localize "STR_TWC_CPR_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
	[_target, "activity_view", localize "STR_TWC_CPR_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
	
	false;
};

private _timeLeft = _unit getVariable ["ace_medical_statemachine_cardiacArrestTimeLeft", -1];
_timeLeft = _timeLeft - 10; // duration of the action + some spare, this will make sure we don't need to CPR and defib at same time
_unit setVariable ["ace_medical_statemachine_cardiacArrestTimeLeft", _timeLeft];

_probability = 40;

_gotEpi = [_target, "Epinephrine"] call ace_medical_status_fnc_getMedicationCount;
_probability = _probability + (5 * _gotEpi); // increase by 5% with epi

//reduces probability depending on total blood loss of patient:
_bloodLoss = [_caller, _target] call twc_medical_fnc_getBloodVolume;
_probability = _probability - (35 - (35 * _bloodLoss));

_diceRoll = floor(random 100);

if !(isNull objectParent _caller) then {
	playSound3D ["twc_medical_defib\sounds\defib.ogg", _caller, false, getPosASL _caller, 3, 1, 20];
} else {
	playSound3D ["twc_medical_defib\sounds\defib.ogg", vehicle _caller, true, getPosASL (vehicle _caller), 3, 1, 20];
};

_probability = [_probability, _target] call TWC_Medical_fnc_badLuckProtection;

if (_probability < 10) then {
	_probability = 10;
};

if ( _probability >= _diceRoll ) exitWith {
	[_target] call TWC_Medical_fnc_resuscitateUnitLocal;

	[_target, "activity", localize "STR_TWC_DEFIB_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
	[_target, "activity_view", localize "STR_TWC_DEFIB_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

	true;
};

[_target, "activity", localize "STR_TWC_DEFIB_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
[_target, "activity_view", localize "STR_TWC_DEFIB_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

false;