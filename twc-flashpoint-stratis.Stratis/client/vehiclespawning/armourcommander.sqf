SpawnM1A2Action = ["SpawnM1A2","M1A2","",{if(armourSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_M1A2_TUSK_MG_US_Army" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;armourSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnM1A2Action] call ace_interact_menu_fnc_addActionToClass;

SpawnM2A3Action = ["SpawnM2A3","M2A3","",{if(armourSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_M2A3Bradley_USA_D" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;armourSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnM2A3Action] call ace_interact_menu_fnc_addActionToClass;

SpawnFV510Action = ["SpawnFV510","FV510","",{if(armourSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_FV510_GB_D_Slat" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;armourSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnFV510Action] call ace_interact_menu_fnc_addActionToClass;

SpawnLAV25Action = ["SpawnLAV25","LAV25","",{if(armourSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_LAV25_USMC" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;armourSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnLAV25Action] call ace_interact_menu_fnc_addActionToClass;

SpawnM6Action = ["SpawnM6","M6","",{if(armourSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_M6LineBacker_USA_D" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;armourSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnM6Action] call ace_interact_menu_fnc_addActionToClass;

SpawnM1128Action = ["SpawnM1128","M1128","",{if(armourSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_M1128_MGS_Desert_Slat" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;armourSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnM1128Action] call ace_interact_menu_fnc_addActionToClass;