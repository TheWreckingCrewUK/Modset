class cfgWeapons
{
	class rhs_weap_m4a1_carryhandle;
	class rhs_weap_m4a1_carryhandle_m203;
	class rhs_weap_m249_pip_S;
	class rhs_weap_m249_pip_L_para;
	class rhs_weap_m14ebrri;
	class rhs_weap_m16a4_carryhandle;
	class twc_m4_acog_lazer: rhs_weap_m4a1_carryhandle
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
	class twc_m4_203_acog_lazer: rhs_weap_m4a1_carryhandle_m203
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
	class twc_m249_mgo_lazer:rhs_weap_m249_pip_S
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
				item="rhsusf_acc_ACOG_USMC";
			};
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
	};
	
	
	
	
	class twc_m16_dmr:rhs_weap_m16a4_carryhandle
	{
		scope = 1;
		displayName = "M16 SDM-R";
		author="Hobbs";
		modes[] = {"Single"};
		dispersion = 0.0001;
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
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_harris_bipod";
			};
		};
	};
	
	
	
	class twc_m4_cco_vfg:rhs_weap_m4a1_carryhandle
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
	};
	
	
	
	
	class twc_m249_para_acog: rhs_weap_m249_pip_L_para
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_ELCAN";
			};
		};
	};
	
	
	
	
	
};