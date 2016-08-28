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
player forceAddUniform "U_LIB_US_Sergant";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addVest "V_LIB_US_Vest_Thompson";
for "_i" from 1 to 2 do {player addItemToVest "LIB_f1";};
for "_i" from 1 to 4 do {player addItemToVest "LIB_30Rnd_45ACP";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
player addItemToVest "ACRE_PRC343";
player addItemToVest "ACRE_PRC148";
player addBackpack "B_LIB_US_Backpack";
for "_i" from 1 to 6 do {player addItemToBackpack "LIB_30Rnd_45ACP";};
player addItemToBackpack "ACRE_PRC117F";
player addHeadgear "H_LIB_US_Helmet_Net";

comment "Add weapons";
player addWeapon "LIB_M1A1_Thompson";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";