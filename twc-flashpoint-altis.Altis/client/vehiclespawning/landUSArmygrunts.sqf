//US Army
SpawnHMMVM2Action = ["SpawnHMMVM2","HMMV M2","",{["rhsusf_m1025_w_m2"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVM2Action] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVMK19Action = ["SpawnHMMVMK19","HMMV MK19","",{["rhsusf_m1025_w_mk19"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVMK19Action] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVTransportAction = ["SpawnHMMVTransport","HMMWV Transport","",{["rhsusf_m998_w_4dr_fulltop"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVTransportAction] call ace_interact_menu_fnc_addActionToClass;