//British:
SpawnLRAction = ["SpawnLR","Land Rover","",{_veh = "CUP_B_LR_Transport_GB_W" createVehicle (position jetSpawnPad);_dir = getDir jetSpawnPad; _dir = _dir + 180; _veh setDir _dir; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnLRAction] call ace_interact_menu_fnc_addActionToClass;

SpawnJackal2L2A1Action = ["SpawnJackal2L2A1","Jackal L2A1","",{_veh = "CUP_B_Jackal2_L2A1_GB_W" createVehicle (position jetSpawnPad);_dir = getDir jetSpawnPad; _dir = _dir + 180; _veh setDir _dir; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnJackal2L2A1Action] call ace_interact_menu_fnc_addActionToClass;

SpawnJackal2GMGAction = ["SpawnJackal2GMG","Jackal GMG","",{_veh = "CUP_B_Jackal2_GMG_GB_W" createVehicle (position jetSpawnPad);_dir = getDir jetSpawnPad; _dir = _dir + 180; _veh setDir _dir; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnJackal2GMGAction] call ace_interact_menu_fnc_addActionToClass;

SpawnBulldogAction = ["SpawnBulldog","FV432 Bulldog","",{_veh = "CUP_B_FV432_Bulldog_GB_D" createVehicle (position jetSpawnPad);_dir = getDir jetSpawnPad; _dir = _dir + 180; _veh setDir _dir; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnBulldogAction] call ace_interact_menu_fnc_addActionToClass;

SpawnRidgebackAction = ["SpawnRidgeback","Ridgeback","",{_veh = "CUP_B_Ridgback_HMG_GB_D" createVehicle (position jetSpawnPad);_dir = getDir jetSpawnPad; _dir = _dir + 180; _veh setDir _dir; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnRidgebackAction] call ace_interact_menu_fnc_addActionToClass;