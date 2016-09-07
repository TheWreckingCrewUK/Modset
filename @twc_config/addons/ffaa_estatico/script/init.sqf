waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };



MilanMissileMenu = ["MenuMissileAmmo","Ammo","",{},{True}] call ace_interact_menu_fnc_createAction;
["TWC_Milan", 0, ["ACE_MainActions"], MilanMissileMenu] call ace_interact_menu_fnc_addActionToClass;


AddMilanMissile = ["AddMilanMissileTo","Add Missile","",{call TWC_fnc_AddMilanMissile},{"TWC_MilanMissileItem" in items player}] call ace_interact_menu_fnc_createAction;
["TWC_Milan", 0, ["ACE_MainActions","MenuMissileAmmo"], AddMilanMissile] call ace_interact_menu_fnc_addActionToClass;


RemoveMilanMissile = ["RemoveMilanMissile","Remove Missile","",{call TWC_fnc_RemoveMilanMissile},{True}] call ace_interact_menu_fnc_createAction;
["TWC_Milan", 0, ["ACE_MainActions","MenuMissileAmmo"], RemoveMilanMissile] call ace_interact_menu_fnc_addActionToClass;

MilanMenu = ["MilanMenu","Milan","",{},{true}] call ace_interact_menu_fnc_createAction;
[typeof Player, 1, ["ACE_SelfActions"], MilanMenu] call ace_interact_menu_fnc_addActionToClass;

AssembleMilan = ["AssembleMilan","Assemble Milan","",{_twc = [nearestObjects [player, ["WeaponHolderSimulated","GroundWeaponHolder"], 5] select 0] spawn TWC_fnc_AssembleMilan},{player hasweapon "TWC_Milan_Launcher_Disassemabled"}] call ace_interact_menu_fnc_createAction;
[typeof Player, 1, ["ACE_SelfActions","MilanMenu"], AssembleMilan] call ace_interact_menu_fnc_addActionToClass;

DisassembleMilan = ["DiassembleMilanMenu","Disassemble Milan","",{_twc = _this spawn TWC_fnc_DisassembleMilan},{True}] call ace_interact_menu_fnc_createAction;
["TWC_Milan", 0, ["ACE_MainActions"], DisassembleMilan] call ace_interact_menu_fnc_addActionToClass;