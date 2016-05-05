waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };



AmmoMenuW = ["MenuAmmo","Ammo","",{},{True}] call ace_interact_menu_fnc_createAction;
["TWC_warrior_W", 0, ["ACE_MainActions"], AmmoMenuW] call ace_interact_menu_fnc_addActionToClass;



AddHEMagazineW = ["AddHE","Add HE Magazine","\twc_ifv\ui\he_interaction.paa",{call TWC_fnc_AddHE},{"TWC_30mm_HE_item" in items player}] call ace_interact_menu_fnc_createAction;
["TWC_warrior_W", 0, ["ACE_MainActions","MenuAmmo"], AddHEMagazineW] call ace_interact_menu_fnc_addActionToClass;
AddAPMagazineW = ["AddAP","Add AP Magazine","\twc_ifv\ui\ap_interaction.paa",{call TWC_fnc_AddAP},{"TWC_30mm_AP_item" in items player}] call ace_interact_menu_fnc_createAction;
["TWC_warrior_W", 0, ["ACE_MainActions","MenuAmmo"], AddAPMagazineW] call ace_interact_menu_fnc_addActionToClass;

RemoveAPMagazineW = ["RemoveAP","Remove AP Magazine","\twc_ifv\ui\ap_interaction.paa",{call TWC_fnc_RemoveAP},{True}] call ace_interact_menu_fnc_createAction;
["TWC_warrior_W", 0, ["ACE_MainActions","MenuAmmo"], RemoveAPMagazineW] call ace_interact_menu_fnc_addActionToClass;
RemoveHEMagazineW = ["RemoveHE","Remove HE Magazine","\twc_ifv\ui\he_interaction.paa",{call TWC_fnc_RemoveHE},{True}] call ace_interact_menu_fnc_createAction;
["TWC_warrior_W", 0, ["ACE_MainActions","MenuAmmo"], RemoveHEMagazineW] call ace_interact_menu_fnc_addActionToClass;

ShowAmmoW = ["ShowAmmo","Show Ammo","",{[_this select 0]call TWC_fnc_ShowAmmo},{True}] call ace_interact_menu_fnc_createAction;
["TWC_warrior_W", 1, ["ACE_SelfActions"], ShowAmmoW] call ace_interact_menu_fnc_addActionToClass;




AmmoMenuD = ["MenuAmmo","Ammo","",{},{True}] call ace_interact_menu_fnc_createAction;
["TWC_warrior_D", 0, ["ACE_MainActions"], AmmoMenuD] call ace_interact_menu_fnc_addActionToClass;



AddHEMagazineD = ["AddHE","Add HE Magazine","\twc_ifv\ui\he_interaction.paa",{call TWC_fnc_AddHE},{"TWC_30mm_HE_item" in items player}] call ace_interact_menu_fnc_createAction;
["TWC_warrior_D", 0, ["ACE_MainActions","MenuAmmo"], AddHEMagazineD] call ace_interact_menu_fnc_addActionToClass;
AddAPMagazineD = ["AddAP","Add AP Magazine","\twc_ifv\ui\ap_interaction.paa",{call TWC_fnc_AddAP},{"TWC_30mm_AP_item" in items player}] call ace_interact_menu_fnc_createAction;
["TWC_warrior_D", 0, ["ACE_MainActions","MenuAmmo"], AddAPMagazineD] call ace_interact_menu_fnc_addActionToClass;

RemoveAPMagazineD = ["RemoveAP","Remove AP Magazine","\twc_ifv\ui\ap_interaction.paa",{call TWC_fnc_RemoveAP},{True}] call ace_interact_menu_fnc_createAction;
["TWC_warrior_D", 0, ["ACE_MainActions","MenuAmmo"], RemoveAPMagazineD] call ace_interact_menu_fnc_addActionToClass;
RemoveHEMagazineD = ["RemoveHE","Remove HE Magazine","\twc_ifv\ui\he_interaction.paa",{call TWC_fnc_RemoveHE},{True}] call ace_interact_menu_fnc_createAction;
["TWC_warrior_D", 0, ["ACE_MainActions","MenuAmmo"], RemoveHEMagazineD] call ace_interact_menu_fnc_addActionToClass;

ShowAmmoD = ["ShowAmmo","Show Ammo","",{[_this select 0]},{True}] call ace_interact_menu_fnc_createAction;
["TWC_warrior_D", 1, ["ACE_SelfActions"], ShowAmmoD] call ace_interact_menu_fnc_addActionToClass;


player addEventHandler ["Put", "_this call TWC_fnc_RemoveAmmoInventory;"];