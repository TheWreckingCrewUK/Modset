[arsenalAmmoBox,["arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["30Rnd_65x39_caseless_mag", "11Rnd_45ACP_Mag"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["H_MilCap_mcamo","U_B_CombatUniform_mcam","V_BandollierB_rgr","optic_Aco","optic_MRD","ItemGPS"],false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,[""],false] call Bis_fnc_addVirtualBackpackCargo;

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
player addVest "V_BandollierB_rgr";
for "_i" from 1 to 3 do {player addItemToVest "30Rnd_65x39_caseless_mag";};
for "_i" from 1 to 2 do {player addItemToVest "11Rnd_45ACP_Mag";};
player addItemToVest "SmokeShell";
player addItemToVest "SmokeShellGreen";
player addItemToVest "Chemlight_green";
player addHeadgear "H_MilCap_mcamo";
player addGoggles "G_Aviator";

comment "Add weapons";
player addWeapon "arifle_MXC_ACO_F";
player addPrimaryWeaponItem "optic_Aco";
player addWeapon "hgun_Pistol_heavy_01_MRD_F";
player addHandgunItem "optic_MRD";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "ItemGPS";