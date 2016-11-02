//This file is currently Unused

SpawnAW19Action = ["SpawnAW159","AW19 Wildcat","",{["UK3CB_BAF_Wildcat_AH1_CAS_8A"] spawn twc_fnc_spawnAirVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnAW19Action] call ace_interact_menu_fnc_addActionToClass;

SpawnUH60MAction = ["SpawnUH60M","UH60M Blackhawk","",{["RHS_UH60M_w"] spawn twc_fnc_spawnAirVehicle},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnUH60MAction] call ace_interact_menu_fnc_addActionToClass;