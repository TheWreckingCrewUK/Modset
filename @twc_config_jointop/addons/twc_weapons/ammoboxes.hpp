	class CUP_BAF_VehicleBox;
	class TWC_ColdWar_Operation_Ammobox: CUP_BAF_VehicleBox
	{
		author="FakeMatty";
		displayName="TWC Cold War Ammo Box";
		class TransportMagazines
		{
			class _xx_Sterling_34Rnd
			{
				magazine = "ukcw_34_rnd_sterling_mag";
				count = 20;
			};
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine="UK3CB_BAF_762_20Rnd";
				count=110;
			};
			class _xx_UK3CB_BAF_762_20Rnd_T
			{
				magazine="UK3CB_BAF_762_20Rnd_T";
				count=20;
			};
			class _xx_UK3CB_BAF_100Rnd
			{
				magazine="UK3CB_BAF_762_100Rnd";
				count=7;
			};
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine="UK3CB_BAF_762_100Rnd_T";
				count=8;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine="ACE_HandFlare_White";
				count=10;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine="tf47_m3maaws_HEAT";
				count=4;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine="tf47_m3maaws_HE";
				count=4;
			};
			class _xx_tf47_m3maaws_SMOKE
			{
				magazine="tf47_m3maaws_SMOKE";
				count=10;
			};
			class _xx_tf47_m3maaws_ILLUM
			{
				magazine="tf47_m3maaws_ILLUM";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=30;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 10;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 10;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 10;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=30;
			};
		};
		class TransportItems
	    {
			class _xx_DemolitionBlock
			{
				name = "DemoCharge_Remote_Mag";
				count = 5;
			};
			class _xx_Clacker
			{
				name = "ACE_Clacker";
				count = 5;
			};
		};
		class TransportWeapons
		{
			class _xx_LAW
			{
				Weapon = "HAFM_LAW";
				count = 4;
			};
		};
		transportAmmo=100000;
		supplyRadius=3;
	};
	class TWC_ColdWar_Bundeswehr_Ammobox: CUP_BAF_VehicleBox
	{
		author="Anschluss";
		displayName="Bundeswehr Cold War Ammobox";
		class TransportMagazines
		{
			class _xx_bw_uzi_32rnd
			{
				magazine = "bw_uzi_32rnd";
				count = 20;
			};
			class _xx_hlc_20rnd_762x51_b_G3
			{
				magazine="hlc_20rnd_762x51_b_G3";
				count=110;
			};
			class _xx_hlc_50Rnd_762x51_B_MG3
			{
				magazine="hlc_50Rnd_762x51_B_MG3";
				count=7;
			};
			class _xx_hlc_50Rnd_762x51_T_MG3
			{
				magazine="hlc_50Rnd_762x51_T_MG3";
				count=8;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine="ACE_HandFlare_White";
				count=10;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine="tf47_m3maaws_HEAT";
				count=4;
			};
			class _xx_bw_pzf44_rocket
			{
				magazine="bw_pzf44_rocket";
				count=20;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine="tf47_m3maaws_HE";
				count=4;
			};
			class _xx_tf47_m3maaws_SMOKE
			{
				magazine="tf47_m3maaws_SMOKE";
				count=10;
			};
			class _xx_tf47_m3maaws_ILLUM
			{
				magazine="tf47_m3maaws_ILLUM";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=30;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 10;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 10;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 10;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=30;
			};
		};
		class TransportItems
	    {
			class _xx_DemolitionBlock
			{
				name = "DemoCharge_Remote_Mag";
				count = 5;
			};
			class _xx_Clacker
			{
				name = "ACE_Clacker";
				count = 5;
			};
		};
		transportAmmo=100000;
		supplyRadius=3;
	};
	class TWC_Vehicle_Ammo_ColdWar: CUP_BAF_VehicleBox
	{
		author="FakeMatty";
		transportAmmo=100000;
		supplyRadius=10;
		ace_dragging_canDrag = 1;
	};