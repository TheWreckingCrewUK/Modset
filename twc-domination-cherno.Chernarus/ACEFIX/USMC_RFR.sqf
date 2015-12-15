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
_unit forceAddUniform "rhs_uniform_FROG01_wd";
_unit addVest "rhsusf_spc";
_unit addBackpack "rhsusf_assault_eagleaiii_coy";
_unit addHeadgear "rhsusf_mich_helmet_marpatwd";

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