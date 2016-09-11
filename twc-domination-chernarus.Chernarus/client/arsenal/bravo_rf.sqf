[arsenalAmmoBox,["arifle_MX_Black_F","hgun_P07_F","launch_NLAW_F","launch_B_Titan_short_F"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","NLAW_F","Titan_AT","Titan_AP"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["H_HelmetSpecB_paint2","U_B_CombatUniform_mcam","V_PlateCarrier2_rgr","acc_pointer_IR","optic_Hamr"],false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,["B_Kitbag_mcamo"],false] call Bis_fnc_addVirtualBackpackCargo;

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
player forceAddUniform "U_B_CombatUniform_mcam";
for "_i" from 1 to 5 do {player addItemToUniform "FirstAidKit";};
player addVest "V_PlateCarrier2_rgr";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addItemToVest "16Rnd_9x21_Mag";
for "_i" from 1 to 8 do {player addItemToVest "30Rnd_65x39_caseless_mag";};
for "_i" from 1 to 2 do {player addItemToVest "30Rnd_65x39_caseless_mag_Tracer";};
player addBackpack "B_Kitbag_mcamo";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToBackpack "Titan_AT";};
player addHeadgear "H_HelmetSpecB_paint2";

comment "Add weapons";
player addWeapon "arifle_MX_Black_F";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "optic_Hamr";
player addWeapon "launch_B_Titan_short_F";
player addWeapon "hgun_P07_F";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "NVGoggles";
