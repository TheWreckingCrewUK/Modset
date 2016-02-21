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
player forceAddUniform "U_B_HeliPilotCoveralls";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACRE_PRC148";
player addItemToUniform "ACE_DAGR";
player addVest "CUP_V_B_PilotVest";
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 3 do {player addItemToVest "ACE_HandFlare_White";};
for "_i" from 1 to 3 do {player addItemToVest "CUP_7Rnd_45ACP_1911";};
player addBackpack "B_AssaultPack_khk";
player addItemToBackpack "ACRE_PRC117F";
player addHeadgear "H_PilotHelmetHeli_B";

comment "Add weapons";
player addWeapon "CUP_hgun_Colt1911";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "CUP_NVG_PVS7";
