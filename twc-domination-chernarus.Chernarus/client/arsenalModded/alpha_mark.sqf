[arsenalAmmoBox,["UK3CB_BAF_L129A1_FGrip","UK3CB_BAF_L131A1","ACE_Vector","launch_UK3CB_BAF_NLAW_Launcher","UK3CB_BAF_AT4_CS_AT_Launcher","UK3CB_BAF_AT4_CS_AP_Launcher","UK3CB_BAF_Javelin_Slung_Tube","UK3CB_BAF_Javelin_CLU"],false] call BIS_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["UK3CB_BAF_20Rnd","UK3CB_BAF_20Rnd_T","UK3CB_BAF_17Rnd_9mm","UK3CB_BAF_NLAW_Launcher"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["UK3CB_BAF_H_Mk7_Scrim_E","UK3CB_BAF_U_CombatUniform_MTP_RM","UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve","UK3CB_BAF_V_Osprey_Marksman_A","UK3CB_BAF_LLM_IR_Black","UK3CB_BAF_TA648_308"],false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,["UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A"],false] call Bis_fnc_addVirtualBackpackCargo;

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
player addVest "UK3CB_BAF_V_Osprey_Marksman_A";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 8 do {player addItemToVest "UK3CB_BAF_20Rnd";};
for "_i" from 1 to 2 do {player addItemToVest "UK3CB_BAF_20Rnd_T";};
player addBackpack "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addHeadgear "UK3CB_BAF_H_Mk7_Scrim_E";

comment "Add weapons";
player addWeapon "UK3CB_BAF_L129A1_FGrip";
player addPrimaryWeaponItem "UK3CB_BAF_LLM_IR_Black";
player addPrimaryWeaponItem "UK3CB_BAF_TA648_308";
player addWeapon "UK3CB_BAF_NLAW_Launcher";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";