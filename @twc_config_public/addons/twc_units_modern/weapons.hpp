


class cfgWeapons
{
//////////////////////////////  Modern  //////////////////////////////
	class UK3CB_BAF_L85A2_RIS;
	class UK3CB_BAF_L110A2RIS;
	class UK3CB_BAF_L129A1;
	class UK3CB_BAF_L128A1;
	class UK3CB_BAF_L85A2_UGL;
	class UK3CB_BAF_L85A2_RIS_Tan;
	class arifle_Mk20_F;
	class Rifle_Base_F;
	class cannoncore;
	
	class gatling_30mm: CannonCore
	{
		class EventHandlers;
		class Mode_FullAuto;
		class manual;
	};
	class rhs_weap_M197: gatling_30mm
	{
		class manual:gatling_30mm
		{
			dispersion=0.012;
		};
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.6) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 14) - 7, (velocity _bullet select 1) + (random 14) - 7, 	(velocity _bullet select 2) + (random 10) - 5];};twc_gpmglastfired = time;";
		};
	};
	
	class rhs_weap_M230: rhs_weap_M197
	{
		class manual:manual
		{
			dispersion=0.012;
		};
	};
	
	class Rifle_Long_Base_F;
	class rhs_pkp_base: Rifle_Long_Base_F
	{
		twc_openbolt = 1;
		twc_openbolt_coef = 1.1;
	};
	
	class CUP_Vlmg_M240_M1Abrams_Coax;
	class CUP_M240_Coax_M1_Abrams_W: CUP_Vlmg_M240_M1Abrams_Coax
	{
		class manual;
	};
	class ukcw_l20a1: CUP_M240_Coax_M1_Abrams_W
	{
		class manual: manual
		{
			dispersion = 0.01;
		};
	};
	
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class Single;
		class FullAuto;
	};
	
	class rhs_weap_ak74m_Base_F: Rifle_Base_F
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};
	
	class rhs_weap_saw_base: Rifle_Base_F
	{
		twc_openbolt = 1;
	};
	
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		twc_openbolt = 1;
	};
		
	
	class rhs_weap_lmg_minimipara;
	class rhs_weap_lmg_minimi_railed: rhs_weap_lmg_minimipara
	{
		class FullAuto;
	};
	
	class rhs_weap_m249_pip_L: rhs_weap_lmg_minimi_railed
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		class FullAuto:FullAuto {
			dispersion = 0.003;
		};
	};
	
	class rhs_weap_M590_5RD: Rifle_Base_F
	{
		recoil = "twc_shotgun_1";
		recoilProne = "twc_rifle_762_prone";
	};
	class rhs_weap_M249_base;
	class rhs_weap_m240_base: rhs_weap_M249_base
	{
		recoil = "twc_mg_762";
		recoilProne = "twc_mg_prone";
	};
	
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		class Single:Single {
			dispersion = 0.001;
		};
		class FullAuto:FullAuto {
			dispersion = 0.001;
		};
	};

	
	class arifle_Mk20_plain_F: arifle_Mk20_F
	{
		class Single;
		class FullAuto;
	};
	
	class UK3CB_BAF_L85A2: arifle_Mk20_plain_F
	{
		class Single:Single {
			dispersion = 0.001;
		};
		class FullAuto:FullAuto {
			dispersion = 0.001;
		};
	};
	
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
				item="rhsusf_acc_premier";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
			class LinkedItemsBipod
			{
				slot="UK3CB_underbarrel_rifle_slot";
				item="UK3CB_underbarrel_acc_bipod";
			};
			class LinkedItemsMuzzle
			{
				slot="asdg_MuzzleSlot_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_Silencer_L115A3";
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
	
	
	class rhs_weap_ak74m_zenitco01;
	class rhs_weap_ak74m_zenitco01_b33: rhs_weap_ak74m_zenitco01
	{
		
		magazines[] = {"twc_rhsgref_30rnd_556x45_m21", "twc_rhsgref_30rnd_556x45_m21_t"};
		displayName = "wz.2004 Beryl";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		magazineWell[] = {};
	};
	
	
	class twc_ak74_pol_base: rhs_weap_ak74m_zenitco01_b33
	{
		displayName = "wz.2004 Beryl";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"rhsusf_acc_eotech_552", "rhs_acc_2dpZenit", "rhs_acc_dtk1"};
		magazineWell[] = {};
		};
	

	class twc_ak74_pol: twc_ak74_pol_base
	{
		
		displayName = "wz.2004 Beryl";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"rhsusf_acc_eotech_552", "rhs_acc_2dpZenit", "rhs_acc_dtk1", "rhsusf_acc_grip3"};
		magazineWell[] = {};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_eotech_552";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhs_acc_2dpZenit";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="rhs_acc_dtk1";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="GripodSlot";
				item="rhsusf_acc_grip3";
			};
		};
	};
	
	class rhs_weap_ak74m_2mag_npz;
	class twc_ak74_pol_2_base: rhs_weap_ak74m_2mag_npz
	{
		
		magazines[] = {"twc_rhsgref_30rnd_556x45_m21", "twc_rhsgref_30rnd_556x45_m21_t"};
		magazineWell[] = {};
	};
	

	class twc_ak74_pol_2: twc_ak74_pol_2_base
	{
		
		displayName = "wz.2004 Beryl";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"rhsusf_acc_eotech_552", "rhs_acc_2dpZenit", "rhs_acc_dtk1"};
		magazineWell[] = {};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_eotech_552";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhs_acc_2dpZenit";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="GripodSlot";
				item="rhs_acc_dtk1";
			};
		};
	};
	
	
	class rhs_weap_ak74mr_gp25;
	class twc_ak74_gp25_pol_base: rhs_weap_ak74mr_gp25
	{
		
		magazines[] = {"twc_rhsgref_30rnd_556x45_m21", "twc_rhsgref_30rnd_556x45_m21_t"};
		magazineWell[] = {};
	};
	
	

	class twc_ak74_gp25_pol: twc_ak74_gp25_pol_base
	{
		

		displayName = "wz.2004 Beryl (wz. 74)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"rhsusf_acc_eotech_552", "rhs_acc_2dpZenit", "rhs_acc_dtk1"};
		magazineWell[] = {};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_eotech_552";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhs_acc_2dpZenit";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="rhs_acc_dtk1";
			};
		};
	};
	
	class rhs_weap_rpg7;
	class twc_rpg_pol: rhs_weap_rpg7
	{
		
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_acc_pgo7v3";
			};
		};
	};
	
	
	class rhs_weap_svdp_npz;
	class twc_pol_svd: rhs_weap_svdp_npz
	{
		
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_M8541_low";
			};
		};
	};
	
	class rhs_weap_m4a1;
	class twc_m4_acog_grip_laser: rhs_weap_m4a1
	{
		
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_ACOG";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15_bk";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_grip1";
			};
		};
	};
	
	class rhs_weap_m4_m203;
	class twc_m4_m203_acog_light: rhs_weap_m4_m203
	{
		
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_ACOG";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhs_acc_2dpZenit_ris";
			};
		};
	};
	
	class rhs_weap_m24sws_blk;
	class rhs_weap_m24sws_blk_ana: rhs_weap_m24sws_blk
	{
		
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_M8541";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_harris_swivel";
			};
		};
	};
	
	class rhs_weap_M107;
	class twc_rhs_weap_M107: rhs_weap_M107
	{
		accessories[] = {"rhsusf_acc_premier"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_premier";
			};
		};
	};
	
	/*
	
	class mortar_82mm: CannonCore
	{
		class eventhandlers;
	};
	
	class rhs_weap_2b14: mortar_82mm
	{
		
		class EventHandlers: EventHandlers {
			fired = "_gunner = _this select 7; _gunner setvariable ['twc_mortar_walking', 1];[_this select 6, _this select 7] call  twc_fnc_mortarwalk_fnc_mortarwalk;";
		};
	};
	
	class mortar_155mm_AMOS: CannonCore
	{
		class eventhandlers;
	};
	
	class RHS_Weap_d30: mortar_155mm_AMOS
	{
		
		class EventHandlers: EventHandlers {
			fired = "_gunner = _this select 7; _gunner setvariable ['twc_mortar_walking', 1];[_this select 6, _this select 7] call  twc_fnc_mortarwalk_fnc_mortarwalk;";
		};
	};
	*/
	/////////////////////////
	//adding scope turrets
	
	class ItemCore;
	class RKSL_optic_LDS: ItemCore {
	
	
		ACE_ScopeAdjust_Horizontal[] = {-4,4};
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		ACE_ScopeAdjust_Vertical[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeHeightAboveRail = 3.9386;
		
	};
	
	
	
	class UK3CB_BAF_SUSAT: ItemCore {
	
	
		ACE_ScopeAdjust_Horizontal[] = {-4,4};
		ACE_ScopeAdjust_HorizontalIncrement = 0.5;
		ACE_ScopeAdjust_Vertical[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.5;
		ACE_ScopeHeightAboveRail = 4.21386;
		
	};
	
	
	
	class UK3CB_BAF_TA648: ItemCore {
	
	
		ACE_ScopeAdjust_Horizontal[] = {-4,4};
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		ACE_ScopeAdjust_Vertical[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeHeightAboveRail = 4.21386;
		
	};
	
	
	
	class UK3CB_BAF_Kite: ItemCore {
	
	
		ACE_ScopeAdjust_Horizontal[] = {-4,4};
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		ACE_ScopeAdjust_Vertical[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeHeightAboveRail = 4.21386;
		
	};
	
	
	class rhs_acc_sniper_base;
	class rhs_acc_pso1m2: rhs_acc_sniper_base {
	
	
		ACE_ScopeAdjust_Horizontal[] = {-4,4};
		ACE_ScopeAdjust_HorizontalIncrement = 0.5;
		ACE_ScopeAdjust_Vertical[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.5;
		ACE_ScopeHeightAboveRail = 4.41386;
		
	};
	
	
	class rhs_weap_pkp;
	class rhs_weap_pkm: rhs_weap_pkp
	{
		recoil = "twc_mg_762";
		recoilProne = "twc_mg_prone";
		accessories[] = {};
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
		
		class rhs_10Rnd_762x54mmR_7N1;
		class twc_10Rnd_762x54mmR_7N1_P : rhs_10Rnd_762x54mmR_7N1
		{
			tracersEvery = 1;
			displaynameshort = "7N1-P";
			descriptionShort = "Caliber: 7.62x54mmR Tracer<br />Rounds: 10<br />Used in: SVD";
			displayName = "7N1-P 10Rnd SVD Mag";
		};	


		class CA_Magazine;
		class 10Rnd_RHS_50BMG_Box: CA_Magazine {
			mass = 48;
		};
		
		class rhs_30Rnd_545x39_7N10_AK;
		class twc_rhsgref_30rnd_556x45_m21: rhs_30Rnd_545x39_7N10_AK {
			descriptionshort = "Caliber: 5.56x45mm<br />Rounds: 30";
			displayName = "5.56mm 30rnd Mag";
		};
		
		class twc_rhsgref_30rnd_556x45_m21_t: twc_rhsgref_30rnd_556x45_m21 {
			descriptionshort = "Caliber: 5.56x45mm Tracer<br />Rounds: 30";
			displayName = "5.56mm 30rnd Tracer Mag";
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