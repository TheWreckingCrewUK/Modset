comment "Exported from Arsenal by FakeMatty";

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
player forceAddUniform "U_mas_med_O_CombatUniform_irs";
for "_i" from 1 to 6 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addVest "V_mas_med_ME_armor_she";
player addItemToVest "30Rnd_556x45_Stanag";
player addBackpack "B_mas_Bergen_des";
player addHeadgear "H_HelmetB_camo";

comment "Add weapons";
player addWeapon "CUP_arifle_L85A2";
player addPrimaryWeaponItem "CUP_optic_ACOG";
player addWeapon "Binocular";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "ItemGPS";
player addItemToUniform "ACRE_PRC343";
comment "Set identity";
player setFace "GreekHead_A3_01";
player setSpeaker "ACE_NoVoice";