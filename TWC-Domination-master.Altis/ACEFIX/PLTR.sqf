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
_unit forceAddUniform "rhs_uniform_cu_ocp_1stcav";
for "_i" from 1 to 8 do {_unit addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 4 do {_unit addItemToUniform "ACE_morphine";};
_unit addItemToUniform "Chemlight_blue";
for "_i" from 1 to 2 do {_unit addItemToUniform "rhsusf_mag_7x45acp_MHP";};
_unit addVest "rhsusf_iotv_ocp";
for "_i" from 1 to 2 do {_unit addItemToVest "ACE_fieldDressing";};
_unit addItemToVest "ACE_morphine";
_unit addItemToVest "rhsusf_mag_7x45acp_MHP";
for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
_unit addBackpack "tf_rt1523g_sage";
_unit addItemToBackpack "ACE_DAGR";
for "_i" from 1 to 2 do {_unit addItemToBackpack "SmokeShell";};
for "_i" from 1 to 2 do {_unit addItemToBackpack "Chemlight_green";};
_unit addHeadgear "H_PilotHelmetHeli_B";
_unit addGoggles "rhs_googles_black";

comment "Add weapons";
_unit addWeapon "rhsusf_weap_m1911a1";

comment "Add items";
_unit linkItem "ItemMap";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
_unit linkItem "tf_anprc152";

comment "Set identity";
_unit setFace "GreekHead_A3_07";
_unit setSpeaker "Male02GRE";
if(true) exitWith{};
