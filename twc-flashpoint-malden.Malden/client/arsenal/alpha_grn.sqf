[arsenalAmmoBox,["arifle_TRG21_GL_F","hgun_P07_F","launch_NLAW_F"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell","NLAW_F"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["H_HelmetB_camo","U_B_CTRG_3","V_PlateCarrierH_CTRG","acc_pointer_IR","optic_Hamr"],false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,["B_Kitbag_rgr"],false] call Bis_fnc_addVirtualBackpackCargo;

comment "Exported from Arsenal by jayman";

comment "Remove existing items";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

comment "Add containers";
player forceAddUniform "U_B_CTRG_3";
for "_i" from 1 to 5 do {player addItemToUniform "FirstAidKit";};
player addVest "V_PlateCarrierH_CTRG";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 8 do {player addItemToVest "30Rnd_556x45_Stanag_red";};
for "_i" from 1 to 8 do {player addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
player addBackpack "B_Kitbag_rgr";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 13 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 3 do {player addItemToBackpack "UGL_FlareWhite_F";};
for "_i" from 1 to 3 do {player addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
player addHeadgear "H_HelmetB_camo";

comment "Add weapons";
player addWeapon "arifle_TRG21_GL_F";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "optic_Hamr";
player addWeapon "hgun_P07_F";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "NVGoggles";