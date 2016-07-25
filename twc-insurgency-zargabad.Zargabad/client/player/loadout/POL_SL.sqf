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
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addVest "ACC_V_TacVest_D";
player addItemToVest "ACRE_PRC148";
for "_i" from 1 to 8 do {player addItemToVest "ACC_30Rnd_556x45_Beryl";};
for "_i" from 1 to 2 do {player addItemToVest "ACC_30Rnd_556x45_Beryl_T";};
player addBackpack "ACC_Bergen_D";
player addItemToBackpack "ACRE_PRC117F";
for "_i" from 1 to 2 do {player addItemToBackpack "HandGrenade";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addHeadgear "ACC_H_MICH_D";

comment "Add weapons";
player addWeapon "ACC_Beryl_08_des";
player addPrimaryWeaponItem "FHQ_acc_ANPEQ15";
player addPrimaryWeaponItem "FHQ_optic_ACOG_tan";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";