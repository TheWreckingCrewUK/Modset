comment "Exported from Arsenal by FakeMatty";

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
player forceAddUniform "BAF_Soldier_Base_R_M_Uniform_DG1";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 4 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "Chemlight_green";
player addVest "BAF_Pilot_Vest_M_DG1";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
player addItemToVest "SmokeShellRed";
player addItemToVest "SmokeShellGreen";
for "_i" from 1 to 2 do {player addItemToVest "Chemlight_green";};
player addHeadgear "BAF_Pilot_Headgear_DG1";

comment "Add weapons";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "rhsusf_ANPVS_14";

comment "Set identity";
player setFace "GreekHead_A3_01";
player setSpeaker "Male04ENGB";
