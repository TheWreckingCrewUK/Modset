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
player forceAddUniform "UK3CB_BAF_U_CombatUniform_MTP";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACRE_PRC343_ID_1";
player addItemToUniform "ACE_EarPlugs";
player addVest "UK3CB_BAF_V_Osprey";
for "_i" from 1 to 4 do {player addItemToVest "UK3CB_BAF_30Rnd";};
for "_i" from 1 to 2 do {player addItemToVest "UK3CB_BAF_30Rnd_T";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addBackpack "UK3CB_BAF_B_Bergen_MTP_Radio_H_A";
player addItemToBackpack "ACRE_PRC117F_ID_1";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addHeadgear "UK3CB_BAF_H_CrewHelmet_ESS_A";
player addGoggles "UK3CB_BAF_G_Tactical_Black";

comment "Add weapons";
player addWeapon "UK3CB_BAF_L22A2";
player addPrimaryWeaponItem "UK3CB_BAF_SUSAT_3D";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";