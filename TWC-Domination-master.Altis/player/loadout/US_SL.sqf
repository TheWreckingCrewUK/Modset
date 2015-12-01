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
player forceAddUniform "rhs_uniform_cu_ocp";
player addItemToUniform "ACRE_PRC148";
player addVest "rhsusf_iotv_ocp_Rifleman";
player addBackpack "rhsusf_assault_eagleaiii_ocp";
player addItemToBackpack "ACRE_PRC117F";
player addItemToBackpack "CUP_Vector21Nite";
player addHeadgear "rhsusf_ach_helmet_ocp";

comment "Add weapons";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "rhsusf_ANPVS_14";

comment "Set identity";
player setFace "GreekHead_A3_01";
player setSpeaker "AGM_NoVoice";
