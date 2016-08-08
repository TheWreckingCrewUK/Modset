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
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACRE_PRC148";
player addItemToUniform "CUP_7Rnd_45ACP_1911";
player addVest "V_Rangemaster_belt";
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShellBlue";};
player addItemToVest "30Rnd_556x45_Stanag";
player addBackpack "B_AssaultPack_cbr";
player addItemToBackpack "ACRE_PRC117F";
for "_i" from 1 to 2 do {player addItemToBackpack "30Rnd_556x45_Stanag";};
player addHeadgear "CUP_H_USMC_Officer_Cap";

comment "Add weapons";
player addWeapon "CUP_arifle_M16A4_Base";
player addWeapon "CUP_hgun_Colt1911";
player addWeapon "Binocular";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "ItemGPS";