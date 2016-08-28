comment "Exported from Arsenal by Paddock";

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
player forceAddUniform "rhs_uniform_mvd_izlom";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addVest "CUP_V_BAF_Osprey_Mk2_DPM_Empty";
player addItemToVest "HandGrenade";
player addItemToVest "rhs_100Rnd_762x54mmR";
player addBackpack "rhs_assault_umbts";
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
for "_i" from 1 to 3 do {player addItemToBackpack "rhs_100Rnd_762x54mmR";};
player addHeadgear "rhs_6b7_1m";

comment "Add weapons";
player addWeapon "rhs_weap_pkm";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";

