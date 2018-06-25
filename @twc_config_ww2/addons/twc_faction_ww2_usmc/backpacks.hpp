class fow_b_usmc_m1928_02;
class fow_b_us_rocket_bag;
class TWC_Backpack_WW2_USMC_Sergeant: fow_b_usmc_m1928_02
{
	scope = 1;
	maximumLoad = 400;
	class TransportMagazines
	{
		class _XX_BAR_Mag
		{
			magazine = "fow_20Rnd_762x63";
			count = 6;
		};
		class _XX_Springfield_Mag
		{
			magazine = "fow_5Rnd_762x63";
			count = 16;
		};
		class _XX_Carbine_Mag
		{
			magazine = "fow_20Rnd_45acp";
			count = 12;
		};
		class _XX_SMG_Mag
		{
			magazine = "fow_30Rnd_45acp";
			count = 4;
		};
	};
};
class TWC_Backpack_WW2_USMC_SL: fow_b_usmc_m1928_02
{
	scope = 1;
	class TransportMagazines
	{
		class _XX_SMG_Mag
		{
			magazine = "fow_30Rnd_45acp";
			count = 2;
		};
		class _xx_Smoke
		{
			magazine = "SmokeShell";
			count = 3;
		};
	};	
};
class TWC_Backpack_WW2_USMC_TL: fow_b_usmc_m1928_02
{
	scope = 1;
	class TransportMagazines
	{
		class _XX_BAR_Mag
		{
			magazine = "fow_20Rnd_762x63";
			count = 4;
		};
		class _XX_Springfield_Mag
		{
			magazine = "fow_5Rnd_762x63";
			count = 2;
		};
		class _xx_Smoke
		{
			magazine = "SmokeShell";
			count = 3;
		};
	};	
};
class TWC_Backpack_WW2_USMC_Gunner_Ass: fow_b_usmc_m1928_02
{
	scope = 1;
	class TransportMagazines
	{
		class _XX_BAR_Mag
		{
			magazine = "fow_20Rnd_762x63";
			count = 6;
		};
		class _xx_Smoke
		{
			magazine = "SmokeShell";
			count = 2;
		};
	};	
};
class TWC_Backpack_WW2_USMC_MG_Ass: fow_b_usmc_m1928_02
{
	scope = 1;
	maximumLoad = 400;
	class TransportMagazines
	{
		class _XX_MG_Mag
		{
			magazine = "fow_100Rnd_762x63";
			count = 8;
		};
	};	
};
class TWC_Backpack_WW2_USMC_Rockets: fow_b_us_rocket_bag
{
	scope = 1;
	class TransportMagazines
	{
		class _XX_Rocket_Mag
		{
			magazine = "fow_1Rnd_m6a1";
			count = 3;
		};
	};		
};