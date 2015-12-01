comment "Exported from Arsenal by FakeMatty";

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
player forceAddUniform "SAM_Crye_M90k_uniform";
player addItemToUniform "ACRE_PRC148";
player addItemToUniform "Chemlight_green";
player addVest "SAM_PlateCarrier";
player addBackpack "B_Carryall_cbr";
player addItemToBackpack "ACRE_PRC117F";
player addHeadgear "SAM_HelmetIA_M90k";
player addGoggles "sam_peltor_bronze";

comment "Add weapons";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

comment "Set identity";
player setFace "WhiteHead_07";
player setSpeaker "Male02ENG";

