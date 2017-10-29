class cfgWeapons
{
	class rhs_weap_m4a1_m203;
	class rhs_weap_m4a1;
	class rhs_weap_m249_pip_L;
	class rhs_weap_m240B;
	class rhs_weap_m27iar_grip;
	
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
				item="rhsusf_acc_anpeq15A";
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
				item="rhsusf_acc_anpeq15A";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
};