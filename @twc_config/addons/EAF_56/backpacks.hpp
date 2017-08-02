class fow_b_ija_backpack;
class fow_b_uk_piat;
class B_LIB_SOV_RA_Radio;
	
class EAF56_backpack_MG: fow_b_ija_backpack
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_twc_100Rnd_762x39_RPD
		{
			magazine = "twc_100Rnd_762x39_RPD";
			count = 5;
		};
	};
};	
class EAF56_backpack_AT: fow_b_uk_piat
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_LIB_fow_1Rnd_piat
		{
			magazine = "LIB_47Rnd_762x54";
			count = 3;
		};
	};
};
class EAF56_backpack_NCO: fow_b_uk_piat
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_LIB_fow_1Rnd_piat
		{
			magazine = "LIB_47Rnd_762x54";
			count = 3;
		};
		class _xx_twc_100Rnd_762x39_RPD
		{
			magazine = "twc_100Rnd_762x39_RPD";
			count = 2;
		};
		class _xx_CUP_30Rnd_762x39_AK47_M
		{
			magazine = "CUP_30Rnd_762x39_AK47_M";
			count = 3;
		};
		class _xx_fow_10Rnd_303
		{
			magazine = "fow_10Rnd_303";
			count = 6;
		};
		class _xx_SmokeShell
		{
			magazine="SmokeShell";
			count=3;
		};
		class _xx_SmokeShellGreen
		{
			magazine = "SmokeShellGreen";
			count = 2;
		};	
		class _xx_SmokeShellRed
		{
			magazine = "SmokeShellRed";
			count = 2;
		};
	};
};
class EAF56_backpack_RTO: B_LIB_SOV_RA_Radio
{
	scope = 1;
	class TransportItems
	{
		class _xx_PRC_117F
		{
			name = "ACRE_PRC77";
			count = 1;
		};
	};
};