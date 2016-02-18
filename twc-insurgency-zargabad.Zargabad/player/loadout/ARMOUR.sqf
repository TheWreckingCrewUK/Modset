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
player forceAddUniform "rhs_uniform_cu_ocp_1stcav";
player addItemToUniform "rhsusf_patrolcap_ocp";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACRE_PRC343_ID_1";
player addItemToUniform "ACE_EarPlugs";
player addVest "rhsusf_iotv_ocp";
for "_i" from 1 to 2 do {player addItemToVest "30Rnd_556x45_Stanag";};
player addBackpack "B_AssaultPack_blk";
player addItemToBackpack "ACRE_PRC117F_ID_1";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToBackpack "30Rnd_556x45_Stanag";};
player addItemToBackpack "HandGrenade";
player addHeadgear "rhsusf_ach_helmet_ocp";

comment "Add weapons";
player addWeapon "rhs_m4_compm4";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15side";
player addPrimaryWeaponItem "rhsusf_acc_compm4";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "rhsusf_ANPVS_14";