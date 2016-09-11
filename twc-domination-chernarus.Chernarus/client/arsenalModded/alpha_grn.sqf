[arsenalAmmoBox,["UK3CB_BAF_L85A2_UGL","UK3CB_BAF_L131A1","launch_UK3CB_BAF_NLAW_Launcher","UK3CB_BAF_AT4_CS_AT_Launcher","UK3CB_BAF_AT4_CS_AP_Launcher","UK3CB_BAF_Tripod","UK3CB_BAF_L16_Tripod","UK3CB_BAF_L111A1","UK3CB_BAF_L134A1","UK3CB_BAF_L16"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["UK3CB_BAF_30Rnd", "UK3CB_BAF_30Rnd_T","UK3CB_BAF_17Rnd_9mm","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell","UK3CB_BAF_NLAW_Launcher"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["UK3CB_BAF_H_Mk7_Scrim_A","UK3CB_BAF_U_CombatUniform_MTP_RM","UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve","UK3CB_BAF_V_Osprey_Grenadier_B","UK3CB_BAF_LLM_IR_Black","UK3CB_BAF_SpecterLDS_Dot_3D","UK3CB_BAF_SpecterLDS_Dot","UK3CB_BAF_Eotech","ACRE_PRC343","UK3CB_BAF_32Rnd_40mm_G_Box","UK3CB_BAF_100Rnd_127x99_Box","UK3CB_BAF_1Rnd_81mm_Mo_shells","UK3CB_BAF_1Rnd_81mm_Mo_Flare_white","UK3CB_BAF_1Rnd_81mm_Mo_Smoke_white"],false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,["UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"],false] call Bis_fnc_addVirtualBackpackCargo;

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
player forceAddUniform "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve";
player addItemToUniform "ACRE_PRC343";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addVest "UK3CB_BAF_V_Osprey_Grenadier_B";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 8 do {player addItemToVest "UK3CB_BAF_30Rnd";};
for "_i" from 1 to 2 do {player addItemToVest "UK3CB_BAF_30Rnd_T";};
player addBackpack "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 12 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 3 do {player addItemToBackpack "UGL_FlareWhite_F";};
for "_i" from 1 to 3 do {player addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
for "_i" from 1 to 3 do {player addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
player addHeadgear "UK3CB_BAF_H_Mk7_Scrim_A";

comment "Add weapons";
player addWeapon "UK3CB_BAF_L85A2_UGL";
player addPrimaryWeaponItem "UK3CB_BAF_LLM_IR_Black";
player addPrimaryWeaponItem "UK3CB_BAF_SpecterLDS_Dot_3D";
player addWeapon "UK3CB_BAF_AT4_CS_AT_Launcher";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";