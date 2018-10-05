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
	};
	
		
	class twc_ana_m16a4: rhs_weap_m16a4_carryhandle
	{
		
		class WeaponSlotsInfo {
			class CowsSlot { };
		};
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
	};
	
	class twc_rhs_weap_m249_pip_L_mgo_lazer: rhs_weap_m249_pip_L
	{
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
	};
	
	class rhs_weap_m4a1_d;
	class twc_rhs_weap_m4a1_d_LDS: rhs_weap_m4a1_d
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