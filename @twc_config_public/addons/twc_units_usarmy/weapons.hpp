class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class UK3CB_underbarrel_rifle_slot;
class asdg_MuzzleSlot_762_L129_3CB;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot_556;
class CUP_PicatinnyTopMount;
class Mode_SemiAuto;
class Single;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
	class CUP_arifle_M4A1;
	class CUP_arifle_M4A1_GL_carryhandle;
	class CUP_lmg_m249_pip1;
	class CUP_lmg_m249_para;
	class CUP_srifle_M14_DMR;
	class CUP_arifle_M16A4_Base;
	class CUP_arifle_SBR_black;
	class CUP_arifle_mk18_black;
	class CUP_arifle_M4A1_SOMMOD_black;
	
	class twc_mk18_specter: CUP_arifle_mk18_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Elcan_SpecterDR_coyote_PIP";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="twc_acc_rotex5_grey";
			};
		};
	};
	
	class twc_mk18_eotech: CUP_arifle_mk18_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_G33_HWS_COYOTE_DWN";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="twc_acc_rotex5_grey";
			};
		};
	};
	
	class twc_mk18_shortdot: CUP_arifle_mk18_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="twc_optic_vortex_11_8x20_PM";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="twc_acc_rotex5_grey";
			};
		};
	};
	
	class twc_m4b2_us_eotech: CUP_arifle_M4A1_SOMMOD_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_eotech553_coyote";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15_bk";
			};
		};
	};
	
	class twc_m4b2_us_shortdot: CUP_arifle_M4A1_SOMMOD_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="twc_optic_vortex_11_8x20_PM";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="twc_acc_rotex5_grey";
			};
		};
	};
	
	class CUP_hgun_Glock17_blk;
	class twc_g17_optics_laser: CUP_hgun_Glock17_blk
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rksl_optic_rmr_rm33";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="cup_acc_cz_m3x";
			};
		};
	};
	
	class twc_m4b2_us_spectre: twc_m4b2_us_eotech
	{
		displayName = "M4 Block II (Spectre)";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="cup_optic_elcan_specterdr_black_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="CUP_acc_ANPEQ_15_light";
			};
		};
		
	};
	
	class twc_m4b2_us_mag: twc_m4b2_us_eotech
	{
		displayName = "M4 Block II (G33)";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="CUP_optic_AIMM_MICROT1_BLK";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="CUP_acc_ANPEQ_15_light";
			};
		};
		
	};
	
	class twc_m4b2_us_spectre_m203: twc_m4b2_us_eotech
	{
		displayName = "M4 Block II (M203)";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="cup_optic_elcan_specterdr_black_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="cup_acc_anpeq_15_flashlight_tan_l";
			};
		};
		
	};

	class twc_m4b2_black_us_eotech: CUP_arifle_M4A1_SOMMOD_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="cup_optic_eotech553_coyote";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="ACE_muzzle_mzls_L";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="CUP_acc_ANPEQ_15_bk";
			};
		};
		
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountMk18: CUP_PicatinnyTopMount {
				class compatibleItems {
					cup_optic_eotech553_coyote = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
					ACE_muzzle_mzls_L = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					CUP_acc_ANPEQ_15_bk_light = 1;
					CUP_acc_ANPEQ_15_bk = 1;
					uk3cb_baf_llm_ir_tan = 1;
					uk3cb_baf_llm_flashlight_tan = 1;
					acc_pointer_IR = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			allowedslots[] = {901};
			mass = 90;
		};
		
	};
	
	class CUP_arifle_HK416_CQB_Black;
	class twc_hk416_d_base_c: CUP_arifle_HK416_CQB_Black
	{
		recoil = "twc_rifle_556_short";
		recoilProne = "twc_rifle_556_short_prone";
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_M16\data\anim\VLTOR_magpul.rtm"};
		displayname ="HK416C";
	};
	class twc_hk416_d_base: twc_hk416_d_base_c {};
	class twc_hk416_mag_desert: twc_hk416_d_base
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="CUP_optic_AIMM_MICROT1_BLK";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="CUP_acc_ANPEQ_15side";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="twc_acc_rotex5_grey";
			};
		};
	};
	
	class twc_hk416_mag: twc_hk416_d_base_c
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="CUP_optic_AIMM_MICROT1_BLK";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="CUP_acc_ANPEQ_15side";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="twc_acc_rotex5_grey";
			};
		};
	};
	
	class twc_hk416_shortdot_desert_dark: twc_hk416_d_base
	{
		displayname ="HK416D";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="cup_optic_sb_11_4x20_pm_tan_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="CUP_acc_ANPEQ_15side";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="twc_acc_rotex5_grey";
			};
		};
		
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountMk18: CUP_PicatinnyTopMount {
				class compatibleItems {
					cup_optic_sb_11_4x20_pm_tan = 1;
					cup_optic_sb_11_4x20_pm_tan_pip = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					CUP_acc_ANPEQ_15side = 1;
					uk3cb_baf_llm_ir_tan = 1;
					uk3cb_baf_llm_flashlight_tan = 1;
					acc_pointer_IR = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			allowedslots[] = {901};
			mass = 90;
		};
	};
	
	class twc_hk416_shortdot_desert_light: twc_hk416_d_base
	{
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_HK416\data\new_hk416_camo_desert_co.paa","\CUP\Weapons\CUP_Weapons_HK416\data\tacticool_coyote_co.paa"};
		model = "\CUP\Weapons\CUP_Weapons_HK416\CUP_hk416_cqb.p3d";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="cup_optic_sb_11_4x20_pm_tan_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="CUP_acc_ANPEQ_15side";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="twc_acc_rotex5_grey";
			};
		};
		
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountMk18: CUP_PicatinnyTopMount {
				class compatibleItems {
					cup_optic_sb_11_4x20_pm_tan = 1;
					cup_optic_sb_11_4x20_pm_tan_pip = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					CUP_acc_ANPEQ_15side = 1;
					uk3cb_baf_llm_ir_tan = 1;
					uk3cb_baf_llm_flashlight_tan = 1;
					acc_pointer_IR = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			allowedslots[] = {901};
			mass = 90;
		};
	};
	
	class CUP_srifle_m110_kac_black;
	class twc_sr25_us_marksman: CUP_srifle_m110_kac_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_LeupoldMk4";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="cup_acc_anpeq_15_flashlight_tan_l";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="cup_bipod_harris_1a2_l";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M110_black";
			};
		};
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
	};
	
	class twc_m4b2_us_marksman: CUP_arifle_M4A1_SOMMOD_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_LeupoldMk4_25x50_LRT";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="cup_acc_anpeq_15_flashlight_black_l";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
		};
	};
	
	
	class CUP_arifle_M4A1_black;
	class twc_m4_spotter: CUP_arifle_M4A1_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_acog2_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15_bk";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
		};
	};
	class CUP_srifle_M24_des;
	class twc_m24_usarmy: CUP_srifle_M24_des
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_LeupoldMk4_10x40_LRT_Desert";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
	};
	
	
	
	class twc_m4_acog_lazer: CUP_arifle_M4A1
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_acog2_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15side";
			};
		};
	};
	class twc_m4_203_acog_lazer: CUP_arifle_M4A1_GL_carryhandle
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_acog2_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="cup_acc_anpeq_15_flashlight_black_F";
			};
		};
	};
	class twc_m4_320_lds_lazer: CUP_arifle_M4A1_GL_carryhandle
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Elcan_reflex";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15";
			};
		};
	};
	class twc_m249_mgo_lazer:CUP_lmg_m249_pip1
	{
		twc_openbolt = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Elcan";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15side";
			};
		};
	};
	class twc_m14_ebr_lazer_bipod:CUP_srifle_M14_DMR
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_LeupoldMk4";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15side";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
		};
	};
	
	
	
	
	
	
	
	
	class twc_m4_203_acog: CUP_arifle_M4A1_GL_carryhandle
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_acog2_pip";
			};
		};
	};
	
		
	
	class twc_m4_203_cco: CUP_arifle_M4A1_GL_carryhandle
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_CompM2_low";
			};
		};
	};
	
	
	
	
	class twc_m16_dmr:CUP_arifle_M16A4_Base
	{
		scope = 1;
		displayName = "M16 SDM-R";
		author="Hobbs";
		modes[] = {"Single"};
		recoil = "twc_rifle_556_long";
		recoilProne = "twc_rifle_556_long_prone";
		descriptionShort = "Match Grade Competition Rifle<br/>Caliber: 5.56x45mm NATO";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_acog2_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="cup_acc_anpeq_2_grey";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
		};
	};
	
	
	class twc_m4_cco_vfg:CUP_arifle_M4A1
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_CompM2_low";
			};
		};
	};
	
	class twc_m4_eotech_vfg_laser:CUP_arifle_M4A1
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="RKSL_optic_EOT552";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15";
			};
		};
	};
	
	
	
	
	class twc_m249_para_acog: CUP_lmg_m249_pip1
	{
		twc_openbolt = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Elcan";
			};
		};
	};
	
	class Rifle_Base_F;
	class CUP_arifle_M16_Base: Rifle_Base_F
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};
	class CUP_arifle_M16A2: CUP_arifle_M16_Base
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};
	class CUP_arifle_M16A2_GL: CUP_arifle_M16_Base
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};
	
	
	
	
	
};