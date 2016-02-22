waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };



AmmoMenu = ["MenuAmmo","Ammo","",{},{True}] call ace_interact_menu_fnc_createAction;
["TWC_warrior", 0, ["ACE_MainActions"], AmmoMenu] call ace_interact_menu_fnc_addActionToClass;



AddHEMagazine = ["AddHE","Add HE Magazine","",{call TWC_fnc_AddHE},{"TWC_30mm_HE_item" in items player}] call ace_interact_menu_fnc_createAction;
["TWC_warrior", 0, ["ACE_MainActions","MenuAmmo"], AddHEMagazine] call ace_interact_menu_fnc_addActionToClass;
AddAPMagazine = ["AddAP","Add AP Magazine","",{call TWC_fnc_AddAP},{"TWC_30mm_AP_item" in items player}] call ace_interact_menu_fnc_createAction;
["TWC_warrior", 0, ["ACE_MainActions","MenuAmmo"], AddAPMagazine] call ace_interact_menu_fnc_addActionToClass;

RemoveAPMagazine = ["RemoveAP","Remove AP Magazine","",{call TWC_fnc_RemoveAP},{True}] call ace_interact_menu_fnc_createAction;
["TWC_warrior", 0, ["ACE_MainActions","MenuAmmo"], RemoveAPMagazine] call ace_interact_menu_fnc_addActionToClass;
RemoveHEMagazine = ["RemoveHE","Remove HE Magazine","",{call TWC_fnc_RemoveHE},{True}] call ace_interact_menu_fnc_createAction;
["TWC_warrior", 0, ["ACE_MainActions","MenuAmmo"], RemoveHEMagazine] call ace_interact_menu_fnc_addActionToClass;


player addEventHandler ["Put", "_this call TWC_fnc_RemoveAmmoInventory;"];