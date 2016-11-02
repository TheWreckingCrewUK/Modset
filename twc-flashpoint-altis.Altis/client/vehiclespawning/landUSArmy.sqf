//US Army
SpawnM2A3Action = ["SpawnM2A3","M2A3","",{["RHS_M2A3_BUSKIII_wd"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnM2A3Action] call ace_interact_menu_fnc_addActionToClass;

SpawnStrykerAction = ["SpawnStryker","Stryker M2","",{["CUP_B_M1126_ICV_M2_Desert_Slat"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnStrykerAction] call ace_interact_menu_fnc_addActionToClass;

SpawnM113A3action = ["SpawnM113A3","M113A3","",{["rhsusf_m113_usarmy"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnM113A3Action] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVM2Action = ["SpawnHMMVM2","HMMV M2","",{["rhsusf_m1025_w_m2"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVM2Action] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVMK19Action = ["SpawnHMMVMK19","HMMV MK19","",{["rhsusf_m1025_w_mk19"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVMK19Action] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVTOWAction = ["SpawnHMMVTOW","HMMV TOW","",{["CUP_B_HMMWV_TOW_USA"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVTOWAction] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVTransportAction = ["SpawnHMMVTransport","HMMWV Transport","",{["rhsusf_m998_w_4dr_fulltop"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVTransportAction] call ace_interact_menu_fnc_addActionToClass;