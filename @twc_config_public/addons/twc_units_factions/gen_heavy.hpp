
	class twc_heavy_Men_Base: O_G_Survivor_F
	{
		author="Hobbs";
		scope=1;
		displayName="generic heavy Base";
		faction="twc_faction";
		editorSubcategory = "Men_twc_genheavy";
		vehicleClass="Men_twc_genheavy";
		nakedUniform="U_BasicBody";
		uniformClass="rhsgref_uniform_olive";
		
		linkedItems[]= {
			"rhsgref_alice_webbing"
		};
		
		respawnlinkedItems[]= {
			"rhsgref_alice_webbing"
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
		uniformClass="rhsgref_uniform_dpm_olive";

		weapons[]= {
			"Throw",
			"Put",
			"rhs_m4_acog2_usmc"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"rhs_m4_acog2_usmc"
		};
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag"
		};
		Respawnmagazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag"
		};

	};
	
	class twc_heavy_men_com: twc_heavy_men_Base {
		scope=2;
		displayName="Commander";
		uniformClass="rhsgref_uniform_tigerstripe";

		weapons[]= {
			"Throw",
			"Put",
			"rhs_weap_45th_ak74m_pkas"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"rhs_weap_45th_ak74m_pkas"
		};
		linkedItems[]= {
			"V_BandollierB_oli",
			"rhsgref_fieldcap_ttsko_mountain",
			"H_Bandanna_gry"
		};
		
		respawnlinkedItems[]= {
			"V_BandollierB_oli",
			"rhsgref_fieldcap_ttsko_mountain",
			"H_Bandanna_gry"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK"
		};
		Respawnmagazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK"
		};

	};
	
	class twc_heavy_men_ar: twc_heavy_men_Base {
		scope=2;
		displayName="Autorifleman";
		uniformClass="rhsgref_uniform_tigerstripe";
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
			"rhs_weap_hk416d10_acog"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"rhs_weap_hk416d10_acog"
		};
		linkedItems[]= {
			"CUP_V_O_Ins_Carrier_Rig_MG"
		};
		
		respawnlinkedItems[]= {
			"CUP_V_O_Ins_Carrier_Rig_MG"
		};
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag"
		};
		Respawnmagazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag"
		};

	};
	class twc_heavy_men_gren_m203: twc_heavy_men_Base {
		scope=2;
		displayName="Grenadier (M203)";

		weapons[]= {
			"Throw",
			"Put",
			"rhs_m4_m203s_acog_usmc"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"rhs_m4_m203s_acog_usmc"
		};
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		Respawnmagazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
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
		uniformClass="rhsgref_uniform_tigerstripe";

		weapons[]= {
			"Throw",
			"Put",
			"rhs_weap_ak74m_fullplum_gp25_folded"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"rhs_weap_ak74m_fullplum_gp25_folded"
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
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25"
		};
		Respawnmagazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25"
		};

	};
	
	class twc_heavy_men_rif_at: twc_heavy_men_Base {
		scope=2;
		displayName="Rifleman AT";
		uniformClass="rhsgref_uniform_dpm_olive";
		backpack="twc_Backpack_m3maaws";

		weapons[]= {
			"Throw",
			"Put",
			"rhs_weap_hk416d10_acog",
			"rhs_weap_maaws"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"rhs_weap_hk416d10_acog",
			"rhs_weap_maaws"
		};
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_maaws_HEAT",
			"rhs_mag_maaws_HEAT"
		};
		Respawnmagazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_maaws_HEAT",
			"rhs_mag_maaws_HEAT"
		};

	};
	
	class twc_heavy_men_mk: twc_heavy_men_Base {
		scope=2;
		displayName="Marksman";
		uniformClass="rhsgref_uniform_dpm_olive";

		weapons[]= {
			"Throw",
			"Put",
			"rhs_weap_sr25_leo"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"rhs_weap_sr25_leo"
		};
		magazines[]=
		{
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag"
		};
		Respawnmagazines[]=
		{
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag"
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
			"rhs_weap_m16a4_acog_usmc"
		};
		respawnweapons[]= {
			"Throw",
			"Put",
			"rhs_weap_m16a4_acog_usmc"
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
	
	
	
	