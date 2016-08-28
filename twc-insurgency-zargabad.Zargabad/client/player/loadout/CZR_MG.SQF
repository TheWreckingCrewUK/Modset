comment "Exported from Arsenal by Paddock";

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
player forceAddUniform "rhs_uniform_g3_tan";
player addItemToUniform "ACRE_PRC148_ID_1";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addVest "CUP_V_B_MTV_MG";
for "_i" from 1 to 1 do {player addItemToVest "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addBackpack "B_Kitbag_cbr";
for "_i" from 1 to 3 do {player addItemToBackpack "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addHeadgear "rhsusf_ach_bare_tan_ess";

comment "Add weapons";
player addWeapon "CUP_lmg_M249_E2";
player addPrimaryWeaponItem "UK3CB_BAF_LLM_Flashlight_Black";
player addPrimaryWeaponItem "CUP_optic_ElcanM145";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "CUP_NVG_PVS7";
