[arsenalAmmoBox,["UK3CB_BAF_L85A2_RIS","UK3CB_BAF_L131A1","UK3CB_BAF_L128A1","UK3CB_BAF_NLAW_Launcher","UK3CB_BAF_AT4_CS_AT_Launcher","UK3CB_BAF_AT4_CS_AP_Launcher","UK3CB_BAF_Javelin_Slung_Tube","UK3CB_BAF_Javelin_CLU","UK3CB_BAF_Tripod","UK3CB_BAF_L16_Tripod","UK3CB_BAF_L111A1","UK3CB_BAF_L134A1","UK3CB_BAF_L16"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["UK3CB_BAF_30Rnd","UK3CB_BAF_30Rnd_T","UK3CB_BAF_17Rnd_9mm","UK3CB_BAF_L128A1_Slugs","UK3CB_BAF_L128A1_Pellets"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["UK3CB_BAF_H_Mk7_Scrim_B","UK3CB_BAF_U_CombatUniform_MTP_RM","UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve","UK3CB_BAF_V_Osprey_Rifleman_E","UK3CB_BAF_LLM_IR_Black","UK3CB_BAF_SpecterLDS_Dot_3D","UK3CB_BAF_SpecterLDS_Dot","UK3CB_BAF_Eotech","ACRE_PRC343","UK3CB_BAF_32Rnd_40mm_G_Box","UK3CB_BAF_100Rnd_127x99_Box","UK3CB_BAF_1Rnd_81mm_Mo_shells","UK3CB_BAF_1Rnd_81mm_Mo_Flare_white","UK3CB_BAF_1Rnd_81mm_Mo_Smoke_white"],false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,["UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C"],false] call Bis_fnc_addVirtualBackpackCargo;

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
player addVest "UK3CB_BAF_V_Osprey_Rifleman_E";
for "_i" from 1 to 8 do {player addItemToVest "UK3CB_BAF_30Rnd";};
for "_i" from 1 to 2 do {player addItemToVest "UK3CB_BAF_30Rnd_T";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addBackpack "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addItemToBackpack "UK3CB_BAF_AT4_AT_Mag";
player addHeadgear "UK3CB_BAF_H_Mk7_Scrim_B";

comment "Add weapons";
player addWeapon "UK3CB_BAF_L85A2_RIS";
player addPrimaryWeaponItem "UK3CB_BAF_LLM_IR_Black";
player addPrimaryWeaponItem "UK3CB_BAF_SpecterLDS_Dot_3D";
player addWeapon "UK3CB_BAF_NLAW_Launcher";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";