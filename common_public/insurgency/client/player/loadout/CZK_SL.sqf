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
player forceAddUniform "CUP_U_B_CZ_WDL_TShirt";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addVest "CUP_V_B_RRV_Scout2";
player addItemToVest "HandGrenade";
for "_i" from 1 to 8 do {player addItemToVest "CUP_20Rnd_762x51_CZ805B";};
player addBackpack "CUP_B_ACRPara_m95";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToBackpack "CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B";};
player addHeadgear "H_HelmetB_camo";
player addGoggles "G_Aviator";

comment "Add weapons";
player addWeapon "CUP_arifle_CZ805_B";
player addPrimaryWeaponItem "CUP_acc_ANPEQ_15";
player addPrimaryWeaponItem "CUP_optic_ACOG";
player addWeapon "CUP_hgun_Duty";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "CUP_NVG_PVS7";
