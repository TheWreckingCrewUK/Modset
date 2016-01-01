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

player forceAddUniform "REV1_uniform_da";
player addItemToUniform "ACRE_PRC148";
player addVest "REV1_vest_de";
player addBackpack "B_Kitbag_cbr";
player addHeadgear "REV1_spectra_da_glass";

comment "Add weapons";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";


comment "Set identity";
player setFace "WhiteHead_07";
player setSpeaker "Male02ENG";