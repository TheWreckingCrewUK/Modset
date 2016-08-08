SpawnAmmoAction = ["SpawnAmmo","HEMTT Ammo","",{_oldVeh = nearestObjects [armourSpawnPad, ["Car","Tank","air"],10]; {deleteVehicle _x}forEach _oldVeh; _veh = "B_Truck_01_ammo_F" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnAmmoAction] call ace_interact_menu_fnc_addActionToClass;

SpawnFuelAction = ["SpawnFuel","HEMTT Fuel","",{_oldVeh = nearestObjects [armourSpawnPad, ["Car","Tank","air"],10]; {deleteVehicle _x}forEach _oldVeh; _veh = "B_Truck_01_fuel_F" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnFuelAction] call ace_interact_menu_fnc_addActionToClass;

SpawnRepairAction = ["SpawnRepair","HEMTT Repair","",{_oldVeh = nearestObjects [armourSpawnPad, ["Car","Tank","air"],10]; {deleteVehicle _x}forEach _oldVeh; _veh = "B_Truck_01_Repair_F" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;_veh addItemCargoGlobal ["ToolKit",1];},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnRepairAction] call ace_interact_menu_fnc_addActionToClass;