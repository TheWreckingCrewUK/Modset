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
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACRE_PRC148";
for "_i" from 1 to 2 do {player addItemToUniform "rhsusf_5Rnd_762x51_m118_special_Mag";};
player addVest "rhsusf_iotv_ocp_Repair";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 3 do {player addItemToVest "rhsusf_mag_15Rnd_9x19_JHP";};
for "_i" from 1 to 6 do {player addItemToUniform "rhsusf_5Rnd_762x51_m118_special_Mag";};
player addBackpack "rhsusf_assault_eagleaiii_ocp";
player addItemToBackpack "ACE_Kestrel4500";
player addItemToBackpack "ACE_RangeCard";
player addItemToBackpack "ACE_ATragMX";
player addHeadgear "rhsusf_ach_helmet_headset_ocp";
player addGoggles "UK3CB_BAF_G_Tactical_Black";

comment "Add weapons";
player addWeapon "rhs_weap_m24sws";
player addPrimaryWeaponItem "rhsusf_acc_premier";
player addPrimaryWeaponItem "rhsusf_acc_harris_bipod";
player addWeapon "rhsusf_weap_m9";
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