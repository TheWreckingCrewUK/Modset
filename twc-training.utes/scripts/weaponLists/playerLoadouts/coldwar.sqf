waitUntil {!isNull player};       //to prevent MP / JIP issues

if(isTrainer)then{

	//Trainer loadout
comment "Remove existing items";
removeAllWeapons PLAYER;
removeAllItems PLAYER;
removeAllAssignedItems PLAYER;
removeUniform PLAYER;
removeVest PLAYER;
removeBackpack PLAYER;
removeHeadgear PLAYER;
removeGoggles PLAYER;

comment "Add containers";
PLAYER forceAddUniform "UK3CB_BAF_U_CombatUniform_DPMT_ShortSleeve";
for "_i" from 1 to 2 do {PLAYER addItemToUniform "CUP_HandGrenade_L109A2_HE";};
PLAYER addVest "UK3CB_BAF_V_HiVis";
for "_i" from 1 to 6 do {PLAYER addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 6 do {PLAYER addItemToVest "ACE_packingBandage";};
for "_i" from 1 to 6 do {PLAYER addItemToVest "ACE_elasticBandage";};
for "_i" from 1 to 2 do {PLAYER addItemToVest "ACE_quikclot";};
PLAYER addBackpack "UK3CB_BAF_B_Bergen_DPMT_SL_A";
PLAYER addHeadgear "UK3CB_BAF_H_Beret_RA";
PLAYER addGoggles "UK3CB_BAF_G_Tactical_Black";

comment "Add weapons";
player addWeapon "Binocular";

comment "Add items";
PLAYER linkItem "ItemMap";
PLAYER linkItem "ItemCompass";
PLAYER linkItem "ItemWatch";


	

}else{

	//Grunt loadout
comment "Remove existing items";
removeAllWeapons PLAYER;
removeAllItems PLAYER;
removeAllAssignedItems PLAYER;
removeUniform PLAYER;
removeVest PLAYER;
removeBackpack PLAYER;
removeHeadgear PLAYER;
removeGoggles PLAYER;

comment "Add containers";
PLAYER forceAddUniform "UK3CB_BAF_U_CombatUniform_DPMT_ShortSleeve";
for "_i" from 1 to 2 do {PLAYER addItemToUniform "CUP_HandGrenade_L109A2_HE";};
PLAYER addVest "UK3CB_BAF_V_PLCE_Webbing_Plate_DPMT";
for "_i" from 1 to 6 do {PLAYER addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 6 do {PLAYER addItemToVest "ACE_packingBandage";};
for "_i" from 1 to 6 do {PLAYER addItemToVest "ACE_elasticBandage";};
for "_i" from 1 to 2 do {PLAYER addItemToVest "ACE_quikclot";};
PLAYER addBackpack "UK3CB_BAF_B_Bergen_DPMT_Rifleman_A";
PLAYER addGoggles "UK3CB_BAF_G_Tactical_Black";

comment "Add weapons";
player addWeapon "Binocular";

comment "Add items";
PLAYER linkItem "ItemMap";
PLAYER linkItem "ItemCompass";
PLAYER linkItem "ItemWatch";
	
};