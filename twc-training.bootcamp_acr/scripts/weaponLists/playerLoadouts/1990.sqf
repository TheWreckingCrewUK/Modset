waitUntil {!isNull player};       //to prevent MP / JIP issues

if(isTrainer) then {
	//trainer loadout
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
	player forceAddUniform "BAF_Soldier_Base_L_W_Uniform_DG1";
	player addItemToUniform "ACRE_PRC343";
	player addItemToUniform "ACE_EarPlugs";
	player addItemToUniform "ACE_Sandbag_empty";
	for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
	for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
	player addVest "BAF_Soldier_Officer_Vest_W_DG1";
	player addBackpack "CUP_B_Bergen_BAF";
	player addItemToBackpack "ACRE_PRC117F";

	player addHeadgear "B_P_BeretOff";

	comment "Add weapons";
	player addWeapon "Binocular";

	comment "Add items";
	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	
}else{

	//grunts loadout
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
	player forceAddUniform "BAF_Soldier_Base_L_W_Uniform_DG1";
	player addItemToUniform "ACRE_PRC343";
	player addItemToUniform "ACE_EarPlugs";
	player addItemToUniform "ACE_Sandbag_empty";
	for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
	for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
	player addVest "BAF_Soldier_Officer_Vest_W_DG1";
	player addBackpack "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C";
	player addHeadgear "BAF_Soldier_1_Headgear_W_DG1";
	player addGoggles "UK3CB_BAF_G_Tactical_Black";

	comment "Add weapons";
	player addWeapon "Binocular";
	
	comment "Add items";
	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	player linkItem "UK3CB_BAF_HMNVS";
};