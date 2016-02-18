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
player forceAddUniform "U_B_CombatUniform_mcam";
for "_i" from 1 to 6 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_morphine";};
player addVest "CUP_V_B_MTV_MG";
player addItemToVest "CUP_HandGrenade_L109A1_HE";
for "_i" from 1 to 2 do {player addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 3 do {player addItemToVest "200Rnd_mas_556x45_Stanag";};
player addItemToVest "200Rnd_mas_556x45_T_Stanag";
player addBackpack "B_mas_Kitbag_mul";
player addHeadgear "H_HelmetB_camo";

comment "Add weapons";
player addWeapon "LMG_mas_M249_F";
player addPrimaryWeaponItem "optic_mas_acog_eo";
player addWeapon "Binocular";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "ItemGPS";

comment "Set identity";
player setFace "GreekHead_A3_01";
player setSpeaker "ACE_NoVoice";
player addItemToUniform "ACRE_PRC148";