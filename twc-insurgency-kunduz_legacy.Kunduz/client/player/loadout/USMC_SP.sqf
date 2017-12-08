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
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACRE_PRC148_ID_1";
player addVest "rhsusf_spc_light";
for "_i" from 1 to 4 do {player addItemToVest "30Rnd_556x45_Stanag";};
player addItemToVest "HandGrenade";
player addItemToVest "ACE_Kestrel4500";
player addItemToVest "ACE_RangeCard";
player addItemToVest "ACE_ATragMX";
player addItemToVest "rhsusf_mag_10Rnd_STD_50BMG_mk211";
player addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";
player addBackpack "UK3CB_BAF_B_Bergen_TAN_JTAC_H_A";
player addItemToBackpack "ACRE_PRC117F_ID_1";
player addItemToBackpack "UK3CB_BAF_Soflam_Laserdesignator";
player addItemToBackpack "Laserbatteries";
for "_i" from 1 to 2 do {player addItemToBackpack "rhsusf_mag_10Rnd_STD_50BMG_mk211";};
for "_i" from 1 to 2 do {player addItemToBackpack "rhsusf_mag_10Rnd_STD_50BMG_M33";};
player addHeadgear "rhsusf_mich_helmet_marpatd_norotos_headset";

comment "Add weapons";
player addWeapon "rhs_weap_m16a4_carryhandle";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15_bk";
player addPrimaryWeaponItem "UK3CB_BAF_TA31F_3D";
player addPrimaryWeaponItem "rhsusf_acc_harris_bipod";
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
