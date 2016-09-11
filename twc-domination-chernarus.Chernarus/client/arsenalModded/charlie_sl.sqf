[arsenalAmmoBox,["rhs_weap_m16a4_carryhandle_M203","rhsusf_weap_m1911a1","ACE_Vector","ACE_MX2A"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red","rhsusf_mag_7x45acp_MHP","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["rhsusf_mich_helmet_marpatwd","rhs_uniform_FROG01_wd","rhsusf_spc_squadleader","rhsusf_acc_anpeq15_bk","UK3CB_BAF_TA31F_3D","UK3CB_BAF_TA31F","ACE_DAGR","ACE_M26_Clacker","DemoCharge_Remote_Mag","SatchelCharge_Remote_Mag","ACRE_PRC148","ACRE_PRC117F"],false] call Bis_fnc_addVirtualItemCargo;
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
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACRE_PRC148";
player addVest "rhsusf_spc_squadleader";
for "_i" from 1 to 8 do {player addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {player addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 8 do {player addItemToVest "1Rnd_HE_Grenade_shell";};
player addBackpack "rhsusf_assault_eagleaiii_coy";
player addItemToBackpack "ACRE_PRC117F";
for "_i" from 1 to 4 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
player addHeadgear "rhsusf_mich_helmet_marpatwd";

comment "Add weapons";
player addWeapon "rhs_weap_m16a4_carryhandle_M203";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15_bk";
player addPrimaryWeaponItem "UK3CB_BAF_TA31F_3D";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";