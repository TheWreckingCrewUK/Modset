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
player forceAddUniform "U_B_FullGhillie_ard";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
player addItemToUniform "ACRE_PRC148";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_DAGR";
player addItemToUniform "ACE_ATragMX";
player addItemToUniform "ACE_RangeCard";
player addItemToUniform "ACE_Kestrel4500";
player addVest "V_Chestrig_rgr";
for "_i" from 1 to 8 do {player addItemToVest "CUP_20Rnd_762x51_B_M110";};
for "_i" from 1 to 2 do {player addItemToVest "CUP_20Rnd_TE1_Red_Tracer_762x51_M110";};
player addBackpack "B_Kitbag_mcamo";
player addItemToBackpack "ACRE_PRC117F";
player addItemToBackpack "ACE_SpottingScope";
for "_i" from 1 to 2 do {player addItemToBackpack "HandGrenade";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShellGreen";};
for "_i" from 1 to 3 do {player addItemToBackpack "Chemlight_green";};
player addGoggles "G_Aviator";

comment "Add weapons";
player addWeapon "CUP_srifle_M110";
player addPrimaryWeaponItem "CUP_optic_LeupoldMk4_10x40_LRT_Desert";
player addPrimaryWeaponItem "bipod_01_F_snd";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "CUP_NVG_PVS7";