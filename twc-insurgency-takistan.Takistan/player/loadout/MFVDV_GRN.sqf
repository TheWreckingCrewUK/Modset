comment "Exported from Arsenal by jayman";

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
player forceAddUniform "rhs_uniform_vdv_mflora";
player addItemToUniform "ACRE_PRC343";
player addVest "rhs_6b23_ML_rifleman";
player addBackpack "rhs_sidor";
player addHeadgear "rhs_6b27m_ml";

comment "Add weapons";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";

if(true) exitWith{};