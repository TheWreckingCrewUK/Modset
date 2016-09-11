[arsenalAmmoBox,["SMG_01_Holo_F"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["30Rnd_45ACP_Mag_SMG_01","B_IR_Grenade"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["H_PilotHelmetHeli_B","U_B_HeliPilotCoveralls","V_TacVest_blk","optic_Holosight_smg","ItemGPS"],false] call Bis_fnc_addVirtualItemCargo;

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
player forceAddUniform "U_B_HeliPilotCoveralls";
for "_i" from 1 to 5 do {player addItemToUniform "FirstAidKit";};
player addVest "V_TacVest_blk";
for "_i" from 1 to 3 do {player addItemToVest "30Rnd_45ACP_Mag_SMG_01";};
player addItemToVest "B_IR_Grenade";
for "_i" from 1 to 2 do {player addItemToVest "Chemlight_green";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
player addHeadgear "H_PilotHelmetHeli_B";

comment "Add weapons";
player addWeapon "SMG_01_F";
player addPrimaryWeaponItem "optic_Holosight_smg";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";
player linkItem "ItemGPS";
player linkItem "NVGoggles";