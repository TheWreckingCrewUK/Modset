[arsenalAmmoBox,["CUP_arifle_M4A1_desert"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["CUP_H_USMC_Crew_Helmet","CUP_U_B_USMC_Officer","CUP_V_B_MTV","CUP_acc_ANPEQ_15","CUP_optic_CompM2_Desert","ACE_DAGR","ACRE_PRC117F","ACRE_PRC148"],false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,["B_AssaultPack_blk"],false] call Bis_fnc_addVirtualBackpackCargo;

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
player forceAddUniform "CUP_U_B_USMC_Officer";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACRE_PRC148";
player addItemToUniform "ACE_EarPlugs";
player addVest "CUP_V_B_MTV";
for "_i" from 1 to 4 do {player addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {player addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addBackpack "B_AssaultPack_blk";
player addItemToBackpack "ACRE_PRC117F";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addHeadgear "CUP_H_USMC_Crew_Helmet";

comment "Add weapons";
player addWeapon "CUP_arifle_M4A1_desert";
player addPrimaryWeaponItem "CUP_acc_ANPEQ_15";
player addPrimaryWeaponItem "CUP_optic_CompM2_Desert";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";