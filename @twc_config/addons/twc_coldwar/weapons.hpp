class cfgWeapons
{
	class UK3CB_BAF_L1A1_Wood;
	class tf47_m3maaws;
	class CUP_launch_FIM92Stinger;
	
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
	
	class TWC_Carl_Gustav:tf47_m3maaws
	{
		scope = 1;
		author="FakeMatty";
		ace_reloadlaunchers_enabled = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="tf47_optic_m3maaws";
			};
		};
	};

	class CUP_arifle_RPK74;
	class ukcw_l4: CUP_arifle_RPK74
	{
		magazines[] = {"ukcw_30Rnd_762x51_STANAG","CUP_20Rnd_762x51_FNFAL_M","UK3CB_BAF_762_20Rnd"};		
	};
};