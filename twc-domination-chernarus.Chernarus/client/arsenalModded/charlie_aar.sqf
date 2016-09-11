[arsenalAmmoBox,["rhs_weap_m16a4_carryhandle_grip","rhsusf_weap_m1911a1","UK3CB_BAF_AT4_CS_AT_Launcher","UK3CB_BAF_AT4_CS_AP_Launcher","UK3CB_BAF_Javelin_Slung_Tube"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red","rhs_200rnd_556x45_M_SAW","rhsusf_mag_7x45acp_MHP","NLAW_F"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["rhsusf_mich_helmet_marpatwd","rhs_uniform_FROG01_wd","rhsusf_spc_rifleman","rhsusf_acc_anpeq15_bk","UK3CB_BAF_TA31F_3D","UK3CB_BAF_TA31F","ACRE_PRC148"],false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,["rhsusf_assault_eagleaiii_coy"],false] call Bis_fnc_addVirtualBackpackCargo;

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
player forceAddUniform "rhs_uniform_FROG01_wd";
player addItemToUniform "ACRE_PRC148";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addVest "rhsusf_spc_rifleman";
for "_i" from 1 to 8 do {player addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {player addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addBackpack "rhsusf_assault_eagleaiii_coy";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_200rnd_556x45_M_SAW";};
player addHeadgear "rhsusf_mich_helmet_marpatwd";

comment "Add weapons";
player addWeapon "rhs_weap_m16a4_carryhandle_grip";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15_bk";
player addPrimaryWeaponItem "UK3CB_BAF_TA31F_3D";
player addWeapon "UK3CB_BAF_AT4_CS_AT_Launcher";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";