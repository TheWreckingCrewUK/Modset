//This file is currently Unused

SpawnAW19Action = ["SpawnAW159","AW19 Wildcat","",{_veh = "CUP_B_AW159_Cannon_GB" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;[_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnM1A2Action] call ace_interact_menu_fnc_addActionToClass;

SpawnUH60MAction = ["SpawnUH60M","UH60M Blackhawk","",{_veh = "CUP_B_UH60M_US" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;[_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnM1A2Action] call ace_interact_menu_fnc_addActionToClass;