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
player forceAddUniform "CUP_U_B_USMC_PilotOverall";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_DAGR";
for "_i" from 1 to 3 do {player addItemToUniform "SmokeShell";};
player addItemToUniform "ACE_HandFlare_Green";
for "_i" from 1 to 2 do {player addItemToUniform "ACE_HandFlare_White";};
player addBackpack "B_AssaultPack_blk";
player addItemToBackpack "ACRE_PRC117F";
for "_i" from 1 to 4 do {player addItemToBackpack "30Rnd_556x45_Stanag";};
player addHeadgear "H_PilotHelmetHeli_B";
player addGoggles "G_Aviator";

comment "Add weapons";
player addWeapon "CUP_arifle_L85A2_Holo_laser";
player addPrimaryWeaponItem "CUP_optic_SUSAT";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
