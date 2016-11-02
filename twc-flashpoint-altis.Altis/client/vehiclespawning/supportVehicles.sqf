SpawnAmmoAction = ["SpawnAmmo","HEMTT Ammo","",{["B_Truck_01_ammo_F"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnAmmoAction] call ace_interact_menu_fnc_addActionToClass;

SpawnFuelAction = ["SpawnFuel","HEMTT Fuel","",{["B_Truck_01_fuel_F"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnFuelAction] call ace_interact_menu_fnc_addActionToClass;

SpawnRepairAction = ["SpawnRepair","HEMTT Repair","",{["B_Truck_01_Repair_F"] spawn twc_fnc_spawnGroundVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnRepairAction] call ace_interact_menu_fnc_addActionToClass;