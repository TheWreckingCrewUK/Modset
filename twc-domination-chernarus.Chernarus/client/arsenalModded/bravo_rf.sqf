[arsenalAmmoBox,["rhs_weap_m4a1_carryhandle_grip","rhsusf_weap_m9","UK3CB_BAF_AT4_CS_AT_Launcher","UK3CB_BAF_AT4_CS_AP_Launcher","UK3CB_BAF_Javelin_Slung_Tube","UK3CB_BAF_Javelin_CLU","CUP_launch_MAAWS","rhs_weap_M590_8RD","UK3CB_BAF_Tripod","UK3CB_BAF_L16_Tripod","UK3CB_BAF_L111A1","UK3CB_BAF_L134A1","UK3CB_BAF_L16"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","rhsusf_mag_15Rnd_9x19_FMJ","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEDP_M","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_Slug","rhsusf_8Rnd_HE","rhsusf_8Rnd_FRAG"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["rhsusf_ach_helmet_ESS_ocp","rhs_uniform_cu_ocp","rhsusf_iotv_ocp_SAW","acc_pointer_IR","UK3CB_BAF_TA31F_3D","UK3CB_BAF_TA31F","CUP_optic_MAAWS_Scope","UK3CB_BAF_32Rnd_40mm_G_Box","UK3CB_BAF_100Rnd_127x99_Box","UK3CB_BAF_1Rnd_81mm_Mo_shells","UK3CB_BAF_1Rnd_81mm_Mo_Flare_white","UK3CB_BAF_1Rnd_81mm_Mo_Smoke_white"],false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,["rhsusf_assault_eagleaiii_ocp"],false] call Bis_fnc_addVirtualBackpackCargo;

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
player forceAddUniform "rhs_uniform_cu_ocp";
player addItemToUniform "ACRE_PRC148";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addVest "rhsusf_iotv_ocp_SAW";
for "_i" from 1 to 8 do {player addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {player addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addBackpack "rhsusf_assault_eagleaiii_ocp";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addHeadgear "rhsusf_ach_helmet_ESS_ocp";

comment "Add weapons";
player addWeapon "rhs_weap_m4a1_carryhandle_grip";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15_bkA";
player addPrimaryWeaponItem "UK3CB_BAF_TA31F_3D";
player addWeapon "UK3CB_BAF_AT4_AP_Launcher";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";
