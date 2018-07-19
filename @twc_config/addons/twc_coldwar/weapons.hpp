class cfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class UK3CB_BAF_L1A1_Wood: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 95.61;
		};
	};
	class CUP_launch_FIM92Stinger;
	class ukcw_L14A1;
	
	class twc_L1A1_SUIT:UK3CB_BAF_L1A1_Wood
	{
		scope = 1;
		author = "jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item= "UK3CB_BAF_SUIT";
			};
		};
	};
	class twc_l14A1_scoped: ukcw_L14A1
	{
		scope = 1;
		author="jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_MAAWS_Scope";
			};
		};
	};

	class CUP_arifle_RPK74;
	class ukcw_l4: CUP_arifle_RPK74
	{
		magazines[] = {"ukcw_30Rnd_762x51_STANAG","CUP_20Rnd_762x51_FNFAL_M","UK3CB_BAF_762_20Rnd"};		
	};
};