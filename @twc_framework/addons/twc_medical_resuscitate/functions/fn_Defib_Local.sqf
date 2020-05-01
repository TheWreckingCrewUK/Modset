/*
	action:
	- takes 10 seconds to perform
	- has a failure rate, with the patients prognosis affected by their blood level & epi (like cpr)

	on success:
	- patients heart rate should be at a reasonable rate, but will require further attention when convienent
	- patient is in pain, but not in a state to receive morphine

	on failure:
	- nothing
*/
params ["_caller", "_target"];

if !(alive _target) exitWith {
	[_target, "activity", localize "STR_TWC_CPR_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_TWC_CPR_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	
	false;
};

_probability = 40;

_gotEpi = _target getVariable ["ace_medical_epinephrine_insystem", 0];
_probability = _probability + (5 * _gotEpi); // increase by 5% with epi

//reduces probability depending on total blood loss of patient:
_bloodLoss = [_caller, _target] call twc_medical_fnc_getBloodVolume;
_probability = _probability - (35 - (35 * _bloodLoss));

// get for later
_painLevel = _target getVariable ["ace_medical_pain", 0];
_painToAdd = 0.1; // shockingly shocking shocks shockee, ouch

_diceRoll = floor(random 100);

if !(isNull objectParent _caller) then {
	playSound3D ["twc_medical_resuscitate\sounds\defib.ogg", _caller, false, getPosASL _caller, 2, 1, 10];
} else {
	playSound3D ["twc_medical_resuscitate\sounds\defib.ogg", vehicle _caller, true, getPosASL (vehicle _caller), 2, 1, 10];
};

_probability = [_probability, _target, "Defib"] call TWC_Medical_Resuscitate_fnc_badLuckProtection;

if (_probability < 5) then {
	_probability = 5;
};

if ( _probability >= _diceRoll ) exitWith {
	_painToAdd = ((floor (random [0, 3, 5])) / 10); // they're gonna feel this one
	_target setVariable ["ace_medical_pain", (_painLevel + _painToAdd), true];

	_wakeUp = [_caller, _target, false] call twc_medical_resuscitate_fnc_getWakeUp;
	[_target, [40, 50, 65], false, _wakeUp] call twc_medical_resuscitate_fnc_resuscitate;

	_forceSync = (CBA_missionTime - 60);
	_target setVariable ["ACE_medical_lastMomentValuesSynced", _forceSync, true];

	[_target, "activity", localize "STR_TWC_DEFIB_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_TWC_DEFIB_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

	true;
};

_target setVariable ["ace_medical_pain", (_painLevel + _painToAdd), true];

[_target, "activity", localize "STR_TWC_DEFIB_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_TWC_DEFIB_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

false;