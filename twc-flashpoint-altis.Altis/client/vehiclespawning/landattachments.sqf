//British:
SpawnLRAction = ["SpawnLR","Land Rover","",{["CUP_B_LR_Transport_GB_W"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnLRAction] call ace_interact_menu_fnc_addActionToClass;