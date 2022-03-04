// wrapper for locality on setDead with ace medical fnc -- try and avoid using, if possible
// [_unit] call TWC_Medical_Core_fnc_setDead;
params ["_unit", ["_reason", "#scripted"]];

["TWC_Medical_Core_KillUnit", [_unit, _reason], _unit] call CBA_fnc_targetEvent;