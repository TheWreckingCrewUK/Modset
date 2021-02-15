
	class twc_heavy_Men_Base: O_G_Survivor_F
	{
		author="Hobbs";
		scope=1;
		displayName="generic heavy Base";
		faction="twc_faction";
		editorSubcategory = "Men_twc_genheavy";
		vehicleClass="Men_twc_genheavy";
		nakedUniform="U_BasicBody";
		uniformClass="CUP_U_B_BDUv2_roll_gloves_OD";
		
		linkedItems[]= {
			"CUP_V_B_ALICE"
		};
		
		respawnlinkedItems[]= {
			"CUP_V_B_ALICE"
		};
		
Items[]=
{
"ACE_fieldDressing",
"ACE_fieldDressing",
"ACE_packingBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_quikclot",
"ACE_quikclot",
"ACE_morphine",
"ACE_morphine",
"ACE_epinephrine",
"ACE_tourniquet"
};
respawnitems[]=
{
"ACE_fieldDressing",
"ACE_fieldDressing",
"ACE_packingBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_quikclot",
"ACE_quikclot",
"ACE_morphine",
"ACE_morphine",
"ACE_epinephrine",
"ACE_tourniquet"
};
	};

	class twc_heavy_men_rif_m4: twc_heavy_men_Base {
		scope=2;
		displayName="Rifleman M4";
		uniformClass="CUP_U_B_BDUv2_roll_gloves_dirty_DPM_OD";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_M4A1_ACOG_Laser"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_M4A1_ACOG_Laser"
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
			"CUP_30Rnd_556x45_Stanag"
		};

	};
	
	class twc_heavy_men_com: twc_heavy_men_Base {
		scope=2;
		displayName="Commander";
		uniformClass="CUP_U_I_GUE_Anorak_02";

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
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M"
		};
		Respawnmagazines[]=
		{
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M"
		};

	};
	
	class twc_heavy_men_ar: twc_heavy_men_Base {
		scope=2;
		displayName="Autorifleman";
		uniformClass="CUP_U_I_GUE_Anorak_02";
		backpack="twc_Backpack_m249";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_lmg_M249_E2"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_lmg_M249_E2"
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
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249"
		};
		Respawnmagazines[]=
		{
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249"
		};

	};
	
	class twc_heavy_men_mg: twc_heavy_men_Base {
		scope=2;
		displayName="Machinegunner PKP";
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
	
	class twc_heavy_men_mg_as: twc_heavy_men_Base {
		scope=2;
		displayName="Machinegunner Assistant";
		backpack="Afr_Backpack_MG";

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
		linkedItems[]= {
			"CUP_V_O_Ins_Carrier_Rig_MG"
		};
		
		respawnlinkedItems[]= {
			"CUP_V_O_Ins_Carrier_Rig_MG"
		};
		magazines[]=
		{
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
			"CUP_30Rnd_556x45_Stanag"
		};

	};
	class twc_heavy_men_gren_m203: twc_heavy_men_Base {
		scope=2;
		displayName="Grenadier (M203)";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_M4A1_GL_carryhandle"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_M4A1_GL_carryhandle"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		Respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};

	};
	
	class twc_heavy_men_gren_gp25: twc_heavy_men_Base {
		scope=2;
		displayName="Grenadier (GP-25)";
		uniformClass="CUP_U_I_GUE_Anorak_02";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_AK74M_GL"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_AK74M_GL"
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
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M"
		};
		Respawnmagazines[]=
		{
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M"
		};

	};
	
	class twc_heavy_men_rif_at: twc_heavy_men_Base {
		scope=2;
		displayName="Rifleman AT";
		uniformClass="CUP_U_B_BDUv2_roll_gloves_dirty_DPM_OD";
		backpack="twc_Backpack_m3maaws";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_HK416_CQB_Black",
			"CUP_launch_MAAWS"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_arifle_HK416_CQB_Black",
			"CUP_launch_MAAWS"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_MAAWS_HEAT_M",
			"CUP_MAAWS_HEAT_M"
		};
		Respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_MAAWS_HEAT_M",
			"CUP_MAAWS_HEAT_M"
		};

	};
	
	class twc_heavy_men_mk: twc_heavy_men_Base {
		scope=2;
		displayName="Marksman";
		uniformClass="CUP_U_B_BDUv2_roll_gloves_dirty_DPM_OD";

		weapons[]= {
			"Throw",
			"Put",
			"CUP_srifle_M14_DMR_LeupoldMk4"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"CUP_srifle_M14_DMR_LeupoldMk4"
		};
		magazines[]=
		{
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR"
		};
		Respawnmagazines[]=
		{
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_762x51_DMR"
		};

	};
	
	class twc_heavy_men_rif_ak74: twc_heavy_men_Base {
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
	
	class twc_heavy_men_rif_m16: twc_heavy_men_Base {
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
	
	
	
	