[arsenalAmmoBox,["rhs_weap_m16a4_carryhandle_grip","rhsusf_weap_m1911a1","ACE_Vector"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red","rhsusf_mag_7x45acp_MHP"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["rhsusf_mich_helmet_marpatwd","rhs_uniform_FROG01_wd","rhsusf_spc_corpsman","rhsusf_acc_anpeq15_bk","UK3CB_BAF_TA31F_3D","UK3CB_BAF_TA31F","ACE_epinephrine","ACE_salineIV","ACE_personalAidKit","ACE_bodyBag","ACRE_PRC148"],false] call Bis_fnc_addVirtualItemCargo;
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
player addVest "rhsusf_spc_corpsman";
for "_i" from 1 to 8 do {player addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {player addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
player addBackpack "rhsusf_assault_eagleaiii_coy";
for "_i" from 1 to 20 do {player addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_bloodIV";};
player addHeadgear "rhsusf_mich_helmet_marpatwd";

comment "Add weapons";
player addWeapon "rhs_weap_m16a4_carryhandle_grip";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15_bk";
player addPrimaryWeaponItem "UK3CB_BAF_TA31F_3D";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";
