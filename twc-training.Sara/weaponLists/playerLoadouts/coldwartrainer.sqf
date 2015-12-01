waitUntil {!isNull player};

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
_unit forceAddUniform "MNP_CombatUniform_DPMR";
_unit addItemToUniform "ACRE_PRC343";
_unit addItemToUniform "ACE_EarPlugs";
_unit addItemToUniform "ACE_Sandbag_empty";
for "_i" from 1 to 5 do {_unit addItemToUniform "ACE_morphine";};
for "_i" from 1 to 10 do {_unit addItemToUniform "ACE_fieldDressing";};
_unit addVest "V_sud_nato_vest05";
_unit addBackpack "B_SUD_ALICE";
_unit addItemToBackpack "ACRE_PRC117F";
_unit addHeadgear "UK_Beret_Paras";

comment "Add weapons";
_unit addWeapon "Binocular";

comment "Add items";
_unit linkItem "ItemMap";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";

comment "Set identity";
_unit setFace "GreekHead_A3_01";
_unit setSpeaker "ACE_NoVoice";

if(true) exitWith{};