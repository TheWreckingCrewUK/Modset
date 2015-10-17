

waitUntil {!isNull player};       //to prevent MP / JIP issues

_unit = _this select 0;
comment "Exported from Arsenal by FakeMatty";

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
_unit forceAddUniform "SAM_Crye_M90_uniform";
for "_i" from 1 to 4 do {_unit addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {_unit addItemToUniform "ACE_morphine";};
_unit addItemToUniform "Chemlight_green";
_unit addVest "SAM_PlateCarrier";
_unit addBackpack "tf_rt1523g_sage";
_unit addHeadgear "SAM_HelmetIA_M90";
_unit addGoggles "sam_peltor_bronze";

comment "Add weapons";

comment "Add items";
_unit linkItem "ItemMap";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
_unit linkItem "tf_anprc152";

comment "Set identity";
_unit setFace "WhiteHead_07";
_unit setSpeaker "Male02ENG";




if(true) exitWith{};