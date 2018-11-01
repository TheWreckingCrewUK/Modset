["ace_unconscious", {_this call twc_medical_fnc_handleUncon }] call CBA_fnc_addEventHandler;
[] call twc_medical_fnc_bloodlustInit;

if (isDedicated || !hasInterface) exitWith {};
["twc_medical_evh_CPR_Local", { _this call twc_medical_fnc_CPR_Local }] call CBA_fnc_addEventHandler;
["twc_medical_evh_Defib_Local", { _this call twc_medical_fnc_Defib_Local }] call CBA_fnc_addEventHandler;
["twc_medical_evh_addTime", { _this call twc_medical_fnc_addTime }] call CBA_fnc_addEventHandler;

if (isNil "twc_medical_defaultMaxTime") then {
	missionNamespace setVariable ["twc_medical_defaultMaxTime", (missionNamespace getVariable ["ace_medical_maxReviveTime", 180])];
};