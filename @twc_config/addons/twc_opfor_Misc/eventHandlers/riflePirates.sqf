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

_gun = selectRandomWeighted ["CUP_arifle_AK47_Early",1,"CUP_arifle_AKM_Early",1,"CUP_arifle_AKMS_Early",1,"CUP_arifle_AKS",1,"CUP_arifle_TYPE_56_2_Early",1,"CUP_arifle_AK74_Early",1,"CUP_arifle_AKS74_Early",1,"CUP_arifle_FNFAL",1,"CUP_arifle_Sa58P",1,"CUP_arifle_Sa58V",1];

switch (_gun)do{
	case "CUP_arifle_AK47_Early": {_unit addWeapon "CUP_arifle_AK47_Early"; _unit addMagazines ["CUP_30Rnd_762x39_AK47_M",5]};
	case "CUP_arifle_AKM_Early": {_unit addWeapon "CUP_arifle_AKM_Early"; _unit addMagazines ["CUP_30Rnd_762x39_AK47_M",5]};
	case "CUP_arifle_AKMS_Early": {_unit addWeapon "CUP_arifle_AKMS_Early"; _unit addMagazines ["CUP_30Rnd_762x39_AK47_M",5]};
	case "CUP_arifle_AKS": {_unit addWeapon "CUP_arifle_AKS"; _unit addMagazines ["CUP_30Rnd_762x39_AK47_M",5]};
	case "CUP_arifle_TYPE_56_2_Early": {_unit addWeapon "CUP_arifle_TYPE_56_2_Early"; _unit addMagazines ["CUP_30Rnd_762x39_AK47_M",5]};
	case "CUP_arifle_AK74_Early": {_unit addWeapon "CUP_arifle_AK74_Early"; _unit addMagazines ["CUP_30Rnd_545x39_AK_M",5]};
	case "CUP_arifle_AKS74_Early": {_unit addWeapon "CUP_arifle_AKS74_Early"; _unit addMagazines ["CUP_30Rnd_545x39_AK_M",5]};
	case "CUP_arifle_FNFAL": {_unit addWeapon "CUP_arifle_FNFAL"; _unit addMagazines ["CUP_20Rnd_762x51_FNFAL_M",5]};
	case "CUP_arifle_Sa58P": {_unit addWeapon "CUP_arifle_Sa58P"; _unit addMagazines ["CUP_30Rnd_Sa58_M",5]};
	case "CUP_arifle_Sa58V": {_unit addWeapon "CUP_arifle_Sa58V"; _unit addMagazines ["CUP_30Rnd_Sa58_M",5]};	
	default {_unit addWeapon "CUP_arifle_AK74"; _unit addMagazines ["CUP_30Rnd_545x39_AK_M",5]};
};
_unit selectWeapon (primaryWeapon _unit);