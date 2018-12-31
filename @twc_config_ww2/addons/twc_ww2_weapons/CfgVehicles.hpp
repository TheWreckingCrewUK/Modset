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
			ADD_MAGA(UGL_FlareWhite_F, 3);
			ADD_MAGA(UGL_FlareRed_F, 3);
			ADD_MAGA(UGL_FlareGreen_F, 3);
			ADD_MAGA(UGL_FlareYellow_F, 3);
			ADD_MAGA(1Rnd_Smoke_Grenade_shell, 3);
			ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 3);
			ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 3);
			ADD_MAGA(1Rnd_SmokeYellow_Grenade_shell, 3);
			ADD_MAGA(1Rnd_SmokePurple_Grenade_shell, 3);
			ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 3);
			ADD_MAGA(1Rnd_SmokeOrange_Grenade_shell, 3);
		};
	};

	class TWC_Backpack_WW2_Medic: B_LIB_SOV_RA_MedicalBag_Empty {
		maximumLoad = 120;
		scope = 1;

		class TransportItems {
			ADD_ITEM(ACE_quikclot, 15);
			ADD_ITEM(ACE_fieldDressing, 15);
			ADD_ITEM(ACE_elasticBandage, 15);
			ADD_ITEM(ACE_packingBandage, 15);
			ADD_ITEM(ACE_morphine, 10);
			ADD_ITEM(ACE_epinephrine, 10);
			ADD_ITEM(ACE_adenosine, 2);
			ADD_ITEM(ACE_atropine, 2);
			ADD_ITEM(ACE_personalAidKit, 1);
			ADD_ITEM(ACE_salineIV_500, 8);
			ADD_ITEM(ACE_tourniquet, 4);
			ADD_ITEM(TWC_Item_Medical_SutureKit_25, 1);
		};
	};

	class TWC_Backpack_WW2_SL: TWC_Backpack_WW2_Base {
		scope = 1;

		class TransportMagazines {
			ADD_MAGA(UGL_FlareWhite_F, 3);
			ADD_MAGA(UGL_FlareRed_F, 3);
			ADD_MAGA(UGL_FlareGreen_F, 3);
			ADD_MAGA(UGL_FlareYellow_F, 3);
			ADD_MAGA(1Rnd_Smoke_Grenade_shell, 3);
			ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 3);
			ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 3);
			ADD_MAGA(1Rnd_SmokeYellow_Grenade_shell, 3);
			ADD_MAGA(1Rnd_SmokePurple_Grenade_shell, 3);
			ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 3);
			ADD_MAGA(1Rnd_SmokeOrange_Grenade_shell, 3);
		};
	};

	class TWC_Backpack_WW2_Sergeant: fow_b_uk_bergenpack {
		scope = 1;
		maximumLoad = 400;

		class TransportItems {};

		class TransportMagazines {
			ADD_MAGA(fow_30Rnd_303_bren, 9);
			ADD_MAGA(10Rnd_303_Magazine, 24);
			ADD_MAGA(UGL_FlareWhite_F, 6);
			ADD_MAGA(UGL_FlareRed_F, 6);
			ADD_MAGA(UGL_FlareGreen_F, 6);
			ADD_MAGA(UGL_FlareYellow_F, 6);
			ADD_MAGA(SmokeShellGreen, 6);
			ADD_MAGA(SmokeShellRed, 6);
		};
	};

	class TWC_Backpack_WW2_2IC: TWC_Backpack_WW2_Base {
		scope = 1;

		class TransportMagazines {
			ADD_MAGA(10Rnd_303_Magazine, 12);
			ADD_MAGA(fow_30Rnd_303_bren, 4);
		};
	};

	class TWC_Backpack_WW2_MGASS: TWC_Backpack_WW2_Base {
		scope = 1;

		class TransportMagazines {
			ADD_MAGA(fow_30Rnd_303_bren, 10);
		};
	};

	class TWC_Backpack_PIAT: fow_b_uk_piat_at {
		scope = 1;
		
		class TransportMagazines {
			ADD_MAGA(fow_1Rnd_piat_HEAT, 3);
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

		class TransportItems {};

		transportAmmo = 100000;
		supplyRadius = 3;
	};
};