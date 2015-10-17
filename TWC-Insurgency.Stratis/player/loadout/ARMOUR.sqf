
comment "Exported from Arsenal by FakeMatty";

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
this forceAddUniform "rhs_uniform_cu_ocp";
for "_i" from 1 to 2 do {this addItemToUniform "AGM_Bandage";};
for "_i" from 1 to 2 do {this addItemToUniform "AGM_Morphine";};
this addItemToUniform "SmokeShell";
for "_i" from 1 to 2 do {this addItemToUniform "Chemlight_green";};
for "_i" from 1 to 3 do {this addItemToUniform "30Rnd_556x45_Stanag";};
this addVest "rhsusf_iotv_ocp_Repair";
this addItemToVest "AGM_Bloodbag";
this addItemToVest "AGM_Morphine";
for "_i" from 1 to 3 do {this addItemToVest "SmokeShellGreen";};
for "_i" from 1 to 2 do {this addItemToVest "30Rnd_556x45_Stanag";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShellYellow";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShellRed";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShellPurple";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShellBlue";};
this addHeadgear "H_HelmetCrew_I";

comment "Add weapons";
this addWeapon "rhs_weap_m4";
this addWeapon "CUP_hgun_M9";
this addWeapon "AGM_Vector";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "tf_microdagr";
this linkItem "tf_anprc148jem";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "WhiteHead_12";
this setSpeaker "Male11ENG";
