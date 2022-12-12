params ["_medic", "_patient", "_bodyPart", "_treatmentClassname"];

// done here, as it only needs to be called once
_patient setVariable ["TWC_Medical_receivingAss", true, true];

[_patient, "activity", "STR_TWC_ASS_EXECUTE", [[_medic, false, true] call ACE_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

["twc_medical_assLocal", [_patient, _bodyPart, _treatmentClassname], _patient] call CBA_fnc_targetEvent;