[arsenalAmmoBox,["rhs_weap_m4_carryhandle_mstock", "rhsusf_weap_m9"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhsusf_mag_15Rnd_9x19_JHP", "B_IR_Grenade"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["UK3CB_BAF_G_Tactical_Black", "H_PilotHelmetHeli_B", "rhs_uniform_cu_ucp","rhsusf_iotv_ucp_SAW","ItemGPS"],false] call Bis_fnc_addVirtualItemCargo;

comment "Exported from Arsenal by Paddock";

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
player forceAddUniform "rhs_uniform_cu_ucp";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_DAGR";
for "_i" from 1 to 3 do {player addItemToUniform "SmokeShell";};
for "_i" from 1 to 3 do {player addItemToVest "rhsusf_mag_15Rnd_9x19_JHP";};
player addVest "rhsusf_iotv_ucp_SAW";
player addItemToVest "ACRE_PRC148";
for "_i" from 1 to 7 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addHeadgear "H_PilotHelmetHeli_B";
player addGoggles "UK3CB_BAF_G_Tactical_Black";

comment "Add weapons";
player addWeapon "rhs_weap_m4_carryhandle_mstock";
player addWeapon "rhsusf_weap_m9";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";
