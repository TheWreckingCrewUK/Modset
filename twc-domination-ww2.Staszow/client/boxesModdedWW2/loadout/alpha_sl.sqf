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
player forceAddUniform "U_LIB_WP_Soldier_camo_1";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addVest "V_LIB_WP_OfficerVest";
player addItemToVest "ACRE_PRC148";
player addItemToVest "ACRE_PRC343";
for "_i" from 1 to 4 do {player addItemToVest "LIB_32Rnd_9x19";};
for "_i" from 1 to 2 do {player addItemToVest "LIB_shg24";};
player addBackpack "B_LIB_GER_Backpack";
for "_i" from 1 to 6 do {player addItemToBackpack "LIB_32Rnd_9x19";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addHeadgear "H_LIB_WP_Cap";

comment "Add weapons";
player addWeapon "LIB_MP40";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";