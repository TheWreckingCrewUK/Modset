comment "Exported from Arsenal by Adam";

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
player forceAddUniform "UK3CB_BAF_U_CombatUniform_MTP";
player addItemToUniform "ACRE_PRC343_ID_2";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 2 do {player addItemToUniform "rhsusf_mag_17Rnd_9x19_JHP";};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 2 do {player addItemToUniform "SmokeShell";};
player addItemToUniform "UK3CB_BAF_338_5Rnd";
player addVest "UK3CB_BAF_V_PLCE_Webbing_MTP";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addItemToVest "SmokeShell";
for "_i" from 1 to 2 do {player addItemToVest "UK3CB_BAF_338_5Rnd";};
player addBackpack "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D";
for "_i" from 1 to 10 do {player addItemToBackpack "UK3CB_BAF_338_5Rnd";};
player addItemToBackpack "ACE_Tripod";
player addItemToBackpack "itemCTAB";
player addHeadgear "UK3CB_BAF_H_Mk7_Scrim_E";

comment "Add weapons";
player addWeapon "UK3CB_BAF_L115A3_DE";
player addPrimaryWeaponItem "RKSL_optic_PMII_525";
player addWeapon "ACE_Vector";
player addWeapon "rhsusf_weap_glock17g4";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";

