#include "script_component.hpp"

params ["_medic", "_patient"];

[_patient, "activity", "%1 performed CPR", [[_medic, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

private _bloodVolume = GET_BLOOD_VOLUME(_patient);
private _successChance = linearConversion [BLOOD_VOLUME_CLASS_4_HEMORRHAGE, BLOOD_VOLUME_CLASS_2_HEMORRHAGE, _bloodVolume, ace_medical_treatment_cprSuccessChanceMin, ace_medical_treatment_cprSuccessChanceMax, true];

private _isMedic = [_medic] call ace_medical_treatment_fnc_isMedic;
if (_isMedic) { _successChance = _successChance + 0.1; };

_successChance = [_successChance, _patient] call twc_medical_core_fnc_badLuckProtection;

if ((random 1) < _successChance) then {
	["ace_medical_CPRSucceeded", _patient] call CBA_fnc_localEvent;
};
