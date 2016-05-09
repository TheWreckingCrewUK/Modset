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
player forceAddUniform "CUP_U_B_BAF_DDPM_Tshirt";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACRE_PRC343";
player addVest "CUP_V_BAF_Osprey_Mk2_DDPM_Scout";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 5 do {player addItemToVest "CUP_20Rnd_762x51_L129_M";};
player addBackpack "CUP_B_Bergen_BAF";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 5 do {player addItemToBackpack "CUP_20Rnd_762x51_L129_M";};
player addHeadgear "CUP_H_BAF_Helmet_2_DDPM";

comment "Add weapons";
player addWeapon "CUP_srifle_L129A1_HG";
player addPrimaryWeaponItem "CUP_acc_ANPEQ_2";
player addPrimaryWeaponItem "CUP_optic_ACOG";
player addPrimaryWeaponItem "bipod_01_F_blk";
player addWeapon "launch_NLAW_F";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "CUP_NVG_PVS7";