[arsenalAmmoBox,["UK3CB_BAF_L85A2_RIS","UK3CB_BAF_L131A1","ACE_Vector","ACE_MX2A"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["UK3CB_BAF_30Rnd","UK3CB_BAF_30Rnd_T","UK3CB_BAF_17Rnd_9mm"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["UK3CB_BAF_H_Mk7_Camo_ESS_A","UK3CB_BAF_U_CombatUniform_MTP_RM","UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve","UK3CB_BAF_V_Osprey_SL_A","UK3CB_BAF_LLM_IR_Black","UK3CB_BAF_SpecterLDS_Dot_3D","UK3CB_BAF_SpecterLDS_Dot","UK3CB_BAF_Eotech","ACE_DAGR","ACE_M26_Clacker","DemoCharge_Remote_Mag","SatchelCharge_Remote_Mag","ACRE_PRC343","ACRE_PRC117F"],false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,["UK3CB_BAF_B_Bergen_MTP_SL_L_A"],false] call Bis_fnc_addVirtualBackpackCargo;

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
player addVest "UK3CB_BAF_V_Osprey_SL_A";
for "_i" from 1 to 8 do {player addItemToVest "UK3CB_BAF_30Rnd";};
for "_i" from 1 to 2 do {player addItemToVest "UK3CB_BAF_30Rnd_T";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addBackpack "UK3CB_BAF_B_Bergen_MTP_SL_L_A";
player addItemToBackpack "ACRE_PRC117F";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShellRed";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShellBlue";};
player addHeadgear "UK3CB_BAF_H_Mk7_Camo_ESS_A";

comment "Add weapons";
player addWeapon "UK3CB_BAF_L85A2_RIS";
player addPrimaryWeaponItem "UK3CB_BAF_LLM_IR_Black";
player addPrimaryWeaponItem "UK3CB_BAF_SpecterLDS_Dot_3D";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";