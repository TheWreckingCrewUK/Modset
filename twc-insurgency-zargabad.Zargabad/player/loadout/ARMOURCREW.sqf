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
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "SmokeShell";
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_green";};
player addVest "rhsusf_iotv_ocp";
for "_i" from 1 to 2 do {player addItemToVest "30Rnd_556x45_Stanag";};
player addItemToVest "SmokeShellGreen";
player addHeadgear "H_HelmetCrew_I";

comment "Add weapons";
player addWeapon "rhs_weap_m4";
player addPrimaryWeaponItem "rhsusf_acc_compm4";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "ItemGPS";
player linkItem "rhsusf_ANPVS_14";
