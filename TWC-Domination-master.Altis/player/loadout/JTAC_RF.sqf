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
player addVest "rhsusf_iotv_ucp_Squadleader";
player addBackpack "tf_rt1523g_sage";
player addHeadgear "rhsusf_ach_helmet_headset_ucp";

comment "Add weapons";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "tf_microdagr";
player linkItem "tf_anprc154_1";
player linkItem "rhsusf_ANPVS_14";

comment "Set identity";
player setFace "GreekHead_A3_05";
player setSpeaker "ACE_NoVoice";



if(true) exitWith{};