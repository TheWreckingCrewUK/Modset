["twc_medical_evh_CPR_Local", { _this call twc_medical_fnc_CPR_Local }] call CBA_fnc_addEventHandler;
["twc_medical_evh_Defib_Local", { _this call twc_medical_fnc_Defib_Local }] call CBA_fnc_addEventHandler;
["twc_medical_evh_addTime", { _this call twc_medical_fnc_addTime }] call CBA_fnc_addEventHandler;
[] call twc_medical_fnc_bloodlustInit;
//[twc_medical_fnc_extendedVitalLoop, [_unit], 30] call CBA_fnc_waitAndExecute; // start e-vital loop 30 seconds after init