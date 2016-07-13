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
player forceAddUniform "CUP_U_B_GER_Flecktarn_1";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACRE_PRC148";
player addVest "CUP_V_B_GER_Carrier_Vest_3";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addItemToVest "CUP_100Rnd_556x45_BetaCMag";
player addBackpack "CUP_B_GER_Pack_Flecktarn";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToBackpack "CUP_100Rnd_556x45_BetaCMag";};
for "_i" from 1 to 3 do {player addItemToBackpack "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag";};
player addHeadgear "H_Shemag_olive";

comment "Add weapons";
player addWeapon "CUP_arifle_MG36";
player addPrimaryWeaponItem "CUP_optic_ACOG";
player addWeapon "CUP_launch_M136";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "CUP_NVG_PVS7";