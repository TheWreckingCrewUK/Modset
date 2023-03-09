
	class twc_farc_Men_Base: O_G_Survivor_F
	{
		author="Hobbs";
		scope=1;
		displayName="farc rebel Base";
		faction="twc_faction";
		editorSubcategory = "Men_twc_farc";
		vehicleClass="Men_twc_farc";
		nakedUniform="U_BasicBody";
		uniformClass="CUP_U_B_BDUv2_roll_gloves_OD";
		identityTypes[]=
		{
			"LanguagePER_F",
			"Head_African",
			"G_GUERIL_default"
		};
		
		linkedItems[]= {
			"CUP_V_B_ALICE"
		};
		
		respawnlinkedItems[]= {
			"CUP_V_B_ALICE"
		};
		
	};

	class twc_farc_men_rif_at: twc_farc_men_Base {
		scope=2;
		displayName="Rifleman AT";
		uniformClass="CUP_U_B_BDUv2_roll_gloves_dirty_DPM_OD";
		backpack="greek_Backpack_AT";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_AKM",
		"CUP_launch_RPG7V"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_AKM",
		"CUP_launch_RPG7V"
		};
		magazines[]=
		{
		"CUP_OG7_M",
		"CUP_OG7_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M"
		};
		Respawnmagazines[]=
		{
		"CUP_OG7_M",
		"CUP_OG7_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M"
		};

	};

	class twc_farc_men_rif_aa: twc_farc_men_Base {
		scope=2;
		displayName="Rifleman AA";
		uniformClass="CUP_U_B_BDUv2_roll_gloves_dirty_DPM_OD";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_AKS",
		"CUP_launch_9K32Strela"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_AKS",
		"CUP_launch_9K32Strela"
		};
		magazines[]=
		{
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
			"CUP_30Rnd_762x39_AK47_M"
		};

	};
	
	class twc_farc_men_off: twc_farc_men_Base {
		scope=2;
		displayName="Officer";
		uniformClass="CUP_U_I_GUE_Anorak_02";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_M4A3_camo"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_M4A3_camo"
		};
		linkedItems[]= {
			"V_BandollierB_oli",
			"CUP_H_PMC_Cap_Grey",
			"H_Bandanna_gry"
		};
		
		respawnlinkedItems[]= {
			"V_BandollierB_oli",
			"CUP_H_PMC_Cap_Grey",
			"H_Bandanna_gry"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag"
		};
		Respawnmagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag"
		};

	};
	
	class twc_farc_men_mg_m60: twc_farc_men_Base {
		scope=2;
		displayName="Machinegunner M60";
		uniformClass="CUP_U_I_GUE_Anorak_02";
		backpack="twc_Backpack_m60";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_lmg_M60E4"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_lmg_M60E4"
		};
		linkedItems[]= {
			"CUP_V_O_Ins_Carrier_Rig_MG",
			"G_Bandanna_oli"
		};
		
		respawnlinkedItems[]= {
			"CUP_V_O_Ins_Carrier_Rig_MG",
			"G_Bandanna_oli"
		};
		magazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"
		};
		Respawnmagazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"
		};

	};
	
	class twc_farc_men_mg_pkp: twc_farc_men_Base {
		scope=2;
		displayName="Machinegunner PKP";
		uniformClass="CUP_U_O_SLA_MixedCamo";
		backpack="Afr_Backpack_MG";

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
			"CUP_V_O_Ins_Carrier_Rig_MG"
		};
		
		respawnlinkedItems[]= {
			"CUP_V_O_Ins_Carrier_Rig_MG"
		};
		magazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
		};
		Respawnmagazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
		};

	};
	
	class twc_farc_men_mg_as: twc_farc_men_Base {
		scope=2;
		displayName="Machinegunner Assistant";
		backpack="Afr_Backpack_MG";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_M4A1"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_M4A1"
		};
		linkedItems[]= {
			"CUP_V_O_Ins_Carrier_Rig_MG"
		};
		
		respawnlinkedItems[]= {
			"CUP_V_O_Ins_Carrier_Rig_MG"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag"
		};
		Respawnmagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag"
		};

	};
	class twc_farc_men_rif_akm: twc_farc_men_Base {
		scope=2;
		displayName="Rifleman AKM";

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
		magazines[]=
		{
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
			"CUP_30Rnd_762x39_AK47_M"
		};

	};
	
	class twc_farc_men_rif_m21: twc_farc_men_Base {
		scope=2;
		displayName="Rifleman M21";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_Galil_SAR_black"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_Galil_SAR_black"
		};
		linkedItems[]= {
			"CUP_V_O_Ins_Carrier_Rig_Com",
			"H_Shemag_olive"
		};
		
		respawnlinkedItems[]= {
			"CUP_V_O_Ins_Carrier_Rig_Com",
			"H_Shemag_olive"
		};
		magazines[]=
		{
			"CUP_35Rnd_556x45_Galil_Mag",
			"CUP_35Rnd_556x45_Galil_Mag",
			"CUP_35Rnd_556x45_Galil_Mag",
			"CUP_35Rnd_556x45_Galil_Mag",
			"CUP_35Rnd_556x45_Galil_Mag",
			"CUP_35Rnd_556x45_Galil_Mag"
		};
		Respawnmagazines[]=
		{
			"CUP_35Rnd_556x45_Galil_Mag",
			"CUP_35Rnd_556x45_Galil_Mag",
			"CUP_35Rnd_556x45_Galil_Mag",
			"CUP_35Rnd_556x45_Galil_Mag",
			"CUP_35Rnd_556x45_Galil_Mag",
			"CUP_35Rnd_556x45_Galil_Mag"
		};

	};
	
	class twc_farc_men_rif_hk416: twc_farc_men_Base {
		scope=2;
		displayName="Rifleman HK416";
		uniformClass="CUP_U_B_BDUv2_roll_gloves_dirty_DPM_OD";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_HK416_CQB_Black"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_HK416_CQB_Black"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag"
		};
		Respawnmagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag"
		};

	};
	
	class twc_farc_men_rif_ak104: twc_farc_men_Base {
		scope=2;
		displayName="Rifleman AK-104";
		uniformClass="CUP_U_B_BDUv2_roll_gloves_dirty_DPM_OD";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_AK104"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_AK104"
		};
		magazines[]=
		{
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
			"CUP_30Rnd_762x39_AK47_M"
		};

	};
	
	class twc_farc_men_rif_ak74: twc_farc_men_Base {
		scope=2;
		displayName="Rifleman AK-74";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_AK74M"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_AK74M"
		};
		magazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M"
		};
		Respawnmagazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M"
		};

	};
	
	class twc_farc_men_rif_m16: twc_farc_men_Base {
		scope=2;
		displayName="Rifleman M16";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_M16A4_ACOG_Laser"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_M16A4_ACOG_Laser"
		};
		magazines[]=
		{
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
			"CUP_30Rnd_556x45_Stanag"
		};

	};
	
	class twc_farc_men_rif_m4: twc_farc_men_Base {
		scope=2;
		displayName="Rifleman M4";

		linkedItems[]= {
			"CUP_V_RUS_Smersh_2"
		};
		
		respawnlinkedItems[]= {
			"CUP_V_RUS_Smersh_2"
		};
		
		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_M4A1"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_M4A1"
		};
		magazines[]=
		{
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
			"CUP_30Rnd_556x45_Stanag"
		};

	};
	
	