[arsenalAmmoBox,["srifle_EBR_F","hgun_P07_F","Rangefinder","launch_NLAW_F","launch_B_Titan_short_F"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["20Rnd_762x51_Mag","16Rnd_9x21_Mag","NLAW_F","Titan_AT","Titan_AP"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["H_HelmetB_camo","U_B_CTRG_3","V_PlateCarrierH_CTRG","acc_pointer_IR","optic_LRPS","bipod_01_F_blk"],false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,["B_Kitbag_rgr"],false] call Bis_fnc_addVirtualBackpackCargo;

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
player forceAddUniform "U_B_CTRG_3";
for "_i" from 1 to 5 do {player addItemToUniform "FirstAidKit";};
player addVest "V_PlateCarrierH_CTRG";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addItemToVest "16Rnd_9x21_Mag";
for "_i" from 1 to 10 do {player addItemToVest "20Rnd_762x51_Mag";};
player addBackpack "B_Kitbag_rgr";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addItemToBackpack "Titan_AT";
player addHeadgear "H_HelmetB_camo";

comment "Add weapons";
player addWeapon "srifle_EBR_F";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "optic_LRPS";
player addPrimaryWeaponItem "bipod_01_F_blk";
player addWeapon "launch_B_Titan_short_F";
player addWeapon "hgun_P07_F";
player addWeapon "Rangefinder";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "NVGoggles";