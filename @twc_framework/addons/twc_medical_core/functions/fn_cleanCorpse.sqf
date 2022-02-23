// wrapper for locality on cleaning a corpse for bloodlust compat
// [_unit] call TWC_Medical_Core_fnc_cleanCorpse;
params ["_unit"];

["TWC_Medical_Core_CleanCorpse", _unit, _unit] call CBA_fnc_targetEvent;