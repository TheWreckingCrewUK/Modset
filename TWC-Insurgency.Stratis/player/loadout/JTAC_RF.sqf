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
player addItemToUniform "ACRE_PRC148";
player addVest "rhsusf_iotv_ucp_Squadleader";
player addBackpack "rhsusf_assault_eagleaiii_ocp";
player addItemToBackpack "ACRE_PRC117F";
player addHeadgear "rhsusf_ach_helmet_headset_ucp";

comment "Add weapons";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "rhsusf_ANPVS_14";

comment "Set identity";
player setFace "GreekHead_A3_05";
player setSpeaker "ACE_NoVoice";



if(true) exitWith{};