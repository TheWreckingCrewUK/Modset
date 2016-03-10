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
player forceAddUniform "U_B_CombatUniform_mcam";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACRE_PRC148_ID_1";
player addVest "CUP_V_B_MTV_TL";
for "_i" from 1 to 2 do {player addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 8 do {player addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {player addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
player addBackpack "B_Kitbag_mcamo";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 13 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 3 do {player addItemToBackpack "UGL_FlareWhite_F";};
for "_i" from 1 to 3 do {player addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
player addHeadgear "H_HelmetB_camo";

comment "Add weapons";
player addWeapon "CUP_arifle_M4A1_BUIS_GL";
player addPrimaryWeaponItem "CUP_acc_ANPEQ_2";
player addPrimaryWeaponItem "CUP_optic_ACOG";
player addWeapon "CUP_launch_M136";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "CUP_NVG_PVS7";