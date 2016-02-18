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
for "_i" from 1 to 2 do {player addItemToVest "CUP_HandGrenade_L109A1_HE";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToVest "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1";};
player addBackpack "B_mas_Bergen_des";
for "_i" from 1 to 2 do {player addItemToBackpack "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1";};
player addHeadgear "H_HelmetB_camo";

comment "Add weapons";
player addWeapon "CUP_lmg_L110A1";
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
