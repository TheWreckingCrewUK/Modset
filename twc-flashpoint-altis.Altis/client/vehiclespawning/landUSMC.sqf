//US Marines
SpawnAAVAction = ["SpawnAAV","AAV AMTRAK","",{["CUP_B_AAV_USMC"] call twc_fnc_spawnGrondVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnAAVAction] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVM2Action = ["SpawnHMMVM2","HMMV M2","",{["rhsusf_m1025_w_m2"] call twc_fnc_spawnGrondVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVM2Action] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVMK19Action = ["SpawnHMMVMK19","HMMV MK19","",{["rhsusf_m1025_w_mk19"] call twc_fnc_spawnGrondVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVMK19Action] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVTOWAction = ["SpawnHMMVTOW","HMMV TOW","",{["CUP_B_HMMWV_TOW_USMC"] call twc_fnc_spawnGrondVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVTOWAction] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVUnarmedAction = ["SpawnHMMVUnarmed","HMMV Unarmed","",{["rhsusf_m998_w_4dr_fulltop"] call twc_fnc_spawnGrondVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVUnarmedAction] call ace_interact_menu_fnc_addActionToClass;

SpawnRG31M2Action = ["SpawnRG31M2","RG31 M2","",{["CUP_B_RG31_M2_USMC"] call twc_fnc_spawnGrondVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnRG31M2Action] call ace_interact_menu_fnc_addActionToClass;