comment "Exported from Arsenal by jayman";

comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add containers";
this forceAddUniform "CUP_U_B_FR_DirAction2";
for "_i" from 1 to 10 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToUniform "ACE_morphine";};
this addItemToUniform "ACE_EarPlugs";
this addItemToUniform "ACRE_PRC148_ID_2";
this addVest "CUP_V_B_MTV_noCB";
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 8 do {this addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
this addBackpack "CUP_B_USPack_Coyote";
for "_i" from 1 to 20 do {this addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 10 do {this addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 3 do {this addItemToBackpack "ACE_bloodIV";};
for "_i" from 1 to 3 do {this addItemToBackpack "SmokeShell";};
this addHeadgear "CUP_H_FR_ECH";

comment "Add weapons";
this addWeapon "CUP_arifle_M16A4_Base";
this addPrimaryWeaponItem "CUP_acc_ANPEQ_15";
this addPrimaryWeaponItem "CUP_optic_ACOG";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadioAcreFlagged";
this linkItem "CUP_NVG_PVS7";
