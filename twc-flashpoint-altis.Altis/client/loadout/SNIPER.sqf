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
player forceAddUniform "UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
player addItemToUniform "ACRE_PRC343";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_DAGR";
player addItemToUniform "ACE_ATragMX";
player addItemToUniform "ACE_RangeCard";
player addItemToUniform "ACE_Kestrel4500";
player addVest "V_Chestrig_rgr";
for "_i" from 1 to 10 do {player addItemToVest "UK3CB_BAF_338_5Rnd";};
player addBackpack "B_Kitbag_mcamo";
for "_i" from 1 to 2 do {player addItemToBackpack "HandGrenade";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShellGreen";};
for "_i" from 1 to 3 do {player addItemToBackpack "Chemlight_green";};
player addGoggles "G_Aviator";

comment "Add weapons";
player addWeapon "UK3CB_BAF_L115A3_DE_Ghillie";
player addPrimaryWeaponItem "UK3CB_BAF_Silencer_L115A3";
player addPrimaryWeaponItem "RKSL_optic_PMII_312_sunshade_des";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";