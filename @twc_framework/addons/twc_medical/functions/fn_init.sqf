["ace_unconscious", {_this call twc_medical_fnc_handleUncon }] call CBA_fnc_addEventHandler;

[] call twc_medical_fnc_bloodlustInit;

[[{ ((_this select 0) getVariable ["TWC_Medical_forcedUncon", false]) }]] call ace_medical_fnc_addUnconsciousCondition;

// Don't progress further if it's a headless client
if !(hasInterface) exitWith {};

["twc_medical_evh_fullHeal", { _this call twc_medical_fnc_fullHealWithoutLog; }] call CBA_fnc_addEventHandler;
["twc_medical_evh_addTime", { _this call twc_medical_fnc_addTime }] call CBA_fnc_addEventHandler;

if (isNil "twc_medical_defaultMaxTime") then {
	missionNamespace setVariable ["twc_medical_defaultMaxTime", (missionNamespace getVariable ["ace_medical_maxReviveTime", 180])];
};