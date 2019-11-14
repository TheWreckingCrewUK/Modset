class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class UK3CB_underbarrel_rifle_slot;
class asdg_MuzzleSlot_762_L129_3CB;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot_556;
class rhs_western_rifle_scopes_slot_short;
class rhs_western_rifle_laser_slot_top;
class rhs_western_rifle_gripod_slot;
class rhs_western_rifle_underbarrel_slot;
class CUP_PicatinnyTopMount;

class cfgWeapons
{
	class rhs_weap_m4a1_carryhandle;
	class rhs_weap_m4a1_carryhandle_m203;
	class rhs_weap_m249_pip_S;
	class rhs_weap_m249_pip_L_para;
	class rhs_weap_m14ebrri;
	class rhs_weap_m16a4_carryhandle;
	class rhs_weap_m4_m320;
	
	
	
	
	class rhs_weap_m4a1;
	
	class rhs_weap_m4a1_blockII: rhs_weap_m4a1
	{
		recoil = "twc_rifle_556_long";
		recoilProne = "twc_rifle_556_long_prone";
	};
	
	class twc_m4b2_us_eotech: rhs_weap_m4a1_blockII
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_eotech_xps3";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15_bk";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_eotech_xps3 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq15_bk = 1;
					rhsusf_acc_anpeq15_bk_light = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
				};
			};
			allowedslots[] = {901};
			mass = 89.2;
		};
	};
	class rhs_weap_m4a1_blockII_bk: rhs_weap_m4a1_blockII
	{};
	class twc_m4b2_us_shortdot: rhs_weap_m4a1_blockII_bk
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_sb_11_4x20_pm";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15_bk";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_eotech_xps3 = 1;
					cup_optic_sb_11_4x20_pm = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq15_bk = 1;
					rhsusf_acc_anpeq15_bk_light = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
				};
			};
			allowedslots[] = {901};
			mass = 89.2;
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
				item="rhsusf_acc_anpeq15_light";
			};
		};
		
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountMk18: CUP_PicatinnyTopMount {
				class compatibleItems {
					cup_optic_elcan_specterdr_black_pip = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					rhsusf_acc_anpeq15_light = 1;
					rhsusf_acc_anpeq15 = 1;
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
	
	class twc_m4b2_us_mag: twc_m4b2_us_eotech
	{
		displayName = "M4 Block II (G33)";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="rhsusf_acc_g33_xps3";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="rhsusf_acc_anpeq15_light";
			};
		};
		
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountMk18: CUP_PicatinnyTopMount {
				class compatibleItems {
					rhsusf_acc_g33_xps3 = 1;
					rhsusf_acc_g33_xps3_flip = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					rhsusf_acc_anpeq15_light = 1;
					rhsusf_acc_anpeq15 = 1;
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
	
	class rhs_weap_m4a1_blockII_KAC_bk;
	class twc_m4b2_black_us_eotech: rhs_weap_m4a1_blockII_KAC_bk
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="rhsusf_acc_eotech_xps3";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="rhsusf_acc_sf3p556";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="rhsusf_acc_anpeq15_bk";
			};
		};
		
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountMk18: CUP_PicatinnyTopMount {
				class compatibleItems {
					rhsusf_acc_eotech_xps3 = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
					rhsusf_acc_sf3p556 = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					rhsusf_acc_anpeq15_bk_light = 1;
					rhsusf_acc_anpeq15_bk = 1;
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
	
	class rhs_weap_hk416d10_LMT_d;
	class twc_hk416_d_base: rhs_weap_hk416d10_LMT_d
	{
		recoil = "twc_rifle_556_short";
		recoilProne = "twc_rifle_556_short_prone";
	};
	class twc_hk416_mag_desert: twc_hk416_d_base
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="rhsusf_acc_g33_xps3_tan_flip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="rhsusf_acc_anpeq15side";
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
					rhsusf_acc_g33_xps3_tan = 1;
					rhsusf_acc_g33_xps3_tan_flip = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					rhsusf_acc_anpeq15side = 1;
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
	
	class twc_hk416_shortdot_desert_dark: twc_hk416_d_base
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="cup_optic_sb_11_4x20_pm_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="rhsusf_acc_anpeq15side";
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
					cup_optic_sb_11_4x20_pm = 1;
					cup_optic_sb_11_4x20_pm_pip = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					rhsusf_acc_anpeq15side = 1;
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
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_afg.rtm"};
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
				item="rhsusf_acc_anpeq15side";
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
					rhsusf_acc_anpeq15side = 1;
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
	
	class rhs_weap_sr25_ec_d;
	class twc_sr25_us_marksman: rhs_weap_sr25_ec_d
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
				item="rhsusf_acc_anpeq16a";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_harris_bipod";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="cup_muzzle_mfsup_flashhider_762x51_tan";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					cup_optic_acog2_pip = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq16a = 1;
					rhsusf_acc_anpeq16a_light = 1;
				};
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {
				class compatibleItems {
					rhsusf_acc_harris_bipod = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					cup_muzzle_mfsup_flashhider_762x51_tan = 1;
				};
			};
			allowedslots[] = {901};
			mass = 89.2;
		};
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
	};
	
	class rhs_weap_m4a1_blockII_KAC;
	class twc_m4b2_us_marksman: rhs_weap_m4a1_blockII_KAC
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_premier_mrds";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="cup_acc_anpeq_15_flashlight_black_l";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_harris_bipod";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_premier_mrds = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					cup_acc_anpeq_15_flashlight_black_l = 1;
					cup_acc_anpeq_15_flashlight_black_f = 1;
				};
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {
				class compatibleItems {
					rhsusf_acc_harris_bipod = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
				};
			};
			allowedslots[] = {901};
			mass = 89.2;
		};
	};
	
	
	class rhs_weap_m4;
	class twc_m4_spotter: rhs_weap_m4
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
				item="rhsusf_acc_anpeq15_bk";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_harris_bipod";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					cup_optic_acog2_pip = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq15_bk = 1;
					rhsusf_acc_anpeq15_bk_light = 1;
				};
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {
				class compatibleItems {
					rhsusf_acc_harris_bipod = 1;
				};
			};
			allowedslots[] = {901};
			mass = 79.2;
		};
	};
	class rhs_weap_XM2010_d;
	class twc_m2010_scope: rhs_weap_XM2010_d
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_leupoldmk4_2_d";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_harris_bipod";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_leupoldmk4_2_d = 1;
				};
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {
				class compatibleItems {
					rhsusf_acc_harris_bipod = 1;
				};
			};
			allowedslots[] = {901};
			mass = 119.2;
		};
	};
	class rhs_weap_m24sws_d;
	class twc_m24_usarmy: rhs_weap_m24sws_d
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_m8541_low_d";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_harris_swivel";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="rhsusf_acc_m24_silencer_d";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_m8541_low_d = 1;
					rhsusf_acc_premier_anpvs27 = 1;
				};
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {
				class compatibleItems {
					rhsusf_acc_harris_swivel = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					rhsusf_acc_m24_silencer_d = 1;
				};
			};
			allowedslots[] = {901};
			mass = 86;
		};
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
	};
	
	
	
	class twc_m4_acog_lazer: rhs_weap_m4a1_carryhandle
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
				item="rhsusf_acc_anpeq15A";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					cup_optic_acog2_pip = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq15A = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_nt4_black = 1;
				};
			};
			allowedslots[] = {901};
			mass = 73.04;
		};
	};
	class twc_m4_203_acog_lazer: rhs_weap_m4a1_carryhandle_m203
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
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					cup_optic_acog2_pip = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					cup_acc_anpeq_15_flashlight_black_F = 1;
					cup_acc_anpeq_15_flashlight_black_L = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_nt4_black = 1;
				};
			};
			allowedslots[] = {901};
			mass = 102.96;
		};
	};
	class twc_m4_320_lds_lazer: rhs_weap_m4_m320
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_su230_mrds";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_su230_mrds = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq15 = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_nt4_black = 1;
				};
			};
			allowedslots[] = {901};
			mass = 102.96;
		};
	};
	class twc_m249_mgo_lazer:rhs_weap_m249_pip_S
	{
		twc_openbolt = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_ELCAN";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15A";
			};
		};
	};
	class twc_m14_ebr_lazer_bipod:rhs_weap_m14ebrri
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_LEUPOLDMK4";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15A";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_harris_bipod";
			};
		};
	};
	
	
	
	
	
	
	
	
	class twc_m4_203_acog: rhs_weap_m4a1_carryhandle_m203
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_acog2_pip";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					cup_optic_acog2_pip = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_nt4_black = 1;
				};
			};
			allowedslots[] = {901};
			mass = 102.96;
		};
	};
	
		
	
	class twc_m4_203_cco: rhs_weap_m4a1_carryhandle_m203
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_compm4";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					cup_optic_acog2_pip = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_nt4_black = 1;
				};
			};
			allowedslots[] = {901};
			mass = 102.96;
		};
	};
	
	
	
	
	class twc_m16_dmr:rhs_weap_m16a4_carryhandle
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
				item="rhsusf_acc_anpeq15side_bk";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_harris_bipod";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					cup_optic_acog2_pip = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq15side_bk = 1;
				};
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {
				class compatibleItems {
					rhsusf_acc_harris_bipod = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_nt4_black = 1;
				};
			};
			allowedslots[] = {901};
			mass = 79.04;
		};
	};
	
	
	class rhs_weap_m4_carryhandle;
	class twc_m4_cco_vfg:rhs_weap_m4_carryhandle
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_compm4";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_grip3";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_compm4 = 1;
				};
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {
				class compatibleItems {
					rhsusf_acc_grip3 = 1;
				};
			};
			allowedslots[] = {901};
			mass = 73.04;
		};
	};
	
	class twc_m4_eotech_vfg_laser:rhs_weap_m4a1_carryhandle
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_eotech_552";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_grip1";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_compm4 = 1;
					rhsusf_acc_eotech_552 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq15 = 1;
				};
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {
				class compatibleItems {
					rhsusf_acc_grip1 = 1;
				};
			};
			allowedslots[] = {901};
			mass = 72.04;
		};
	};
	
	
	
	
	class twc_m249_para_acog: rhs_weap_m249_pip_L_para
	{
		twc_openbolt = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_ELCAN";
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