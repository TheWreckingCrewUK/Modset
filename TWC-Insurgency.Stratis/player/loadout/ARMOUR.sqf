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
player forceAddUniform "CUP_U_B_USMC_Officer";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACRE_PRC343_ID_1";
player addItemToUniform "ACE_EarPlugs";
player addVest "CUP_V_B_MTV";
for "_i" from 1 to 4 do {player addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {player addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addBackpack "B_AssaultPack_blk";
player addItemToBackpack "ACRE_PRC117F_ID_1";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addHeadgear "CUP_H_USMC_Crew_Helmet";
player addGoggles "G_Aviator";

comment "Add weapons";
player addWeapon "CUP_arifle_M4A1_desert";
player addPrimaryWeaponItem "CUP_acc_ANPEQ_15";
player addPrimaryWeaponItem "CUP_optic_CompM2_Desert";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";