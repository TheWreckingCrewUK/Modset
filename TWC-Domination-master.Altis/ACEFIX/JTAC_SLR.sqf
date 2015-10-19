waitUntil {!isNull player};       //to prevent MP / JIP issues

_unit = _this select 0;
removeAllWeapons _unit;
removeAllItems _unit;
removeAllAssignedItems _unit;
removeUniform _unit;
removeVest _unit;
removeBackpack _unit;
removeHeadgear _unit;
removeGoggles _unit;

comment "Add containers";
_unit forceAddUniform "rhs_uniform_cu_ocp";
_unit addVest "rhsusf_iotv_ucp_Squadleader";
_unit addBackpack "tf_rt1523g_sage";
_unit addHeadgear "rhsusf_ach_helmet_headset_ucp";

comment "Add weapons";

comment "Add items";
_unit linkItem "ItemMap";
_unit linkItem "ItemCompass";
_unit linkItem "tf_microdagr";
_unit linkItem "tf_anprc154_1";
_unit linkItem "rhsusf_ANPVS_14";

comment "Set identity";
_unit setFace "GreekHead_A3_05";
_unit setSpeaker "ACE_NoVoice";
if(true) exitWith{};