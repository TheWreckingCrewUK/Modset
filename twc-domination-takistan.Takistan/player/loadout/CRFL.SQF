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
player forceAddUniform "U_CDF_A3_uniform_ttsko";
player addItemToUniform "AGM_EarBuds";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 2 do {player addItemToUniform "AGM_Bandage";};
player addItemToUniform "AGM_Morphine";
player addVest "V_CDF_A3_6b23_rifleman_01";
player addBackpack "B_CDF_A3_Backpack";
player addHeadgear "H_CDF_A3_HelmetIA";

comment "Add weapons";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

comment "Set identity";
player setFace "WhiteHead_19";
player setSpeaker "AGM_NoVoice";
