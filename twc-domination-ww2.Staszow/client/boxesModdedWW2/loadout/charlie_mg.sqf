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
player forceAddUniform "U_LIB_SOV_Efreitor";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addVest "V_LIB_SOV_RA_MGBelt";
player addItemToVest "ACRE_PRC343";
player addItemToVest "LIB_47Rnd_762x54";
for "_i" from 1 to 2 do {player addItemToVest "LIB_rg42";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
player addItemToVest "LIB_47Rnd_762x54";
player addBackpack "B_LIB_SOV_RA_MGAmmoBag";
for "_i" from 1 to 3 do {player addItemToBackpack "LIB_47Rnd_762x54";};
player addHeadgear "H_LIB_SOV_RA_Helmet";

comment "Add weapons";
player addWeapon "LIB_DP28";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";