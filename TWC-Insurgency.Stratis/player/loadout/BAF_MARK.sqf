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
player forceAddUniform "STKR_UBACS";
player addVest "STKR_Osprey_R";
player addItemToVest "SmokeShell";
player addBackpack "STKR_Predator";
player addHeadgear "STKR_MK7_Scrim";

comment "Add weapons";
player addWeapon "Binocular";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "STKR_HMNVS";

comment "Set identity";
player setFace "GreekHead_A3_01";
player setSpeaker "AGM_NoVoice";
