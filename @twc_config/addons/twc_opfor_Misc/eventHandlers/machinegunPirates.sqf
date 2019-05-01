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

_gun = selectRandomWeighted ["CUP_lmg_M60E4_norail",1,"CUP_lmg_FNMAG",1,"CUP_lmg_PKM",1,"TWC_RPD",1,"CUP_arifle_RPK74",1,"CUP_arifle_RPK74_45",1,"CUP_lmg_UK59",1];

switch (_gun)do{
	case "CUP_lmg_M60E4_norail": {_unit addMagazine "CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M"; _unit addWeapon "CUP_lmg_M60E4_norail"; _unit addMagazines ["CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",2]};
	case "CUP_lmg_FNMAG": {_unit addMagazine "150Rnd_762x51_Box_Tracer"; _unit addWeapon "CUP_lmg_FNMAG"; _unit addMagazine "150Rnd_762x51_Box_Tracer"]};
	case "CUP_lmg_PKM": {_unit addMagazine "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"; _unit addWeapon "CUP_lmg_PKM"; _unit addMagazines ["CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M",3]};
	case "TWC_RPD": {_unit addMagazine "twc_100Rnd_762x39_RPD"; _unit addWeapon "TWC_RPD"; _unit addMagazines ["twc_100Rnd_762x39_RPD",5]};
	case "CUP_arifle_RPK74": {_unit addMagazine "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"; _unit addWeapon "CUP_arifle_RPK74"; _unit addMagazines ["CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",4]};
	case "CUP_arifle_RPK74_45": {_unit addMagazine "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"; _unit addWeapon "CUP_arifle_RPK74_45"; _unit addMagazines ["CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",5]};
	case "CUP_lmg_UK59": {_unit addMagazine "CUP_50Rnd_UK59_762x54R_Tracer"; _unit addWeapon "CUP_lmg_UK59"; _unit addMagazines ["CUP_50Rnd_UK59_762x54R_Tracer",5]};	
	default {_unit addWeapon "CUP_arifle_AK74"; _unit addMagazines ["CUP_30Rnd_545x39_AK_M",5]};
};
_unit selectWeapon (primaryWeapon _unit);