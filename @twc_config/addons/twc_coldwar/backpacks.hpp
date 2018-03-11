	class CUP_B_AlicePack_Khaki;
	class B_AssaultPack_blk;
	
	class TWC_Backpack_Cold_War_Tank: B_AssaultPack_blk {
		scope = 1;

		class TransportItems {
			class _xx_PRC_77 {
				name = "ACRE_PRC77";
				count = 1;
			};
		};
	};
	
	class TWC_Backpack_Cold_War_Rifleman: CUP_B_AlicePack_Khaki {
		scope = 1;
		class TransportMagazines {
			maga_nc(UK3CB_BAF_762_20Rnd, 8);
			maga_nc(UK3CB_BAF_762_100Rnd_T, 1);
		};
	};

	class TWC_Backpack_Cold_War_2IC: CUP_B_AlicePack_Khaki {
		scope = 1;
		class TransportMagazines {
			maga_nc(UK3CB_BAF_762_20Rnd, 10);
			maga_nc(SmokeShell, 4);
			maga_nc(UK3CB_BAF_762_100Rnd_T, 1);
		};
	};

	class TWC_Backpack_Cold_War_2IC_Dismounted: CUP_B_AlicePack_Khaki {
		scope = 1;
		class TransportMagazines {
			maga_nc(UK3CB_BAF_762_20Rnd, 15);
			maga_nc(SmokeShell, 3);
			maga_nc(UK3CB_BAF_762_100Rnd_T, 1);
		};
	};

	class TWC_Backpack_Cold_War_2IC_Dismounted_Troubles: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine = "UK3CB_BAF_762_20Rnd";
				count = 13;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Belt
			{
				magazine = "ukcw_30Rnd_762x51_STANAG";
				count = 2;
			};
		};
	};
	class TWC_Backpack_Cold_War_Section: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportItems
		{
			item_nc(ACRE_PRC77,1);
		};
	};
	
	class TWC_Backpack_Cold_War_Arty: CUP_B_AlicePack_Khaki {
		scope = 1;
		class TransportItems { };
	};
	class TWC_Backpack_Cold_War_MG: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			maga_nc(UK3CB_BAF_762_100Rnd_T,1);
			maga_nc(UK3CB_BAF_762_100Rnd,1);
		};
	};
	class TWC_Backpack_Cold_War_Bren: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine = "ukcw_30Rnd_762x51_STANAG";
				count = 6;
			};
		};
	};
	class TWC_Backpack_Cold_War_MGAss: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			maga_nc(UK3CB_BAF_762_100Rnd_T,2);
			maga_nc(UK3CB_BAF_762_100Rnd,1);
			maga_nc(UK3CB_BAF_762_20Rnd,8);
		};
	};
	class TWC_Backpack_Cold_War_AT: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			maga_nc(ukcw_l14a1_HE,1);
			maga_nc(ukcw_34_rnd_sterling_mag,6);
		};
	};
	class TWC_Backpack_Cold_War_AT_Ass: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			maga_nc(ukcw_l14a1_HEAT,3);
			maga_nc(ukcw_l14a1_HE,1);
		};
	};
	class TWC_Backpack_Cold_War_AT_Ass_Dismounted: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			maga_nc(ukcw_l14a1_HEAT,3);
			maga_nc(ukcw_l14a1_HE,1);
			maga_nc(UK3CB_BAF_762_20Rnd,4);
		};
	};
	class TWC_Backpack_Cold_War_Platoon_Commander: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportItems
		{
			item_nc(ACRE_PRC77,1);
		};
		class TransportMagazines
		{
			maga_nc(SmokeShell,3);
			maga_nc(SmokeShellRed,2);
			maga_nc(SmokeShellBlue,2);	
		};
	};
	class TWC_Backpack_Cold_War_Platoon_Sergeant: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		maximumLoad = 500;
		class TransportItems
		{
			item_nc(ACRE_PRC77,1);
			item_nc(ACE_wirecutter,1);
		};
		class TransportMagazines
		{
			maga_nc(SmokeShell,3);
			maga_nc(SmokeShellRed,2);
			maga_nc(SmokeShellBlue,2);
			maga_nc(UK3CB_BAF_762_20Rnd,20);
			maga_nc(UK3CB_BAF_762_100Rnd_T,2);
			maga_nc(ukcw_34_rnd_sterling_mag,5);
		};
	};
	class TWC_Backpack_Cold_Medic: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportItems
		{
			item_nc(ACE_fieldDressing,12);
			item_nc(ACE_morphine,10);
			item_nc(ACE_elasticBandage,15);
			item_nc(ACE_quikclot,6);
			item_nc(ACE_packingBandage,15);
			item_nc(ACE_adenosine,4);
			item_nc(ACE_atropine,4);
			item_nc(ACE_epinephrine,10);
			item_nc(ACE_salineIV_500,6);
			item_nc(ACE_tourniquet,4);
			item_nc(ACE_personalAidKit,1);
		};
	};
	class TWC_Backpack_Cold_War_AA: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		maximumLoad = 500;
		class TransportMagazines
		{
			maga_nc(ukcw_blowpipe_missile,2);
		};
	};
	class TWC_Backpack_Cold_War_Milan: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportItems
		{
			class _xx_Milan
			{
				name = "ukcw_milan_ace_missile";
				count = 2;
			};
		};
	};
