 {
comment "Remove existing items";
removeAllWeapons _x;
removeAllItems _x;
removeAllAssignedItems _x;
removeUniform _x;
removeVest _x;
removeBackpack _x;
removeHeadgear _x;
removeGoggles _x;

comment "Add containers";
_x forceAddUniform "MNP_CombatUniform_DPMR";
_x addItemToUniform "ACRE_PRC343";
_x addItemToUniform "ACE_EarPlugs";
_x addItemToUniform "ACE_Sandbag_empty";
for "_i" from 1 to 5 do {_x addItemToUniform "ACE_morphine";};
for "_i" from 1 to 10 do {_x addItemToUniform "ACE_fieldDressing";};
_x addVest "V_sud_nato_vest05";
_x addBackpack "B_SUD_ALICE";
_x addItemToUniform "ACRE_PRC117F";
_x addHeadgear "UK_Beret_Paras";

comment "Add weapons";
_x addWeapon "Binocular";

comment "Add items";
_x linkItem "ItemMap";
_x linkItem "ItemCompass";
_x linkItem "ItemWatch";

comment "Set identity";
_x setFace "GreekHead_A3_01";
_x setSpeaker "ACE_NoVoice";
}foreach Trainers;