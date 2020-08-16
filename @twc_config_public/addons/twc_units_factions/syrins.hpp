	
	
	class syr_twc_ins_Men_rif1: O_G_Survivor_F
	{
		author="Hobbs";
		scope=2;
		displayName="Rifleman (AK47)";
		faction="TWC_Syr_Ins";
		editorSubcategory = "Men_tak_twc_ins";
		vehicleClass="Men_tak_twc_ins";
		nakedUniform="U_BasicBody";
		uniformClass="CUP_O_TKI_Khet_Partug_04";
		identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
		

		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_AK47"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_AK47"
		};
		linkedItems[]= {
			"twc_lightcarrier_oli",
			"CUP_H_TK_Lungee"
		};
		
		respawnlinkedItems[]= {
			"twc_lightcarrier_oli",
			"CUP_H_TK_Lungee"
		};
		magazines[]=
		{
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M"
		};
		Respawnmagazines[]=
		{
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M"
		};
	};	
	
	class syr_twc_ins_Men_rif2: syr_twc_ins_Men_rif1
	{
		displayName="Rifleman (AKM)";
		uniformClass="CUP_O_TKI_Khet_Partug_04";
		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_AKM"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_AKM"
		};
		linkedItems[]= {
			"twc_lightcarrier_tan"
		};
		
		respawnlinkedItems[]= {
			"twc_lightcarrier_tan"
		};
	};
	
	class syr_twc_ins_Men_rif3: syr_twc_ins_Men_rif1
	{
		displayName="Rifleman (M16)";
		uniformClass="rhsgref_uniform_woodland_olive";
		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_M16A2"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_M16A2"
		};
		linkedItems[]= {
			"CUP_V_OI_TKI_Jacket4_01"
		};
		
		respawnlinkedItems[]= {
			"CUP_V_OI_TKI_Jacket4_01"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag"
		};
		Respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag"
		};
	};
	
	class syr_twc_ins_Men_gren1: syr_twc_ins_Men_rif1
	{
		displayName="Grenadier 1";
		uniformClass="CUP_O_TKI_Khet_Partug_06";
		backpack="twc_Backpack_civ_VOG25";
		weapons[]= {
			"Throw",
			"Put",
			"rhs_weap_akmn_gp25"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"rhs_weap_akmn_gp25"
		};
		linkedItems[]= {
			"twc_lightcarrier_oli"
		};
		
		respawnlinkedItems[]= {
			"twc_lightcarrier_oli"
		};
		magazines[]=
		{
			"rhs_VOG25",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M"
		};
		Respawnmagazines[]=
		{
			"rhs_VOG25",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M"
		};
	};
	class syr_twc_ins_Men_gren2: syr_twc_ins_Men_gren1
	{
		displayName="Grenadier 2";
		uniformClass="U_BG_Guerilla2_1";
		backpack="twc_Backpack_spc_VOG25";
		linkedItems[]= {
			"CUP_V_B_Eagle_SPC_Rifleman"
		};
		
		respawnlinkedItems[]= {
			"CUP_V_B_Eagle_SPC_Rifleman"
		};
	};
	
	class syr_twc_ins_Men_rpgL: syr_twc_ins_Men_rif1
	{
		displayName="RPG Gunner Light";
		uniformClass="rhsgref_uniform_dpm_olive";
		backpack="Backpack_AT_og7_olive";
		weapons[]= {
			"Throw",
			"Put",
			"CUP_launch_RPG7V",
			"rhs_weap_type94_new"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_launch_RPG7V",
			"rhs_weap_type94_new"
		};
		linkedItems[]= {
			"H_Shemag_olive",
			"twc_V_HarnessO_dpmt"
		};
		
		respawnlinkedItems[]= {
			"H_Shemag_olive",
			"twc_V_HarnessO_dpmt"
		};
		magazines[]=
		{
			"rhs_mag_6x8mm_mhp",
			"rhs_mag_6x8mm_mhp",
			"rhs_mag_6x8mm_mhp",
			"rhs_mag_6x8mm_mhp",
			"rhs_mag_6x8mm_mhp",
			"rhs_mag_6x8mm_mhp",
			"rhs_mag_6x8mm_mhp",
			"CUP_OG7_M",
			"CUP_OG7_M",
			"CUP_OG7_M"
		};
		Respawnmagazines[]=
		{
			"rhs_mag_6x8mm_mhp",
			"rhs_mag_6x8mm_mhp",
			"rhs_mag_6x8mm_mhp",
			"rhs_mag_6x8mm_mhp",
			"rhs_mag_6x8mm_mhp",
			"rhs_mag_6x8mm_mhp",
			"rhs_mag_6x8mm_mhp",
			"CUP_OG7_M",
			"CUP_OG7_M",
			"CUP_OG7_M"
		};
	};
	
	class syr_twc_ins_Men_rpgH: syr_twc_ins_Men_rpgL
	{
		displayName="RPG Gunner Heavy";
		uniformClass="UK3CB_BAF_U_JumperUniform_DPMT";
		backpack="Backpack_AT_pg7_spet";
		weapons[]= {
			"Throw",
			"Put",
			"CUP_launch_RPG7V",
			"CUP_arifle_AK47"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_launch_RPG7V",
			"CUP_arifle_AK47"
		};
		linkedItems[]= {
			"CUP_V_OI_TKI_Jacket4_02"
		};
		
		respawnlinkedItems[]= {
			"CUP_V_OI_TKI_Jacket4_02"
		};
		magazines[]=
		{
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_PG7V_M",
			"CUP_PG7V_M"
		};
		Respawnmagazines[]=
		{
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_PG7V_M",
			"CUP_PG7V_M"
		};
	};
	
	class syr_twc_ins_Men_marksman: syr_twc_ins_Men_rif1
	{
		displayName="Marksman";
		uniformClass="rhsgref_uniform_woodland_olive";
		weapons[]= {
			"Throw",
			"Put",
			"rhs_weap_svds_pso1"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"rhs_weap_svds_pso1"
		};
		linkedItems[]= {
			"CUP_H_TKI_Lungee_01",
			"twc_V_HarnessO_dpmt"
		};
		
		respawnlinkedItems[]= {
			"CUP_H_TKI_Lungee_01",
			"twc_V_HarnessO_dpmt"
		};
		magazines[]=
		{
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14"
		};
		Respawnmagazines[]=
		{
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14"
		};
	};
	
	class syr_twc_ins_Men_mg1: syr_twc_ins_Men_rif1
	{
		displayName="Machinegunner (PKM)";
		uniformClass="rhsgref_uniform_altis_lizard_olive";
		backpack="twc_Backpack_MG_olive";
		weapons[]= {
			"Throw",
			"Put",
			"CUP_lmg_PKM"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_lmg_PKM"
		};
		linkedItems[]= {
			"H_Shemag_olive",
			"twc_V_HarnessO_dpmt"
		};
		
		respawnlinkedItems[]= {
			"H_Shemag_olive",
			"twc_V_HarnessO_dpmt"
		};
		magazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
		};
		Respawnmagazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
		};
	};
	
	class syr_twc_ins_Men_mg2: syr_twc_ins_Men_mg1
	{
		displayName="Machinegunner (PKP)";
		uniformClass="UK3CB_BAF_U_Smock_DPMW_OLI";
		backpack="twc_Backpack_MG_olive";
		weapons[]= {
			"Throw",
			"Put",
			"CUP_lmg_Pecheneg"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_lmg_Pecheneg"
		};
		linkedItems[]= {
			"H_Shemag_olive",
			"twc_rhs_6sh92_radio_oli"
		};
		
		respawnlinkedItems[]= {
			"H_Shemag_olive",
			"twc_rhs_6sh92_radio_oli"
		};
	};
	
	