class CfgVehicles {
	class fow_b_uk_p37;
	class fow_b_uk_bergenpack;
	class fow_b_us_radio;
	class fow_b_uk_piat_at;
	class B_LIB_SOV_RA_MedicalBag_Empty;
	class CUP_BAF_VehicleBox;

//************************WW2*******************************
	class TWC_Backpack_WW2_Base: fow_b_uk_p37 {
		scope = 1;
		maximumLoad = 200;
	};

	class TWC_Backpack_1956_Radio_Base: fow_b_us_radio {
		scope = 1;
		maximumLoad = 400;
		mass = 29.7;
	};

	class TWC_Backpack_WW2_PlatoonCommand: fow_b_us_radio {
		scope = 1;
		mass = 29.7;
		maximumLoad = 400;

		class TransportMagazines {
			class _XX_Flare_white {
				magazine = "UGL_FlareWhite_F";
				count = 3;
			};

			class _XX_Flare_red {
				magazine="UGL_FlareRed_F";
				count = 3;
			};

			class _XX_Flare_green
			{
				magazine="UGL_FlareGreen_F";
				count=3;
			};
			class _XX_Flare_yellow
			{
				magazine="UGL_FlareYellow_F";
				count=3;
			};
			class _XX_SmokeGrenade_White
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Red
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Green
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Yellow
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Purple
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Blue
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Orange
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
		};
	};
	class TWC_Backpack_WW2_Medic: B_LIB_SOV_RA_MedicalBag_Empty
	{
		maximumLoad = 120;
		scope = 1;
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 12;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 10;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 16;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 6;
			};
			class _xxACE_adenosine
			{
				name = "ACE_adenosine";
				count = 2;
			};
			class _xxACE_atropine
			{
				name = "ACE_atropine";
				count = 2;
			};
			class _xxACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _xxACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 16;
			};
			class _xxACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 6;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 4;
			};
		};
	};
	class TWC_Backpack_WW2_SL: TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_Flare_white
			{
				magazine="UGL_FlareWhite_F";
				count=3;
			};
			class _XX_Flare_red
			{
				magazine="UGL_FlareRed_F";
				count=3;
			};
			class _XX_Flare_green
			{
				magazine="UGL_FlareGreen_F";
				count=3;
			};
			class _XX_Flare_yellow
			{
				magazine="UGL_FlareYellow_F";
				count=3;
			};
			class _XX_SmokeGrenade_White
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Red
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Green
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Yellow
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Purple
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Blue
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Orange
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
		};
	};
	class TWC_Backpack_WW2_Sergeant:fow_b_uk_bergenpack
	{
		scope = 1;
		maximumLoad = 400;
		class TransportItems
		{
			class _XX_Enfield_LooseAmmo
			{
				name="twc_looseAmmoBox_303";
				count= 1;
			};
		};
		class TransportMagazines
		{
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 3;
			};
			class _XX_Flare_white
			{
				magazine="UGL_FlareWhite_F";
				count=6;
			};
			class _XX_Flare_red
			{
				magazine="UGL_FlareRed_F";
				count=6;
			};
			class _XX_Flare_green
			{
				magazine="UGL_FlareGreen_F";
				count=6;
			};
			class _XX_Flare_yellow
			{
				magazine="UGL_FlareYellow_F";
				count=6;
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
	class TWC_Backpack_WW2_2IC: TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_Enfield_Mag
			{
				magazine="10Rnd_303_Magazine";
				count= 5;
			};
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 4;
			};
		};
	};
	class TWC_Backpack_WW2_MGASS: TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 10;
			};
		};
	};
	class TWC_Backpack_PIAT: fow_b_uk_piat_at
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_PIAT_HEAT
			{
				magazine = "fow_1Rnd_piat_HEAT";
				count = 3;
			};
		};
	};
//*******************1956************************
	class TWC_Backpack_1956_SL:TWC_Backpack_1956_Radio_Base
	{
		scope = 1;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1956_Sergeant:TWC_Backpack_1956_Radio_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_Enfield_Mag
			{
				magazine="10Rnd_303_Magazine";
				count= 2;
			};
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine = "UK3CB_BAF_762_20Rnd";
				count = 10;
			};
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 3;
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
	class TWC_Backpack_1956_2IC: TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine = "UK3CB_BAF_762_20Rnd";
				count = 10;
			};
			class _XX_Enfield_Mag
			{
				magazine="10Rnd_303_Magazine";
				count= 2;
			};
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1956_AT: TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_M6A1_Rocket
			{
				magazine = "fow_1Rnd_m6a1";
				count = 3;
			};
		};
	};
//Ammo Boxes
	class TWC_Operation_WW2_Ammobox: CUP_BAF_VehicleBox
	{
		author="FakeMatty";
		displayName="TWC WW2 AmmoBox";
		class TransportMagazines
		{
			class _XX_Enfield_Mag
			{
				magazine="10Rnd_303_Magazine";
				count=200;
			};
			class _XX_Bren_Mag
			{
				magazine="fow_30Rnd_303_bren";
				count=40;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=20;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 10;
			};	
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 10;
			};
			class _xx_Grenade
			{
				magazine="fow_e_no36mk1";
				count=30;
			};
			class _xx_ATGrenade
			{
				magazine = "twc_no82";
				count = 10;
			};
			class _XX_Flare_white
			{
				magazine="UGL_FlareWhite_F";
				count=15;
			};
			class _XX_Flare_red
			{
				magazine="UGL_FlareRed_F";
				count=15;
			};
			class _XX_Flare_green
			{
				magazine="UGL_FlareGreen_F";
				count=15;
			};
			class _XX_Flare_yellow
			{
				magazine="LIB_1Rnd_flare_yellow";
				count=15;
			};
		};
		class TransportItems
		{
			class _xx_303Box
			{
				name = "twc_looseAmmoBox_303";
				count = 3;
			};
		};
		transportAmmo=100000;
		supplyRadius=3;
	};
};