waitUntil {!isNull player};       //to prevent MP / JIP issues

_unit = _this select 0;

comment "Remove existing items";
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
_unit addVest "rhsusf_iotv_ocp_Rifleman";
_unit addBackpack "tf_rt1523g_black";
_unit addItemToBackpack "CUP_Vector21Nite";
_unit addHeadgear "rhsusf_ach_helmet_ocp";

comment "Add weapons";

comment "Add items";
_unit linkItem "ItemMap";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
_unit linkItem "tf_anprc152";
_unit linkItem "rhsusf_ANPVS_14";

comment "Set identity";
_unit setFace "GreekHead_A3_01";
_unit setSpeaker "AGM_NoVoice";

if(true) exitWith{};