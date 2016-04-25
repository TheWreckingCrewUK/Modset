
//US Marines
SpawnAAVAction = ["SpawnAAV","AAV AMTRAK","",{_veh = "CUP_B_AAV_USMC" createVehicle (position jetSpawnPad);_veh setDir 120; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnAAVAction] call ace_interact_menu_fnc_addActionToClass;

SpawnLAVM240Action = ["SpawnLAVM240","LAV M240","",{_veh = "CUP_B_LAV25_HQ_USMC" createVehicle (position jetSpawnPad);_veh setDir 120; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnLAVM240Action] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVM2Action = ["SpawnHMMVM2","HMMV M2","",{_veh = "CUP_B_HMMWV_M2_USMC" createVehicle (position jetSpawnPad);_veh setDir 120; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVM2Action] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVMK19Action = ["SpawnHMMVMK19","HMMV MK19","",{_veh = "CUP_B_HMMWV_MK19_USMC" createVehicle (position jetSpawnPad);_veh setDir 120; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVMK19Action] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVTOWAction = ["SpawnHMMVTOW","HMMV TOW","",{_veh = "CUP_B_HMMWV_TOW_USMC" createVehicle (position jetSpawnPad);_veh setDir 120; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVTOWAction] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVUnarmedAction = ["SpawnHMMVUnarmed","HMMV Unarmed","",{_veh = "CUP_B_HMMWV_Unarmed_USMC" createVehicle (position jetSpawnPad);_veh setDir 120; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVUnarmedAction] call ace_interact_menu_fnc_addActionToClass;

SpawnRG31M2Action = ["SpawnRG31M2","RG31 M2","",{_veh = "CUP_B_RG31_M2_USMC" createVehicle (position jetSpawnPad);_veh setDir 120; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnRG31M2Action] call ace_interact_menu_fnc_addActionToClass;