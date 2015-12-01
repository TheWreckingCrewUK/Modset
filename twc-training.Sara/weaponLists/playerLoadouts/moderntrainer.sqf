waitUntil {!isNull player};       //to prevent MP / JIP issues

_unit = player;


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
_unit forceAddUniform "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve";
_unit addItemToUniform "ACRE_PRC343";
_unit addItemToUniform "ACE_EarPlugs";
_unit addItemToUniform "ACE_Sandbag_empty";
for "_i" from 1 to 5 do {_unit addItemToUniform "ACE_morphine";};
for "_i" from 1 to 10 do {_unit addItemToUniform "ACE_fieldDressing";};
_unit addVest "UK3CB_BAF_V_Osprey_Rifleman_E";
_unit addBackpack "UK3CB_BAF_B_Bergen_MTP_Radio_H_A";
_unit addItemToBackpack "ACRE_PRC117F";

_unit addHeadgear "B_P_BeretOff";
_unit addGoggles "UK3CB_BAF_G_Tactical_Black";

comment "Add weapons";
_unit addWeapon "Binocular";

comment "Add items";
_unit linkItem "ItemMap";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";

comment "Set identity";
_unit setFace "GreekHead_A3_01";
_unit setSpeaker "ACE_NoVoice";