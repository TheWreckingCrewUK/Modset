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

//if !([_caller, _target] call twc_medical_fnc_canDefib) exitWith {}; 

_probability = 20; // 20% base chance

_gotEpi = _target getVariable ["ace_medical_epinephrine_insystem", 0];
_probability = _probability + (5 * _gotEpi); // increase by 5% with epi

//reduces probability depending on total blood loss of patient:
_bloodLoss = [_caller, _target] call twc_medical_fnc_getBloodVolume;
_probability = _probability - (30 - (30 * _bloodLoss));

// get for later
_painLevel = _unit getVariable ["ace_medical_pain", 0];
_painToAdd = 0.1; // shockingly shocking shocks shockee, ouch

_diceRoll = floor(random 100);

if (_probability < 5) then {
	_probability = 5;
};

if ( _probability >= _diceRoll ) exitWith {
	_target setVariable ["ace_medical_inCardiacArrest", nil, true];
	
	_newHR = floor (random [40, 50, 65]);
	_target setVariable ["ace_medical_heartRate", _newHR, true];
	
	_painToAdd = ((floor (random [0, 3, 5])) / 10); // they're gonna feel this one
	_target setVariable ["ace_medical_pain", (_painLevel + _painToAdd), true];

	_target setVariable ["ACE_isUnconscious", false, true]; // might flash conciousness - kinda like it tbh
	if (_target getVariable ["ace_medical_inReviveState", false]) then {
		_target setVariable ["ace_medical_inReviveState", false, true];
	};

	[_target, "activity", localize "STR_TWC_DEFIB_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_TWC_DEFIB_COMPLETED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

	true;
};

_target setVariable ["ace_medical_pain", (_painLevel + _painToAdd), true];

[_target, "activity", localize "STR_TWC_DEFIB_EXECUE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_TWC_DEFIB_EXECUE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

false;