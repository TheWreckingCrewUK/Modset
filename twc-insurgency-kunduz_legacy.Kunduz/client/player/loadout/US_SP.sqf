comment "Exported from Arsenal by Adam";

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
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACRE_PRC148_ID_1";
player addVest "rhsusf_iotv_ocp_Rifleman";
for "_i" from 1 to 7 do {player addItemToVest "30Rnd_556x45_Stanag";};
player addItemToVest "HandGrenade";
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 5 do {player addItemToVest "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 2 do {player addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
player addBackpack "rhsusf_assault_eagleaiii_ocp";
player addItemToBackpack "ACRE_PRC117F_ID_1";
player addItemToBackpack "HandGrenade";
player addItemToBackpack "ACE_Kestrel4500";
player addItemToBackpack "ACE_RangeCard";
player addItemToBackpack "ACE_ATragMX";
player addHeadgear "rhsusf_ach_helmet_ocp";

comment "Add weapons";
player addWeapon "rhs_weap_m4_carryhandle_pmag";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15_bk";
player addPrimaryWeaponItem "UK3CB_BAF_TA31F_3D";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "ItemcTab";
player linkItem "rhsusf_ANPVS_14";

comment "Set identity";
player setFace "WhiteHead_17";
player setSpeaker "ACE_NoVoice";
