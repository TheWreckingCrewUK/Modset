
class CfgFunctions 
{
	class TWC
	{
		class twc_flare_Functions
		{
			file = "\twc_units_modern\functions";
		};
	};
};


class cfgWeapons
{
//////////////////////////////  Modern  //////////////////////////////
	class UK3CB_BAF_L85A2_RIS;
	class UK3CB_BAF_L110A2RIS;
	class UK3CB_BAF_L129A1;
	class UK3CB_BAF_L128A1;
	class UK3CB_BAF_L85A2_UGL;
	class UK3CB_BAF_L115A3;
	class UK3CB_BAF_L85A2_RIS_Tan;
	

	
	class UK3CB_BAF_L85A2_RIS_ELCAN3D: UK3CB_BAF_L85A2_RIS
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_LLM_IR_Black";
			};
		};
	};
		class UK3CB_BAF_L85A2_RIS_ELCAN3D_TAN: UK3CB_BAF_L85A2_RIS_Tan
	{
		scope = 1;
		author="Hobbs";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="RKSL_optic_LDS";
			};
		};
	};
	
	class UK3CB_BAF_L110A2_ELCAN3D: UK3CB_BAF_L110A2RIS
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L110A2";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L110A2";
				item="UK3CB_BAF_LLM_IR_Black";
			};
		};
	};
	class UK3CB_BAF_L129A1_Grippod_TA648: UK3CB_BAF_L129A1
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_TA648_308";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_LLM_IR_Black";
			};
			class LinkedItemsBipod
			{
				slot="UK3CB_underbarrel_rifle_slot";
				item="UK3CB_underbarrel_acc_fgrip_bipod";
			};
		};
	};
	class UK3CB_BAF_L128A1_Eotech: UK3CB_BAF_L128A1
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L128A1";
				item="UK3CB_BAF_Eotech";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L128A1";
				item="UK3CB_BAF_LLM_IR_Black";
			};
		};
	};
	class UK3CB_BAF_L85A2_UGL_ELCAN3D: UK3CB_BAF_L85A2_UGL
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_LLM_IR_Black";
			};
		};
	};
//////////////////////////////  Others  //////////////////////////////	

	class twc_l129a1_spotter: UK3CB_BAF_L129A1
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_TA648_308";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
			class LinkedItemsBipod
			{
				slot="UK3CB_underbarrel_rifle_slot";
				item="UK3CB_underbarrel_acc_fgrip_bipod";
			};
		};
	};
	class twc_l115a3_wd: UK3CB_BAF_L115A3
	{
		scope = 1;
		author = "jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "asdg_OpticRail_UK3CB_BAF_L115";
				item = "RKSL_optic_PMII_525";
			};
		};
	};
	class rhs_weap_rsp30_green;
		class twc_L5A4_green: rhs_weap_rsp30_green
	{
		scope = 2;
		displayname = "L5A4 Parachuting Flare Green";
		descriptionShort = "Rocket Hand Fired Illuminating Para";
		magazines[] = {"twc_l5a4_g"};
	};
	
		class rhs_weap_rsp30_red;
		class twc_L5A4_red: rhs_weap_rsp30_red
	{
		scope = 2;
		displayname = "L5A4 Parachuting Flare Red";
		descriptionShort = "Rocket Hand Fired Illuminating Para";
		magazines[] = {"twc_l5a4_r"};
	

	};
	
			class rhs_weap_rsp30_white;
		class twc_L5A4_white: rhs_weap_rsp30_white
	{
		scope = 2;
		displayName = "L5A4 Parachuting Flare White";
		descriptionShort = "Rocket Hand Fired Illuminating Para";
		magazines[] = {"twc_l5a4_w"};
	};
	
	class rhs_weap_ak74m_Base_F;
	class rhs_weap_akm: rhs_weap_ak74m_Base_F
	{
		magazines[] = {"CUP_30Rnd_762x39_AK47_M", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_U"};
	};
	
	class rhs_weap_ak74m;
	class rhs_weap_svd: rhs_weap_ak74m
	{
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "CUP_10Rnd_762x54_SVD_M"};
	};
	/*
	class rhs_weapon_base;
	class rhs_weap_m4_Base: rhs_weapon_base
	{
		magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M200_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Yellow", "UK3CB_BAF_556_30Rnd", "UK3CB_BAF_556_30Rnd_T", "UK3CB_BAF_556_30Rnd_Blank"};
	};*/
	
	/* 3cb stuff isn't taking at the moment
	class UK3CB_BAF_WeaponsPrimaryMG_Base;
	class UK3CB_BAF_L7A2: UK3CB_BAF_WeaponsPrimaryMG_Base
	{
		accessories[] = {};
		magazines[] = {"rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51_m61_ap", "rhsusf_50Rnd_762x51_m62_tracer", "rhsusf_50Rnd_762x51_m80a1epr", "rhsusf_50Rnd_762x51_m82_blank", "rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51_m61_ap", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m80a1epr", "rhsusf_100Rnd_762x51_m82_blank", "rhsusf_50Rnd_762x51_m993", "rhsusf_100Rnd_762x51_m993", "UK3CB_BAF_762_200Rnd_T", "UK3CB_BAF_762_200Rnd", "UK3CB_BAF_762_200Rnd_Blank", "UK3CB_BAF_762_100Rnd_T", "UK3CB_BAF_762_100Rnd", "UK3CB_BAF_762_100Rnd_Blank"};
	};
	class UK3CB_BAF_WeaponsPrimary_Base;
	class UK3CB_BAF_L85A2: UK3CB_BAF_WeaponsPrimary_Base
	{
		magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M200_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Yellow", "UK3CB_BAF_556_30Rnd", "UK3CB_BAF_556_30Rnd_T", "UK3CB_BAF_556_30Rnd_Blank"};
	};	
	
	*/
	class rhs_weap_pkp;
	class rhs_weap_pkm: rhs_weap_pkp
	{
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_7N13", "rhs_100Rnd_762x54mmR_7N26", "rhs_100Rnd_762x54mmR_7BZ3", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"};
	};
	
};




class cfgmagazines{
		class UGL_FlareGreen_F;
		class twc_l5a4_g : UGL_FlareGreen_F
		{
			ammo = rhs_40mm_green;
			displayName="L5A4 Round (Green)";
		};	
		class UGL_Flarered_F;
		class twc_l5a4_r : UGL_Flarered_F
		{
			ammo = rhs_40mm_red;
			displayName="L5A4 Round (Red)";
		};	
		class UGL_Flarewhite_F;
		class twc_l5a4_w : UGL_Flarewhite_F
		{
			ammo = rhs_40mm_white;
			displayName="L5A4 Round (White)";
		};			
};	


class cfgammo
{
	class F_40mm_Red;
	class rhs_40mm_red : F_40mm_Red
	{
		lightColor[] = {0.75,0.5,0.5,0};
		brightness  = 75;
		intensity = 1000000;
		coefgravity = 0.15;
		timeToLive = 160;
	};
	
		class F_40mm_white;
	class rhs_40mm_white : F_40mm_white
	{
		lightColor[] = {0.75,0.75,0.75,0};
		brightness  = 75;
		intensity = 1000000;
		coefgravity = 0.15;
		timeToLive = 160;
	};
	
		class F_40mm_green;
	class rhs_40mm_green : F_40mm_green
	{
		lightColor[] = {0.5,0.75,0.5,0};
		brightness  = 75;
		intensity = 1000000;
		coefgravity = 0.15;
		timeToLive = 160;
	};
	
};