[arsenalAmmoBox,["arifle_SPAR_02_blk_F","hgun_P07_khk_F","Binocular"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F","16Rnd_9x21_Mag"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["H_HelmetB_TI_tna_F","U_B_CTRG_Soldier_F","V_PlateCarrierIAGL_oli","G_Balaclava_TI_G_tna_F","acc_pointer_IR","optic_ERCO_blk_F","bipod_01_F_blk","muzzle_snds_L"],false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,["B_AssaultPack_rgr"],false] call Bis_fnc_addVirtualBackpackCargo;

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
player forceAddUniform "U_B_CTRG_Soldier_F";
for "_i" from 1 to 5 do {player addItemToUniform "FirstAidKit";};
player addVest "V_TacVest_oli";
for "_i" from 1 to 2 do {player addItemToVest "150Rnd_556x45_Drum_Mag_F";};
player addItemToVest "150Rnd_556x45_Drum_Mag_Tracer_F";
player addBackpack "B_AssaultPack_rgr";
for "_i" from 1 to 2 do {player addItemToBackpack "HandGrenade";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addItemToBackpack "150Rnd_556x45_Drum_Mag_F";
player addHeadgear "H_HelmetB_TI_tna_F";
player addGoggles "G_Balaclava_TI_G_tna_F";

comment "Add weapons";
player addWeapon "arifle_SPAR_02_blk_F";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "optic_ERCO_blk_F";
player addPrimaryWeaponItem "bipod_01_F_blk";
player addWeapon "hgun_P07_khk_F";
player addHandgunItem "muzzle_snds_L";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "ItemGPS";
player linkItem "NVGogglesB_grn_F";