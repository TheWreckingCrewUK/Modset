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
player forceAddUniform "CUP_U_B_USArmy_TwoKnee";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_DAGR";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACRE_PRC148";
player addVest "CUP_V_B_IOTV_SL";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 8 do {player addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {player addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
player addBackpack "CUP_B_AssaultPack_ACU";
player addItemToBackpack "ACRE_PRC117F";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 4 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
player addHeadgear "CUP_H_USArmy_HelmetMICH_headset_ess";

comment "Add weapons";
player addWeapon "CUP_arifle_M4A1_BUIS_GL";
player addPrimaryWeaponItem "CUP_acc_ANPEQ_15";
player addPrimaryWeaponItem "CUP_optic_ACOG";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "CUP_NVG_PVS7";