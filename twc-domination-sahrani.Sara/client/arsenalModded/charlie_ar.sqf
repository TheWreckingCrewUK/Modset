[arsenalAmmoBox,["rhs_weap_m249_pip_L","rhsusf_weap_m1911a1","rhs_weap_m27iar","UK3CB_BAF_AT4_CS_AT_Launcher","UK3CB_BAF_AT4_CS_AP_Launcher"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["rhs_200rnd_556x45_M_SAW","rhsusf_100Rnd_556x45_soft_pouch","rhsusf_200Rnd_556x45_soft_pouch","rhsusf_mag_7x45acp_MHP","30Rnd_556x45_Stanag_Tracer_Red"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["rhsusf_mich_helmet_marpatwd","rhs_uniform_FROG01_wd","UK3CB_BAF_Eotech","rhsusf_spc_mg","rhsusf_acc_anpeq15","rhsusf_acc_ELCAN","ACRE_PRC148"],false] call Bis_fnc_addVirtualItemCargo;
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
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACRE_PRC148";
player addVest "rhsusf_spc_mg";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addItemToVest "SmokeShell";
player addItemToVest "rhs_200rnd_556x45_M_SAW";
player addBackpack "rhsusf_assault_eagleaiii_coy";
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_200rnd_556x45_M_SAW";};
player addHeadgear "rhsusf_mich_helmet_marpatwd";

comment "Add weapons";
player addWeapon "rhs_weap_m249_pip_L";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15side";
player addPrimaryWeaponItem "rhsusf_acc_ELCAN";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";