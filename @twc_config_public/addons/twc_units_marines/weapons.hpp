class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class UK3CB_underbarrel_rifle_slot;
class asdg_MuzzleSlot_762_L129_3CB;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class rhs_western_rifle_scopes_slot_short;
class rhs_western_rifle_laser_slot_top;
class rhs_western_rifle_gripod_slot;
class rhs_western_rifle_underbarrel_slot;
class CUP_PicatinnyTopMount;
class CUP_PicatinnySideMount;
class asdg_OpticRail1913;

class cfgWeapons
{
	class rhs_weap_m4a1_m203;
	class rhs_weap_m4a1;
	class rhs_weap_m249_pip_L;
	class rhs_weap_m240B;
	class rhs_weap_m27iar_grip;
	class rhs_weap_m16a4_carryhandle;
	class rhs_weap_m16a4_carryhandle_M203;
	class rhs_weap_smaw_green;
	
	class twc_smaw: rhs_weap_smaw_green
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_weap_optic_smaw";
			};
		};
	};
	
	
	class twc_rhs_weap_m4a1_m203_acog_lazer: rhs_weap_m4a1_m203
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
				item="rhsusf_acc_anpeq15A";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_ACOG = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq15A = 1;
				};
			};
			allowedslots[] = {901};
			mass = 102.96;
		};
	};
	
		
	class twc_ana_m16a4: rhs_weap_m16a4_carryhandle
	{
		
		class WeaponSlotsInfo {
			allowedslots[] = {901};
			mass = 74.8;
		};
	};
		
	class CUP_arifle_M16A4_Grip;
	class CUP_TWC_arifle_M16A4_Grip_base: CUP_arifle_M16A4_Grip
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};
	
	class UK3CB_BAF_L128A1;
	class twc_m1014: UK3CB_BAF_L128A1
	{
		displayName = "M1014";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L128A1";
				item="rhsusf_acc_compm4";
			};
		};
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L128A1: asdg_OpticRail1913 {
				class compatibleItems {
					rhsusf_acc_compm4 = 1;
				};
			};
			allowedslots[] = {901};
			mass = 84.8;
		};
	};
	
	class CUP_TWC_arifle_M16A4_Grip_clean: CUP_TWC_arifle_M16A4_Grip_base
	{
		class WeaponSlotsInfo {
			allowedslots[] = {901};
			mass = 74.8;
		};
	};
	
		
	class twc_CUP_arifle_M16A4_Grip_acog: CUP_TWC_arifle_M16A4_Grip_base
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM16";
				item="rhsusf_acc_ACOG_USMC";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountM16";
				item="cup_acc_anpeq_2";
			};
		};
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountM16: CUP_PicatinnyTopMount {
				class compatibleItems {
					rhsusf_acc_ACOG_USMC = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class CUP_PicatinnySideMountM16: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					cup_acc_anpeq_2 = 1;
				};
			};
			allowedslots[] = {901};
			mass = 74.8;
		};
	};
		
	class twc_CUP_arifle_M16A4_Grip_acog_sdmr: CUP_TWC_arifle_M16A4_Grip_base
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM16";
				item="rhsusf_acc_ACOG_USMC";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountM16";
				item="cup_acc_anpeq_2";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnyUnderMountM16";
				item="rhsusf_acc_harris_bipod";
			};
		};
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountM16: CUP_PicatinnyTopMount {
				class compatibleItems {
					rhsusf_acc_ACOG_USMC = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class CUP_PicatinnySideMountM16: CUP_PicatinnySideMount {
				class compatibleItems {
					cup_acc_anpeq_2 = 1;
				};
			};
			class CUP_PicatinnyUnderMountM16: CUP_PicatinnyUnderMount {
				class compatibleItems {
					rhsusf_acc_harris_bipod = 1;
				};
			};
			allowedslots[] = {901};
			mass = 76.8;
		};
		recoil = "twc_rifle_556_long";
		recoilProne = "twc_rifle_556_long_prone";
		displayName = "M16 SDM-R";
		modes[] = {"Single"};
		descriptionShort = "Match Grade Competition Rifle<br/>Caliber: 5.56x45mm NATO";
	};
	
	class CUP_arifle_M16A4_GL;
	class twc_CUP_arifle_M16A4_GL: CUP_arifle_M16A4_GL
	{
		class WeaponSlotsInfo
		{
			allowedslots[] = {901};
			mass = 106.8;
		};
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};
		
	class twc_rhs_weap_m16a4_acog_lazer: rhs_weap_m16a4_carryhandle
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_ACOG_USMC";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15side_bk";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_ACOG_USMC = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq15side_bk = 1;
				};
			};
			allowedslots[] = {901};
			mass = 74.8;
		};
	};
	
		class twc_rhs_weap_m16a4_m203_acog_lazer: rhs_weap_m16a4_carryhandle_M203
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_ACOG_USMC";
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
					rhsusf_acc_ACOG_USMC = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq15A = 1;
				};
			};
			allowedslots[] = {901};
			mass = 104.72;
		};
	};
	
	class twc_rhs_weap_m4a1_acog_lazer: rhs_weap_m4a1
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
				item="rhsusf_acc_anpeq15_bk_light";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_ACOG = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq15_bk_light = 1;
				};
			};
			allowedslots[] = {901};
			mass = 73.04;
		};
	};
	
	class twc_rhs_weap_m249_pip_L_mgo_lazer: rhs_weap_m249_pip_L
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
	
	class twc_rhs_weap_m240B_mgo_lazer: rhs_weap_m240B
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
	class twc_rhs_weap_m27iar_grip_acog_lazer: rhs_weap_m27iar_grip
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
				item="rhsusf_acc_anpeq15_bk_light";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_ACOG = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq15_bk_light = 1;
				};
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {
				class compatibleItems {
					bipod_01_F_blk = 1;
				};
			};
			allowedslots[] = {901};
			mass = 79.2;
		};
	};
	
	class rhs_weap_m4a1_d_grip2;
	class twc_rhs_weap_m4a1_d_LDS: rhs_weap_m4a1_d_grip2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="UK3CB_BAF_LLM_IR_Black";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_grip2";
			};
		};
	};
	
	class rhs_weap_m4a1_m203s_d;
	class twc_rhs_weap_m4a1_m203_d_LDS: rhs_weap_m4a1_m203s_d
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="UK3CB_BAF_LLM_IR_Black";
			};
		};
	};
};