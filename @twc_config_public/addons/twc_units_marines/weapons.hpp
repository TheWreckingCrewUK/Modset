class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class UK3CB_underbarrel_rifle_slot;
class asdg_MuzzleSlot_762_L129_3CB;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class CUP_PicatinnyTopMount;
class asdg_OpticRail1913;
class CUP_PicatinnyUnderMount;

class cfgWeapons
{
	class CUP_arifle_M4A1_GL_carryhandle;
	class CUP_arifle_M4A1;
	class CUP_lmg_m249_pip1;
	class CUP_lmg_M240_B;
	class CUP_arifle_HK_M27_VFG;
	class CUP_arifle_M16A4_Base;
	class CUP_arifle_M16A4_GL;
	class CUP_launch_Mk153Mod0;
	
	class twc_smaw: CUP_launch_Mk153Mod0
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_SMAW_Scope";
			};
		};
	};
	
	
	class twc_CUP_arifle_M4A1_GL_carryhandle_acog_lazer: CUP_arifle_M4A1_GL_carryhandle
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
				item="cup_acc_anpeq_15_flashlight_black_l";
			};
		};
	};
	
	class CUP_srifle_M40A3;
	class twc_m40_d_sniper: CUP_srifle_M40A3
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Leupold_VX3";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
		};
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
	};
	
	class CUP_srifle_M14_DMR;
	class twc_m14_spotter: CUP_srifle_M14_DMR
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Leupold_VX3";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
		};
	};
	
		
	class twc_ana_m16a4: CUP_arifle_M16A4_Base
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
				item="CUP_optic_CompM2_low";
			};
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
				item="cup_optic_acog2_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountM16";
				item="cup_acc_anpeq_2";
			};
		};
	};
		
	class twc_CUP_arifle_M16A4_Grip_acog_sdmr: CUP_TWC_arifle_M16A4_Grip_base
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM16";
				item="cup_optic_acog2_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountM16";
				item="cup_acc_anpeq_2";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="CUP_PicatinnyUnderMountM16";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
		};
		recoil = "twc_rifle_556_long";
		recoilProne = "twc_rifle_556_long_prone";
		displayName = "M16 SDM-R";
		modes[] = {"Single"};
		descriptionShort = "Match Grade Competition Rifle<br/>Caliber: 5.56x45mm NATO";
	};
	
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
		
	class twc_rhs_weap_m16a4_acog_lazer: CUP_arifle_M16A4_Base
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
				item="CUP_acc_ANPEQ_15_Black_Top";
			};
		};
	};
	
		class twc_rhs_weap_m16a4_m203_acog_lazer: CUP_arifle_M16A4_GL
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
				item="cup_acc_anpeq_15_flashlight_black_L";
			};
		};
	};
	
	class twc_CUP_arifle_M4A1_acog_lazer: CUP_arifle_M4A1
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
				item="CUP_acc_ANPEQ_15_Black_Top";
			};
		};
	};
	
	class twc_CUP_lmg_m249_pip2_mgo_lazer: CUP_lmg_m249_pip1
	{
		twc_openbolt = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_ElcanM145";
			};
		};
	};
	class twc_rhs_weap_m249_pip_acog: CUP_lmg_m249_pip1
	{
		twc_openbolt = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_acog2_pip";
			};
		};
	};
	
	class twc_CUP_lmg_M240_B_mgo_lazer: CUP_lmg_M240_B
	{
		twc_openbolt = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_ElcanM145";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15_Black";
			};
		};
	};
	class CUP_lmg_M240;
	class twc_rhs_weap_m240G_mdo_lazer: CUP_lmg_M240
	{
		twc_openbolt = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_ACOG_TA01B_Black";
			};
		};
	};
	class twc_CUP_arifle_HK_M27_VFG_acog_lazer: CUP_arifle_HK_M27_VFG
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
				item="CUP_acc_ANPEQ_15_Black_Top";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
};