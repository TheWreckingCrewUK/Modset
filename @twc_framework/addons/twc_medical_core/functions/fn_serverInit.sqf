/** HEADLESS CLIENT IS TECHNICALLY "CLIENT" INIT **/
[] call twc_medical_fnc_bloodlustInit;

["twc_medical_evh_fullHeal", { _this call twc_medical_fnc_fullHealWithoutLog; }] call CBA_fnc_addEventHandler;