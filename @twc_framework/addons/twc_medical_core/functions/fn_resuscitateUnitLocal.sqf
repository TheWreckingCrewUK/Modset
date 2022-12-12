#include "\z\ace\addons\main\script_macros.hpp"
#include "\z\ace\addons\medical_engine\script_macros_medical.hpp"

/** Function to resuscitate a unit, primarily used in debugging/fixing broken states from changes (maybe medical training too) **/
// Is not a replacement for fullheal! Is only enough to wake up! Doesn't do bandaging at all, may immediately go uncon!
params ["_patient"];

if !IS_UNCONSCIOUS(_patient) exitWith {};

private _currentBV = _patient getVariable [VAR_BLOOD_VOL, DEFAULT_BLOOD_VOLUME];
private _currentPain = _patient getVariable [VAR_PAIN, 0];
private _currentHR = _patient getVariable [VAR_HEART_RATE, DEFAULT_HEART_RATE];

// check if on fire, then put out the fire before resuscitating
if ((["ace_fire"] call EFUNC(common,isModLoaded)) && {[_patient] call EFUNC(fire,isBurning)}) then {
	_patient setVariable [QEGVAR(fire,intensity), 0, true];
};

if IN_CRDC_ARRST(_patient) then {
	TRACE_1("Exiting cardiac arrest",_patient);
	[QEGVAR(medical,CPRSucceeded), _patient] call CBA_fnc_localEvent;
	_state = GET_SM_STATE(_patient);
	TRACE_1("after CPRSucceeded",_state);
};

// Stablise the unit first - use their current values, if it's over the thresholds (pain is lower, bv is higher)
_patient setVariable [VAR_PAIN, ((PAIN_UNCONSCIOUS_DEFAULT - 0.05) min _currentPain), true];
_patient setVariable [VAR_BLOOD_VOL, (BLOOD_VOLUME_CLASS_2_HEMORRHAGE max _currentBV), true];

// Vitals - BP is set to default for now, it will self-regulate again, this is most likely going to cause issues
// TODO: 2d array comparison and correction
// TODO: see if worth fulfilling check for below conditional - at the moment it seems better to fullheal in the case this fails aka they're bleeding heavily
// if (_bloodLoss > (BLOOD_LOSS_KNOCK_OUT_THRESHOLD * _cardiacOutput) / 2) exitWith { false }; -- from hasStableVitals in ACE
_patient setVariable [VAR_HEART_RATE, (40 max _currentHR), true];
_patient setVariable [VAR_BLOOD_PRESS, [80, 120], true];

// wakeup needs to be done after achieving stable vitals, but before manually reseting unconc var
if (!([_patient] call EFUNC(medical_status,hasStableVitals))) then { ERROR_2("resuscitateUnitLocal [unit %1][state %2] did not restore stable vitals",_patient,_state); };

[QEGVAR(medical,WakeUp), _patient] call CBA_fnc_localEvent;

_state = GET_SM_STATE(_patient);

if IS_UNCONSCIOUS(_patient) then { ERROR_2("resuscitateUnitLocal [unit %1][state %2] failed to wake up patient",_patient,_state); };