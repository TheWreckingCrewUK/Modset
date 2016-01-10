
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
_x forceAddUniform "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve";
_x addItemToUniform "ACRE_PRC343";
_x addItemToUniform "ACE_EarPlugs";
_x addItemToUniform "ACE_Sandbag_empty";
for "_i" from 1 to 5 do {_x addItemToUniform "ACE_morphine";};
for "_i" from 1 to 10 do {_x addItemToUniform "ACE_fieldDressing";};
_x addVest "UK3CB_BAF_V_Osprey_Rifleman_E";
_x addBackpack "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C";
_x addHeadgear "UK3CB_BAF_H_Mk7_Camo_D";
_x addGoggles "UK3CB_BAF_G_Tactical_Black";

comment "Add weapons";
_x addWeapon "Binocular";

comment "Add items";
_x linkItem "ItemMap";
_x linkItem "ItemCompass";
_x linkItem "ItemWatch";
_x linkItem "UK3CB_BAF_HMNVS";

comment "Set identity";
_x setFace "GreekHead_A3_01";
_x setSpeaker "ACE_NoVoice";
} forEach Players;