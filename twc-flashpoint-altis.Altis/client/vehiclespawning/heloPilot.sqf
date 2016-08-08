//This file is currently Unused

SpawnAW19Action = ["SpawnAW159","AW19 Wildcat","",{_oldVeh = nearestObjects [armourSpawnPad, ["Car","Tank","air"],10]; {deleteVehicle _x}forEach _oldVeh; _veh = "UK3CB_BAF_Wildcat_AH1_CAS_8A" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;[_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnM1A2Action] call ace_interact_menu_fnc_addActionToClass;

SpawnUH60MAction = ["SpawnUH60M","UH60M Blackhawk","",{_oldVeh = nearestObjects [armourSpawnPad, ["Car","Tank","air"],10]; {deleteVehicle _x}forEach _oldVeh; _veh = "RHS_UH60M_w" createVehicle (position armourSpawnPad);_dir = getDir armourSpawnPad; _dir = _dir + 180; _veh setDir _dir;[_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnM1A2Action] call ace_interact_menu_fnc_addActionToClass;