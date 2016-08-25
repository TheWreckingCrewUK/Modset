[arsenalAmmoBox,["UK3CB_BAF_L85A2_RIS","UK3CB_BAF_L131A1"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_Tracer_Red","UK3CB_BAF_17Rnd_9mm"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["UK3CB_BAF_H_Mk7_Camo_CESS_D","UK3CB_BAF_U_CombatUniform_MTP_RM","UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve","UK3CB_BAF_V_Osprey_Medic_A","UK3CB_BAF_LLM_IR_Black","UK3CB_BAF_SpecterLDS_Dot_3D","UK3CB_BAF_SpecterLDS_Dot","UK3CB_BAF_Eotech","ACE_epinephrine","ACE_salineIV","ACE_personalAidKit","ACE_bodyBag"],false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,["UK3CB_BAF_B_Bergen_MTP_Medic_L_B"],false] call Bis_fnc_addVirtualBackpackCargo;

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
player forceAddUniform "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve";
player addItemToUniform "ACRE_PRC343";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addVest "UK3CB_BAF_V_Osprey_Medic_A";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 8 do {player addItemToVest "UK3CB_BAF_30Rnd";};
for "_i" from 1 to 2 do {player addItemToVest "UK3CB_BAF_30Rnd_T";};
player addBackpack "UK3CB_BAF_B_Bergen_MTP_Medic_L_B";
for "_i" from 1 to 20 do {player addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_bloodIV";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addHeadgear "UK3CB_BAF_H_Mk7_Camo_CESS_D";

comment "Add weapons";
player addWeapon "UK3CB_BAF_L85A2_RIS";
player addPrimaryWeaponItem "UK3CB_BAF_LLM_IR_Black";
player addPrimaryWeaponItem "UK3CB_BAF_SpecterLDS_Dot_3D";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";