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
player forceAddUniform "rhs_uniform_cu_ucp";
player addItemToUniform "rhsusf_ANPVS_14";
for "_i" from 1 to 2 do {player addItemToUniform "AGM_Bandage";};
player addItemToUniform "rhs_mag_30Rnd_556x45_M855A1_Stanag";
player addItemToUniform "rhsusf_mag_7x45acp_MHP";
player addVest "rhsusf_iotv_ucp";
for "_i" from 1 to 2 do {player addItemToVest "AGM_Morphine";};
for "_i" from 1 to 2 do {player addItemToVest "AGM_Bandage";};
for "_i" from 1 to 2 do {player addItemToVest "AGM_Epipen";};
player addItemToVest "rhsusf_mag_7x45acp_MHP";
player addHeadgear "rhsusf_cvc_ess";
player addGoggles "G_Bandanna_khk";

comment "Add weapons";
player addWeapon "rhs_weap_m4_carryhandle_pmag";
player addWeapon "rhsusf_weap_m1911a1";
player addWeapon "Binocular";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadio";

comment "Set identity";
player setFace "WhiteHead_09";
player setSpeaker "Male01ENG";
