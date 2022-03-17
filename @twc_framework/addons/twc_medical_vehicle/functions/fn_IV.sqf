params ["_medic", "_patient", "_bodyPart", "_treatmentClassname"];

// done here, as it only needs to be called once
_target setVariable ["TWC_Medical_receivingIV", true, true];

["twc_medical_ivLocal", [_patient, _bodyPart, _treatmentClassname], _patient] call CBA_fnc_targetEvent;