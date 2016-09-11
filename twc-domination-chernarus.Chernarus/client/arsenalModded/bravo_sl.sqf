[arsenalAmmoBox,["rhs_weap_m4a1_carryhandle_m203","rhsusf_weap_m9","ACE_Vector","ACE_MX2A"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red","rhsusf_mag_15Rnd_9x19_FMJ","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["rhsusf_ach_helmet_ESS_ocp","rhs_uniform_cu_ocp","rhsusf_iotv_ocp_SAW","acc_pointer_IR","UK3CB_BAF_TA31F_3D","UK3CB_BAF_TA31F","ACE_DAGR","ACE_M26_Clacker","DemoCharge_Remote_Mag","SatchelCharge_Remote_Mag","ACRE_PRC148","ACRE_PRC117F"],false] call Bis_fnc_addVirtualItemCargo;
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
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 8 do {player addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {player addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 3 do {player addItemToVest "UGL_FlareWhite_F";};
for "_i" from 1 to 3 do {player addItemToVest "1Rnd_Smoke_Grenade_shell";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
player addBackpack "rhsusf_assault_eagleaiii_ocp";
for "_i" from 1 to 9 do {player addItemTovest "1Rnd_HE_Grenade_shell";};
player addItemToBackpack "ACRE_PRC117F";
player addHeadgear "rhsusf_ach_helmet_ESS_ocp";

comment "Add weapons";
player addWeapon "rhs_weap_m4a1_carryhandle_m203";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "UK3CB_BAF_TA31F_3D";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";