//US Army
SpawnStrykerAction = ["SpawnStryker","Stryker M2","",{_veh = "CUP_B_M1126_ICV_M2_Desert_Slat" createVehicle (position jetSpawnPad);_dir = getDir jetSpawnPad; _dir = _dir + 180; _veh setDir _dir; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnStrykerAction] call ace_interact_menu_fnc_addActionToClass;

SpawnM113A3action = ["SpawnM113A3","M113A3","",{_veh = "CUP_B_M113_USA" createVehicle (position jetSpawnPad);_dir = getDir jetSpawnPad; _dir = _dir + 180; _veh setDir _dir; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnM113A3Action] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVM2Action = ["SpawnHMMVM2","HMMV M2","",{_veh = "CUP_B_HMMWV_M2_USA" createVehicle (position jetSpawnPad);_dir = getDir jetSpawnPad; _dir = _dir + 180; _veh setDir _dir; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVM2Action] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVMK19Action = ["SpawnHMMVMK19","HMMV MK19","",{_veh = "CUP_B_HMMWV_MK19_USA" createVehicle (position jetSpawnPad);_dir = getDir jetSpawnPad; _dir = _dir + 180; _veh setDir _dir; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVMK19Action] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVTOWAction = ["SpawnHMMVTOW","HMMV TOW","",{_veh = "CUP_B_HMMWV_TOW_USA" createVehicle (position jetSpawnPad);_dir = getDir jetSpawnPad; _dir = _dir + 180; _veh setDir _dir; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVTOWAction] call ace_interact_menu_fnc_addActionToClass;

SpawnHMMVTransportAction = ["SpawnHMMVTransport","HMMWV Transport","",{_veh = "CUP_B_HMMV_Transport_USA" createVehicle (position jetSpawnPad);_dir = getDir jetSpawnPad; _dir = _dir + 180; _veh setDir _dir; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHMMVTransportAction] call ace_interact_menu_fnc_addActionToClass;