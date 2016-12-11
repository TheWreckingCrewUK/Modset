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
player forceAddUniform "rhs_uniform_cu_ocp";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_DAGR";
for "_i" from 1 to 3 do {player addItemToUniform "SmokeShell";};
player addVest "rhsusf_iotv_ocp_Rifleman";
player addItemToVest "ACRE_PRC148";
for "_i" from 1 to 5 do {player addItemToVest "30Rnd_556x45_Stanag";};
player addBackpack "B_AssaultPack_cbr";
player addItemToBackpack "ACRE_PRC117F";
player addItemToBackpack "DemoCharge_Remote_Mag";
player addHeadgear "H_PilotHelmetHeli_B";
player addGoggles "UK3CB_BAF_G_Tactical_Black";

comment "Add weapons";
player addWeapon "rhs_weap_m4_carryhandle_mstock";
player addPrimaryWeaponItem "UK3CB_BAF_Eotech";
player addWeapon "rhsusf_weap_m9";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "itemCTAB";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";