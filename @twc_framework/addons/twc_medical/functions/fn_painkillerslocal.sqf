
/*
 * Author: Glowbal, mharis001
 * Local callback for administering medication to a patient.
 *
 * Arguments:
 * 0: Patient <OBJECT>
 * 1: Body Part <STRING>
 * 2: Treatment <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "RightArm", "Morphine"] call ace_medical_treatment_fnc_medicationLocal
 *
 * Public: No
 */

systemchat "painkillers in";


params ["_patient", "_bodyPart", "_classname"];

// Medication has no effects on dead units
if (!alive _patient) exitWith {};

// Get adjustment attributes for used medication
private _defaultConfig = configFile >> "ACE_Medical_treatment" >> "Medication";
private _medicationConfig = _defaultConfig >> "painkillers";

private _painReduce             = getNumber (_medicationConfig >> "painReduce");
private _timeInSystem           = getNumber (_medicationConfig >> "timeInSystem");
private _timeTillMaxEffect      = getNumber (_medicationConfig >> "timeTillMaxEffect");
private _maxDose                = getNumber (_medicationConfig >> "maxDose");
private _viscosityChange        = getNumber (_medicationConfig >> "viscosityChange");
private _hrIncreaseLow          = getArray (_medicationConfig >> "hrIncreaseLow");
private _hrIncreaseNormal       = getArray (_medicationConfig >> "hrIncreaseNormal");
private _hrIncreaseHigh         = getArray (_medicationConfig >> "hrIncreaseHigh");
private _incompatibleMedication = getArray (_medicationConfig >> "incompatibleMedication");

private _heartRate = _patient getvariable ["ace_medical_heartrate",1];
private _hrIncrease = [_hrIncreaseLow, _hrIncreaseNormal, _hrIncreaseHigh] select (floor ((0 max _heartRate min 110) / 55));
_hrIncrease params ["_minIncrease", "_maxIncrease"];
private _heartRateChange = _minIncrease + random (_maxIncrease - _minIncrease);

// Adjust the medication effects and add the medication to the list
//TRACE_3("adjustments",_heartRateChange,_painReduce,_viscosityChange);
[_patient, _className, _timeTillMaxEffect, _timeInSystem, _heartRateChange, _painReduce, _viscosityChange] call ace_medical_status_fnc_addMedicationAdjustment;

// Check for medication compatiblity
[_patient, _className, _maxDose, _incompatibleMedication] call ace_medical_treatment_fnc_onMedicationUsage;