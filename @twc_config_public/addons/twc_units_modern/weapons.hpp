


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
	
	class CUP_H_US_H_PASGT_desert;
	class twc_CUP_H_US_H_PASGT_trp: CUP_H_US_H_PASGT_desert
	{
		displayName = "PASGT (Trepentarn)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa"};
	};
	class twc_CUP_H_US_H_PASGT_flk: CUP_H_US_H_PASGT_desert
	{
		displayName = "PASGT (Flecktarn)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa"};
	};
	
	class rhsusf_spcs_ocp_teamleader;
	class twc_mtp_spcs_SL: rhsusf_spcs_ocp_teamleader
	{
		displayName = "SPCS MTP (SL)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	class twc_trp_spcs_SL: rhsusf_spcs_ocp_teamleader
	{
		displayName = "SPCS Trepentarn (SL)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	class twc_flk_spcs_SL: rhsusf_spcs_ocp_teamleader
	{
		displayName = "SPCS Flecktarn (SL)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	
	class rhsusf_spcs_ocp_sniper;
	class twc_mtp_spcs_Marksman: rhsusf_spcs_ocp_sniper
	{
		displayName = "SPCS MTP (Marksman)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	
	class rhsusf_spcs_ocp_medic;
	class twc_mtp_spcs_medic: rhsusf_spcs_ocp_medic
	{
		displayName = "SPCS MTP (Medic)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	class rhsusf_spcs_ocp;
	class rhsusf_spcs_ocp_saw : rhsusf_spcs_ocp
	{
		class iteminfo;
	};
	class twc_mtp_spcs_mg: rhsusf_spcs_ocp_saw
	{
		displayName = "SPCS MTP (MG)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
		class iteminfo: iteminfo
		{
			containerClass = "Supply200";
		};
	};
	class twc_trp_spcs_MG: rhsusf_spcs_ocp_saw
	{
		displayName = "SPCS Trepentarn (MG)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	class twc_flk_spcs_MG: rhsusf_spcs_ocp_saw
	{
		displayName = "SPCS Flecktarn (MG)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	
	class rhsusf_spcs_ocp_rifleman_alt;
	class twc_trp_spcs_rif: rhsusf_spcs_ocp_rifleman_alt
	{
		displayName = "SPCS Trepentarn (Rifleman)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	class twc_flk_spcs_rif: rhsusf_spcs_ocp_rifleman_alt
	{
		displayName = "SPCS Flecktarn (Rifleman)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	
	class rhsusf_spc_rifleman;
	class twc_mtp_spc_rifleman: rhsusf_spc_rifleman
	{
		displayName = "SPC MTP (Rifleman)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa"};
	};
	
	class rhsusf_spc_iar;
	class twc_mtp_spc_rifleman_alt: rhsusf_spc_iar
	{
		displayName = "SPC MTP (Rifleman Alt)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa"};
	};
	
	class UK3CB_BAF_L111A1_vehicle;
	class UK3CB_BAF_Landrover_L111A1: UK3CB_BAF_L111A1_vehicle
	{
		displayname = "M2 .50";
	};
	
	class UK3CB_BAF_L134A1_vehicle;
	class UK3CB_BAF_Landrover_L134A1: UK3CB_BAF_L134A1_vehicle
	{
		displayname = "MK19";
	};
	
	class default;
	class LauncherCore
	{
		class eventhandlers;
	};
	class MissileLauncher: LauncherCore
	{
		class EventHandlers: EventHandlers {
			fired = "[_this select 6] call twc_fnc_aps;";
		};
	};
	
	class Launcher;
	
	
	class Launcher_Base_F: Launcher
	{
		class EventHandlers;
	};
	
	class CUP_launch_RPG7V: Launcher_Base_F
	{
		reloadAction = "RHS_GestureReloadRPG7";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.562341,1,50};
	};
	class rhs_weap_rpg7: Launcher_Base_F
	{
		class EventHandlers: EventHandlers {
			fired = "if (!isserver) exitwith {};_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 10) - 5, (velocity _bullet select 1) + (random 10) - 5, 	(velocity _bullet select 2) + (random 4) - 2];";
		};
		scope=2;
		aiDispersionCoefX=1.03;
		aiDispersionCoefY=1.05;
		dispersion = 0.02;
		minrange=50;
		minrangeprobab=0.4;
		midrange=300;
		midrangeprobab=0.3;
		maxrange=500;
		maxrangeprobab=0.9;
	};
	
	class rhs_weap_rpg26: Launcher_Base_F
	{
		class EventHandlers: EventHandlers {
			fired = "if (!isserver) exitwith {};_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 18) - 9, (velocity _bullet select 1) + (random 18) - 9, 	(velocity _bullet select 2) + (random 2) - 1];";
		};
		scope=2;
		aiDispersionCoefX=1.03;
		aiDispersionCoefY=1.05;
		dispersion = 0.02;
		minrange=10;
		minrangeprobab=0.4;
		midrange=150;
		midrangeprobab=0.6;
		maxrange=300;
		maxrangeprobab=0.3;
	};
	class rhs_weap_panzerfaust60: Launcher_Base_F
	{
		displayname = "RPG-76";
		initSpeed = 745;
		mass = 2.1;
	};
	
	class rhs_weap_panzerfaust60_used: rhs_weap_panzerfaust60
	{
		displayname = "RPG-76 (used)";
	};
	
	class rhs_weap_nsvt;
	class rhs_weap_nsvt_effects: rhs_weap_nsvt
	{
		class manual;
	};
	class rhs_weap_kord: rhs_weap_nsvt_effects
	{
		class manual: manual
		{
			class standardsound;
		};
		class close: manual
		{
			class standardsound;
		};
		class far: close
		{
			class standardsound;
		};
		class medium: close
		{
			class standardsound;
		};
		class short: close
		{
			class standardsound;
		};
	};
	
	class twc_rhs_weap_kord_20: rhs_weap_kord
	{
		magazines[] = {"200Rnd_20mm_G_belt"};
		reloadtime = 1.2;
		displayName = "KORD (20MM)";
		class manual: manual
		{
			reloadtime = 1.2;
			class standardsound: standardsound
			{
				soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_120mm_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
			};
		};
		class close: close
		{
			reloadtime = 1.2;
			class standardsound: standardsound
			{
				soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_120mm_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
			};
		};
		class far: far
		{
			reloadtime = 1.2;
			class standardsound: standardsound
			{
				soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_120mm_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
			};
		};
		class medium: medium
		{
			reloadtime = 1.2;
			class standardsound: standardsound
			{
				soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_120mm_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
			};
		};
		class short: short
		{
			reloadtime = 1.2;
			class standardsound: standardsound
			{
				soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_120mm_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
				//soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_DSHKM_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
			};
		};
	};
	
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
	
	
	class CUP_arifle_G36_Base: Rifle_Base_F
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};
	
	class CUP_arifle_G36C: Rifle_Base_F
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};
	
	class CUP_arifle_MG36: CUP_arifle_G36C
	{
		recoil = "twc_rifle_556_long";
		recoilProne = "twc_rifle_556_long_prone";
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
		recoil = "twc_mg_556";
		recoilProne = "twc_mg_556_prone";
		class FullAuto:FullAuto {
			dispersion = 0.003;
		};
	};
	class rhs_weap_m249_pip;
	class twc_HK_MG4: rhs_weap_m249_pip
	{
		displayname = "HK MG4";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_g33_xps3";
			};
		};
	};
	class rhs_weap_mg42;
	class twc_HK_MG3: rhs_weap_mg42
	{
		displayname = "HK MG3";
		twc_openbolt = 1;
		magazines[] = {"UK3CB_BAF_762_200Rnd","UK3CB_BAF_762_200Rnd_T","UK3CB_BAF_762_200Rnd_Blank"};
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
		reloadAction = "GestureReloadSPAR_01";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",1,0.85,10};
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
	
	
	class rhs_weap_ak74m_npz;
	class twc_beryl_base: rhs_weap_ak74m_npz
	{
		scope = 1;
		magazines[] = {"twc_rhsgref_30rnd_556x45_m21", "twc_rhsgref_30rnd_556x45_m21_t"};
		displayName = "wz.2004 Beryl";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		magazineWell[] = {};
	};
	
	
	class twc_ak74_pol_base: twc_beryl_base
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
		};
	};
	
	class rhs_weap_ak74m_desert_npz;
	class twc_ak74_pol_2_base: rhs_weap_ak74m_desert_npz
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
				item="rhsusf_acc_wmx_bk";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="GripodSlot";
				item="rhs_acc_dtk1";
			};
		};
	};
	
	
	class rhs_weap_ak74m_gp25_npz;
	class twc_ak74_gp25_pol_base: rhs_weap_ak74m_gp25_npz
	{
		
		magazines[] = {"twc_rhsgref_30rnd_556x45_m21", "twc_rhsgref_30rnd_556x45_m21_t"};
		magazineWell[] = {};
	};
	
	

	class twc_ak74_gp25_pol: twc_ak74_gp25_pol_base
	{
		

		displayName = "wz.2004 Beryl (wz. 74)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"rhsusf_acc_eotech_552", "rhsusf_acc_wmx_bk", "rhs_acc_dtk1"};
		magazineWell[] = {};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_eotech_552";
			};
		};
	};
	
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
	
	class twc_rhs_rpg7_ins: rhs_weap_rpg7
	{
		
		class EventHandlers: EventHandlers {
			fired = "_mult = 1; if (!isserver) then {_mult = 0.5};_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (((random 24) - 12) * _mult), (velocity _bullet select 1) + (((random 24) - 12) * _mult), 	(velocity _bullet select 2) + (((random 4) - 2) * _mult)];";
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
	
	
	class twc_MG36_eotech: CUP_arifle_MG36
	{
		
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="UK3CB_BAF_Eotech";
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
	
	class GMG_F;
		
	
	class GMG_20mm: GMG_F
	{
		class manual;
	};
	
	class RHS_MK19: GMG_20mm
	{
		magazineReloadTime = 20;
		class manual: manual
		{
			reloadtime = 0.22;
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
		ACE_ScopeAdjust_HorizontalIncrement = 0.5;
		ACE_ScopeAdjust_Vertical[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.5;
		ACE_ScopeHeightAboveRail = 3.9386;
		
	};
	
	
	
	class UK3CB_BAF_SUSAT: ItemCore {
	
	
		ACE_ScopeAdjust_Horizontal[] = {-4,4};
		ACE_ScopeAdjust_HorizontalIncrement = 1.5;
		ACE_ScopeAdjust_Vertical[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 1.5;
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
		// when 3cb does proxies, this is gonna have to go
		class UK3CB_BAF_762_100Rnd_T;
		class UK3CB_BAF_762_200Rnd_T: UK3CB_BAF_762_100Rnd_T
		{
			modelSpecial = "rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_792x57_belt_296rnd";
			modelSpecialIsProxy = 1;
		};
		
		class UK3CB_BAF_762_100Rnd;
		class UK3CB_BAF_762_200Rnd: UK3CB_BAF_762_100Rnd
		{
			modelSpecial = "rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_792x57_belt_296rnd";
			modelSpecialIsProxy = 1;
		};
		
		class 200Rnd_20mm_G_belt;
		class twc_200Rnd_20mm_G_belt_1: 200Rnd_20mm_G_belt
		{
			ammo = "twc_G_20mm_HE";
			initSpeed = 350;
		};

		class CA_Magazine;
		class 10Rnd_RHS_50BMG_Box: CA_Magazine {
			mass = 48;
		};
		
		class rhs_30Rnd_545x39_7N10_AK;
		class twc_rhsgref_30rnd_556x45_m21: rhs_30Rnd_545x39_7N10_AK {
			descriptionshort = "Caliber: 5.56x45mm<br />Rounds: 30";
			displayName = "5.56mm 30rnd Mag";
			ammo = "B_556x45_Ball";
		};
		
		class twc_rhsgref_30rnd_556x45_m21_t: twc_rhsgref_30rnd_556x45_m21 {
			descriptionshort = "Caliber: 5.56x45mm Tracer<br />Rounds: 30";
			displayName = "5.56mm 30rnd Tracer Mag";
			ammo = "B_556x45_Ball";
			tracersEvery = 1;
		};
		
		class FakeMagazine;
		class rhs_panzerfaust60_mag: FakeMagazine
		{
			displayname = "RPG-76 Rocket";
			initSpeed = 105;
			//ammo = "twc_rpg75_rocket";
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
		coefgravity = 0.13;
		timeToLive = 140;
	};
	class rhsusf_ammo_127x99_M33_Ball;
	class rhsusf_ammo_127x99_mk211: rhsusf_ammo_127x99_M33_Ball
	{
		indirectHit = 20;
		indirectHitRange = 0.2;
	};
	class G_20mm_HE;
	class twc_G_20mm_HE: G_20mm_HE
	{
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,0.7,250};
	};
	
	
	class R_PG32V_F;
	class rhs_ammo_panzerfaust60_rocket : R_PG32V_F
	{
		maxSpeed = 320;
		timeToLive = 60;
		explosionEffects = "GrenadeExplosion";
	};
	
	class rhs_rpg26_rocket: R_PG32V_F
	{
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",2,0.9,500};
	};
	
	class rhs_ammo_rpgShell_base: R_PG32V_F
	{
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",3,0.7,500};
	};
	
	class BulletBase;
	class rhs_ammo_762x51_M80_Ball: BulletBase
	{
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
	};
	class rhs_B_762x54_Ball;
	class rhs_B_762x54_Ball_Tracer_Green: rhs_B_762x54_Ball
	{
		model = "z\ace\addons\tracers\ace_tracergreen2.p3d";
	};
	class rhs_B_762x54_7BZ3_Ball: rhs_B_762x54_Ball
	{
		model = "z\ace\addons\tracers\ace_tracergreen2.p3d";
	};
	class rhs_B_762x54_7N13_Ball: rhs_B_762x54_Ball
	{
		model = "z\ace\addons\tracers\ace_tracergreen2.p3d";
	};
	class rhs_B_762x54_7N14_Ball: rhs_B_762x54_Ball
	{
		model = "z\ace\addons\tracers\ace_tracergreen2.p3d";
	};
	class rhs_B_762x54_7N1_Ball: rhs_B_762x54_Ball
	{
		model = "z\ace\addons\tracers\ace_tracergreen2.p3d";
	};
	class rhs_B_762x54_7N26_Ball: rhs_B_762x54_Ball
	{
		model = "z\ace\addons\tracers\ace_tracergreen2.p3d";
	};
	
	
};