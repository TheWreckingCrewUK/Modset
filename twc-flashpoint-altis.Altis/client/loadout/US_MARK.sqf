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
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACRE_PRC148";
player addVest "CUP_V_B_IOTV_AT";
for "_i" from 1 to 2 do {player addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 6 do {player addItemToVest "20Rnd_762x51_Mag";};
player addBackpack "CUP_B_MedicPack_ACU";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 4 do {player addItemToBackpack "20Rnd_762x51_Mag";};
player addHeadgear "CUP_H_USArmy_HelmetMICH";

comment "Add weapons";
player addWeapon "CUP_srifle_M14_DMR";
player addPrimaryWeaponItem "CUP_optic_LeupoldM3LR";
player addWeapon "CUP_launch_Javelin";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "CUP_NVG_PVS7";