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
player forceAddUniform "rhs_uniform_FROG01_d";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACRE_PRC148_ID_2";
player addVest "rhsusf_spc_light";
player addItemToVest "HandGrenade";
player addItemToVest "rhsusf_mag_10Rnd_STD_50BMG_mk211";
for "_i" from 1 to 3 do {player addItemToVest "rhsusf_mag_15Rnd_9x19_JHP";};
player addBackpack "rhsusf_assault_eagleaiii_coy";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addItemToBackpack "ACE_RangeCard";
player addItemToBackpack "rhsusf_mag_10Rnd_STD_50BMG_mk211";
for "_i" from 1 to 3 do {player addItemToBackpack "rhsusf_mag_10Rnd_STD_50BMG_M33";};
player addHeadgear "rhsusf_mich_helmet_marpatd_norotos_headset";

comment "Add weapons";
player addWeapon "rhs_weap_M107_d";
player addPrimaryWeaponItem "rhsusf_acc_premier";
player addWeapon "rhsusf_weap_m9";

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
