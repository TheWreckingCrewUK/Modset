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
player forceAddUniform "LOP_U_AA_Fatigue_01_slv";
player addVest "LOP_V_CarrierLite_ANA";
player addHeadgear "LOP_H_6B27M_ANA";
player addbackpack "B_Kitbag_rgr";

comment "Add weapons";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";


if(true) exitWith{};