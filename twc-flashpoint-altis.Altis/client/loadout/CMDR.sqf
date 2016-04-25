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
player forceAddUniform "CUP_U_B_BAF_DDPM_S2_UnRolled";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACRE_PRC148";
player addVest "V_Rangemaster_belt";
for "_i" from 1 to 2 do {player addItemToVest "CUP_30Rnd_9x19_MP5";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShellBlue";};
player addBackpack "B_AssaultPack_cbr";
player addItemToBackpack "ACRE_PRC117F";
player addHeadgear "CUP_H_BAF_Officer_Beret";

comment "Add weapons";
player addWeapon "CUP_smg_MP5A5";
player addWeapon "Binocular";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "ItemGPS";