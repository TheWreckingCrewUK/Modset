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
player forceAddUniform "ACC_U_Uni_Pantera_D";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addVest "ACC_V_TacVest_D";
player addItemToVest "ACRE_PRC148";
player addItemToVest "ACC_250Rnd_762x51_ukm";
player addBackpack "ACC_Bergen_D";
for "_i" from 1 to 2 do {player addItemToBackpack "HandGrenade";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addItemToBackpack "ACC_250Rnd_762x51_ukm";
for "_i" from 1 to 3 do {player addItemToBackpack "ACC_250Rnd_762x51_ukm_T";};
player addHeadgear "ACC_H_MICH_D";

comment "Add weapons";
player addWeapon "ACC_ukm_2000p_des";
player addPrimaryWeaponItem "FHQ_optic_ACOG_tan";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";