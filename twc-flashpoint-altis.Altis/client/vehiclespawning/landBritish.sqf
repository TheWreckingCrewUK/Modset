//British:
SpawnLRAction = ["SpawnLR","Land Rover","",{["CUP_B_LR_Transport_GB_W"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnLRAction] call ace_interact_menu_fnc_addActionToClass;

SpawnJackal2L2A1Action = ["SpawnJackal2L2A1","Jackal L2A1","",{["UK3CB_BAF_Jackal2_L2A1_W"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnJackal2L2A1Action] call ace_interact_menu_fnc_addActionToClass;

SpawnJackal2GMGAction = ["SpawnJackal2GMG","Jackal GMG","",{["UK3CB_BAF_Jackal2_GMG_W"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnJackal2GMGAction] call ace_interact_menu_fnc_addActionToClass;

SpawnBulldogAction = ["SpawnBulldog","FV432 Bulldog","",{["CUP_B_FV432_Bulldog_GB_D"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnBulldogAction] call ace_interact_menu_fnc_addActionToClass;

SpawnRidgebackAction = ["SpawnRidgeback","Ridgeback","",{["CUP_B_Ridgback_HMG_GB_D"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnRidgebackAction] call ace_interact_menu_fnc_addActionToClass;