//Gear randomization for commander pirates
params["_unit"];
_unit removeWeapon (primaryWeapon _unit);
removeVest _unit;

_unit forceAddUniform (selectRandomWeighted ["U_I_C_Soldier_Bandit_1_F",1,"U_I_C_Soldier_Bandit_3_F",1,"U_I_C_Soldier_Bandit_4_F",1,"CUP_U_I_GUE_Anorak_01",1,"CUP_U_I_GUE_Anorak_03",1,"U_I_C_Soldier_Para_2_F",1,"U_I_C_Soldier_Bandit_5_F",1,"U_I_C_Soldier_Bandit_2_F",1]);
_unit addItemToUniform "ACE_fieldDressing";
_unit addItemToUniform "ACE_fieldDressing";
_unit addItemToUniform (selectRandomWeighted ["ACE_atropine",0.5,"ACE_epinephrine",1,"ACE_morphine",1,"",1]);

_unit addVest (selectRandomWeighted ["CUP_V_OI_TKI_Jacket2_01",1,"CUP_V_OI_TKI_Jacket2_04",1,"CUP_V_OI_TKI_Jacket2_02",1,"CUP_V_I_Carrier_Belt",1,"CUP_V_O_Ins_Carrier_Rig_Light",1,"CUP_V_OI_TKI_Jacket3_05",1,"CUP_V_OI_TKI_Jacket3_03",1]);
_unit addItemToVest "CUP_HandGrenade_RGD5";
_unit addItemToVest "CUP_HandGrenade_RGD5";
_unit addItemToVest "SmokeShell";

_gun = selectRandomWeighted ["CUP_srifle_CZ550",1,"CUP_srifle_LeeEnfield",1,"CUP_srifle_M14",1,"CUP_srifle_SVD",1];

switch (_gun)do{
	case "CUP_srifle_CZ550": {_unit addWeapon "CUP_srifle_CZ550"; _unit addMagazines ["CUP_5x_22_LR_17_HMR_M",5]};
	case "CUP_srifle_LeeEnfield": {_unit addWeapon "CUP_srifle_LeeEnfield"; _unit addMagazines ["CUP_10x_303_M",5]};
	case "CUP_srifle_M14": {_unit addWeapon "CUP_srifle_M14"; _unit addMagazines ["CUP_20Rnd_762x51_DMR",5]};
	case "CUP_srifle_SVD": {_unit addWeapon "CUP_srifle_SVD"; _unit addMagazines ["CUP_10Rnd_762x54_SVD_M",5], _unit addPrimaryWeaponItem "CUP_optic_PSO_1"};
	default {_unit addWeapon "CUP_arifle_AK74"; _unit addMagazines ["CUP_30Rnd_545x39_AK_M",5]};
};
_unit selectWeapon (primaryWeapon _unit);