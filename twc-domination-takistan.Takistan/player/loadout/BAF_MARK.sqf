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
player addItemToUniform "ACRE_PRC343_ID_2";
player addVest "UK3CB_BAF_V_Osprey_Marksman_A";
player addBackpack "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A";

player addHeadgear "UK3CB_BAF_H_Mk7_Camo_ESS_A";

comment "Add weapons";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "rhsusf_ANPVS_14";

comment "Set identity";
player setFace "GreekHead_A3_07";
player setSpeaker "Male06ENG";
