
	class Modern_pol_Base: B_Soldier_base_F
	{
		scope=2;
		displayName="Rifleman";
		faction="pol_units";
		editorSubcategory = "Men_twc_woodland";
		vehicleClass="Men_twc_woodland";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="CUP_U_B_CDF_FST_1";
		twc_radioType = "ACRE_PRC148";
		backpack="pol_backpack_rif";
		twc_radioChannel = 3;
		linkedItems[]=
		{
			"CUP_V_B_LBT_LBV_OD",
			"CUP_H_CDF_H_PASGT_FST",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_LBT_LBV_OD",
			"CUP_H_CDF_H_PASGT_FST",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"twc_ak74_pol"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"twc_ak74_pol"
		};
		Items[]=
		{
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			
			"ACE_EarPlugs",
			"ACRE_PRC148",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_MapTools"
		};
		respawnitems[]=
		{
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			
			"ACE_EarPlugs",
			"ACRE_PRC148",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};

	class Modern_pol_Base_d: Modern_pol_Base
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_B_CDF_DST_2";
		linkedItems[]=
		{
			"CUP_V_B_LBT_LBV_OD",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_LBT_LBV_OD",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class Modern_pol_rifleman_at: Modern_pol_Base
	{
		scope=2;
		displayName="Rifleman (AT)";
		backpack="pol_backpack_rpg";
		weapons[]=
		{
			"Throw",
			"Put",
			"CUP_launch_RPG7V_PGO7V",
			"twc_ak74_pol"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"CUP_launch_RPG7V_PGO7V",
			"twc_ak74_pol"
		};
	};
	
	class Modern_pol_rifleman_at_d: Modern_pol_rifleman_at
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_B_CDF_DST_2";
		linkedItems[]=
		{
			"CUP_V_B_LBT_LBV_OD",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_LBT_LBV_OD",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class Modern_pol_grenadier: Modern_pol_Base
	{
		scope=2;
		displayName="Grenadier";
		backpack="pol_backpack_rif";
		weapons[]=
		{
			"Throw",
			"Put",
			"twc_ak74_gp25_pol"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"twc_ak74_gp25_pol"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_30Rnd_556x45_AK",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
	};
	
	class Modern_pol_grenadier_d: Modern_pol_grenadier
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_B_CDF_DST_2";
		linkedItems[]=
		{
			"CUP_V_B_LBT_LBV_OD",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_LBT_LBV_OD",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class Modern_pol_mg: Modern_pol_Base
	{
		scope=2;
		displayName="Machinegunner";
		backpack="pol_backpack_mg";
		weapons[]=
		{
			"Throw",
			"Put",
			"CUP_lmg_PKM"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"CUP_lmg_PKM"
		};
		magazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};
	
	class Modern_pol_mg_d: Modern_pol_mg
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_B_CDF_DST_2";
		linkedItems[]=
		{
			"CUP_V_B_LBT_LBV_OD",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_LBT_LBV_OD",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class Modern_pol_commander: Modern_pol_Base
	{
		scope=2;
		displayName="Section Commander @Polish Land Forces";
		backpack="pol_backpack_leader";
		linkedItems[]=
		{
			"CUP_V_B_Ciras_Olive",
			"CUP_H_CDF_H_PASGT_FST",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Ciras_Olive",
			"CUP_H_CDF_H_PASGT_FST",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"twc_ak74_pol_2"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"twc_ak74_pol_2"
		};
	};
	
	class Modern_pol_commander_d: Modern_pol_commander
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_B_CDF_DST_2";
		linkedItems[]=
		{
			"CUP_V_B_Ciras_Olive",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Ciras_Olive",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
	};
	
	
	class Modern_pol_subcommander: Modern_pol_commander
	{
		scope=2;
		displayName="2ic";
		backpack="pol_backpack_2ic";
		linkedItems[]=
		{
			"CUP_V_B_LBT_LBV_GRN",
			"CUP_H_CDF_H_PASGT_FST",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_LBT_LBV_GRN",
			"CUP_H_CDF_H_PASGT_FST",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class Modern_pol_subcommander_d: Modern_pol_subcommander
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_B_CDF_DST_2";
		linkedItems[]=
		{
			"CUP_V_B_LBT_LBV_GRN",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_LBT_LBV_GRN",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class Modern_pol_medic: Modern_pol_base
	{
		scope=2;
		displayName="Medic";
		attendant = 1;
		backpack="pol_backpack_medic";
	};
	
	
	class Modern_pol_medic_d: Modern_pol_medic
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_B_CDF_DST_2";
		linkedItems[]=
		{
			"CUP_V_B_LBT_LBV_OD",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_LBT_LBV_OD",
			"CUP_H_PASGTv2_OD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	