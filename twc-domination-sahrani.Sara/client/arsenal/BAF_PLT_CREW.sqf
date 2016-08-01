[arsenalAmmoBox,["UK3CB_BAF_L22A2", "UK3CB_BAF_L131A1"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["UK3CB_BAF_30Rnd", "UK3CB_BAF_17Rnd_9mm", "B_IR_Grenade"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["UK3CB_BAF_H_PilotHelmetHeli_A","UK3CB_BAF_U_CombatUniform_MTP","UK3CB_BAF_V_Pilot_A","ItemGPS", "B_AssaultPack_mcamo", "ACRE_PRC117F"],false] call Bis_fnc_addVirtualItemCargo;

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
player forceAddUniform "UK3CB_BAF_U_CombatUniform_MTP";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_DAGR";
for "_i" from 1 to 3 do {player addItemToUniform "SmokeShell";};
player addVest "UK3CB_BAF_V_Pilot_A";
player addItemToVest "ACRE_PRC343";
for "_i" from 1 to 6 do {player addItemToVest "UK3CB_BAF_30Rnd";};
player addHeadgear "UK3CB_BAF_H_PilotHelmetHeli_A";
player addGoggles "UK3CB_BAF_G_Tactical_Black";

comment "Add weapons";
player addWeapon "UK3CB_BAF_L22A2";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";

comment "Set identity";
player setFace "WhiteHead_13";
player setSpeaker "Male04ENG";
