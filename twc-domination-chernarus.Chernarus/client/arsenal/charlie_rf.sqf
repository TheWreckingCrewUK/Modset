[arsenalAmmoBox,["arifle_MX_GL_F","hgun_ACPC2_F","launch_NLAW_F","launch_B_Titan_short_F"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer","9Rnd_45ACP_Mag","NLAW_F","Titan_AT","Titan_AP"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["H_HelmetB_snakeskin","U_B_CombatUniform_mcam_vest","V_PlateCarrier1_rgr","acc_pointer_IR","optic_Hamr"],false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,["B_AssaultPack_rgr"],false] call Bis_fnc_addVirtualBackpackCargo;

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
player forceAddUniform "U_B_CombatUniform_mcam_vest";
for "_i" from 1 to 5 do {player addItemToUniform "FirstAidKit";};
player addVest "V_PlateCarrier1_rgr";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {player addItemToVest "9Rnd_45ACP_Mag";};
for "_i" from 1 to 8 do {player addItemToVest "30Rnd_65x39_caseless_mag";};
for "_i" from 1 to 2 do {player addItemToVest "30Rnd_65x39_caseless_mag_Tracer";};
player addBackpack "B_AssaultPack_rgr";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToBackpack "Titan_AT";};
player addHeadgear "H_HelmetB_snakeskin";

comment "Add weapons";
player addWeapon "arifle_MX_F";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "optic_Hamr";
player addWeapon "launch_B_Titan_short_F";
player addWeapon "hgun_ACPC2_F";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "NVGoggles";