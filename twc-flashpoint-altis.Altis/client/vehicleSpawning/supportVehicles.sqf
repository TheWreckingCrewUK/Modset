SpawnAmmoAction = ["SpawnAmmo","HEMTT Ammo","",{_veh = "B_Truck_01_ammo_F" createVehicle (position armourSpawnPad);_veh setDir 120},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnAmmoAction] call ace_interact_menu_fnc_addActionToClass;

SpawnFuelAction = ["SpawnFuel","HEMTT Fuel","",{_veh = "B_Truck_01_fuel_F" createVehicle (position armourSpawnPad);_veh setDir 120},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnFuelAction] call ace_interact_menu_fnc_addActionToClass;

SpawnRepairAction = ["SpawnRepair","HEMTT Repair","",{_veh = "B_Truck_01_Repair_F" createVehicle (position armourSpawnPad);_veh setDir 120},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnRepairAction] call ace_interact_menu_fnc_addActionToClass;