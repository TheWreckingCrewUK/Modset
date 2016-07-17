comment "Exported from Arsenal by Paddock";

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
player forceAddUniform "rhs_uniform_g3_tan";
player addItemToUniform "ACRE_PRC148_ID_1";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addVest "CUP_V_I_RACS_Carrier_Vest_3";
for "_i" from 1 to 8 do {player addItemToVest "CUP_30Rnd_Sa58_M";};
for "_i" from 1 to 2 do {player addItemToVest "CUP_30Rnd_Sa58_M_TracerR";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addBackpack "B_Kitbag_cbr";
for "_i" from 1 to 2 do {player addItemToVest "rhs_rpg7_PG7VL_mag";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addHeadgear "H_Cap_tan";

comment "Add weapons";
player addWeapon "CUP_arifle_Sa58RIS1_des";
player addPrimaryWeaponItem "CUP_optic_TrijiconRx01_desert";
player addWeapon "rhs_weap_rpg7";
player addSecondaryWeaponItem "rhs_acc_1pn93_1";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";



