// wrapper for locality on setDead with ace medical fnc -- try and avoid using, if possible
// [_unit] call TWC_Medical_Core_fnc_setDead;
params ["_unit", ["_reason", "#scripted"]];

// slightly concerned about lastdamagesource and instigator not being correct here?
[_unit, _reason] call ace_medical_status_fnc_setDead;