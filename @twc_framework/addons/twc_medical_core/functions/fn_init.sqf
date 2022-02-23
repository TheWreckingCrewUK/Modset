[] call twc_medical_fnc_bloodlustInit;

// Don't progress further if it's a headless client or server
if !(hasInterface) exitWith {};

["TWC_Medical_Core_KillUnit", { _this call TWC_Medical_Core_fnc_setDeadLocal; }] call CBA_fnc_addEventHandler;
["TWC_Medical_Core_ResusUnit", { _this call TWC_Medical_Core_fnc_resuscitateUnitLocal; }] call CBA_fnc_addEventHandler;
