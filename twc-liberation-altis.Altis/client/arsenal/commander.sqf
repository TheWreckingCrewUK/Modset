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
player forceAddUniform "U_BG_Guerrilla_6_1";
for "_i" from 1 to 2 do {player addItemToUniform "FirstAidKit";};
for "_i" from 1 to 2 do {player addItemToUniform "11Rnd_45ACP_Mag";};
player addVest "V_BandollierB_blk";
for "_i" from 1 to 5 do {player addItemToVest "30Rnd_9x21_Mag_SMG_02";};
player addHeadgear "H_Cap_oli";

comment "Add weapons";
player addWeapon "SMG_02_F";
player addWeapon "hgun_Pistol_heavy_01_F";
player addWeapon "Binocular";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";