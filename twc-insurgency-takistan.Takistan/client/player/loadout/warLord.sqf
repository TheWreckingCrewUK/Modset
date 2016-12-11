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
player forceAddUniform "CUP_I_TKG_Khet_Partug_02";
player addItemToUniform "FirstAidKit";
player addItemToUniform "CUP_30Rnd_762x39_AK47_M";
player addVest "CUP_V_OI_TKI_Jacket1_04";
for "_i" from 1 to 2 do {player addItemToVest "CUP_30Rnd_762x39_AK47_M";};
player addHeadgear "CUP_H_TKI_Lungee_Open_02";

comment "Add weapons";
player addWeapon "CUP_arifle_AKS_Gold";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
