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
player forceAddUniform "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addVest "CUP_V_B_MTV";
for "_i" from 1 to 6 do {player addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
player addHeadgear "H_HelmetCrew_I";

comment "Add weapons";
player addWeapon "CUP_arifle_M4A1_desert";
player addPrimaryWeaponItem "CUP_optic_CompM2_Desert";
player addWeapon "CUP_hgun_M9";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemRadioAcreFlagged";
player linkItem "ItemGPS";
player linkItem "CUP_NVG_PVS7";