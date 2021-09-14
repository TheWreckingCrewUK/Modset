[] call twc_medical_fnc_bloodlustInit;

// Don't progress further if it's a headless client
if !(hasInterface) exitWith {};

["twc_medical_evh_fullHeal", { _this call twc_medical_fnc_fullHealWithoutLog; }] call CBA_fnc_addEventHandler;
