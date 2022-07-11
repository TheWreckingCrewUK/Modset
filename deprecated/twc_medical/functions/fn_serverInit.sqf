/** HEADLESS CLIENT IS TECHNICALLY "CLIENT" INIT **/
["ace_unconscious", { _this call twc_medical_fnc_handleUncon }] call CBA_fnc_addEventHandler;
[] call twc_medical_fnc_bloodlustInit;

["twc_medical_evh_fullHeal", { _this call twc_medical_fnc_fullHealWithoutLog; }] call CBA_fnc_addEventHandler;