

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
player forceAddUniform "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve";
player addItemToUniform "ACRE_PRC343";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_Sandbag_empty";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
player addVest "UK3CB_BAF_V_Osprey_Rifleman_E";
player addBackpack "UK3CB_BAF_B_Bergen_MTP_Radio_H_A";
player addItemToBackpack "ACRE_PRC117F";

player addHeadgear "B_P_BeretOff";
player addGoggles "UK3CB_BAF_G_Tactical_Black";

comment "Add weapons";
player addWeapon "Binocular";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

comment "Set identity";
player setFace "GreekHead_A3_01";
player setSpeaker "ACE_NoVoice";

