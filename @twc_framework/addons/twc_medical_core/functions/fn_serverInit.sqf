/** HEADLESS CLIENT IS TECHNICALLY "CLIENT" INIT **/
[] call twc_medical_fnc_bloodlustInit;

["TWC_Medical_Core_CleanCorpse", { _this call TWC_Medical_fnc_cleanCorpseLocal; }] call CBA_fnc_addEventHandler;
