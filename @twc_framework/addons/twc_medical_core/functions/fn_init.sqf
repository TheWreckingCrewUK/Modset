[] call twc_medical_fnc_bloodlustInit;

// Don't progress further if it's a headless client
if !(hasInterface) exitWith {};

// old one for reference? not sure why I left it in, needs investigating
["twc_medical_evh_fullHeal", { _this call twc_medical_fnc_fullHealWithoutLog; }] call CBA_fnc_addEventHandler;

["TWC_Medical_Core_ResusUnit", { _this call TWC_Medical_Core_fnc_resuscitateUnitLocal; }] call CBA_fnc_addEventHandler;
