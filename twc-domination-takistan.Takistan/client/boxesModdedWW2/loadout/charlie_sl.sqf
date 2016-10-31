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
player forceAddUniform "U_LIB_SOV_Sergeant";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addVest "V_LIB_SOV_RA_PPShBelt";
player addItemToVest "ACRE_PRC148";
player addItemToVest "ACRE_PRC343";
for "_i" from 1 to 2 do {player addItemToVest "LIB_71Rnd_762x25";};
for "_i" from 1 to 2 do {player addItemToVest "LIB_rg42";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
player addBackpack "B_LIB_SOV_RA_GasBag";
for "_i" from 1 to 3 do {player addItemToBackpack "LIB_71Rnd_762x25";};
player addHeadgear "H_LIB_SOV_RA_Helmet";

comment "Add weapons";
player addWeapon "LIB_PPSh41_d";
comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";