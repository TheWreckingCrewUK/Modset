// wrapper for locality on setDead with ace medical fnc -- try and avoid using, if possible
// [_unit] call TWC_Medical_Core_fnc_setDead;
params ["_unit"];

[_unit, "#scripted"] call ace_medical_status_fnc_setDead;