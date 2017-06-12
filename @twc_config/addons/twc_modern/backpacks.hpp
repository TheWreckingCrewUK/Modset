	class UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D;
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C;
	class UK3CB_BAF_B_Bergen_MTP_SL_L_A;
	class UK3CB_BAF_B_Kitbag_MTP;
	class UK3CB_BAF_B_Carryall_MTP;
	class UK3CB_BAF_B_Bergen_MTP_Medic_L_A;
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A;
	class UK3CB_BAF_B_Bergen_MTP_JTAC_L_A;
	
	class UK3CB_BAF_B_Bergen_MTP_PointMan_L_A;
	
	class TWC_Backpack_Modern_Sectionlead: UK3CB_BAF_B_Bergen_MTP_SL_L_A
	{
		scope = 1;
		mass = 59.84;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
		};
	};
	class TWC_Backpack_Modern_Rifleman: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
			class _xx_Stanag_Tracer
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 3;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_Grenade
			{
				magazine = "CUP_HandGrenade_L109A2_HE";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Modern_Grenadier: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
			class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 3;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_Grenade
			{
				magazine = "CUP_HandGrenade_L109A2_HE";
				count = 1;
			};
			class _xx_HE
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_Smoke_White
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 5;
			};
			class _xx_Smoke_Green
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
		};
	};
	class TWC_Backpack_Modern_Autorifleman_Kitbag: UK3CB_BAF_B_Kitbag_MTP
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Box_Stanag_T
			{
				magazine = "UK3CB_BAF_556_200Rnd_T";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Modern_Autorifleman: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Box_Stanag
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 2;
			};
			class _xx_Box_Stanag_T
			{
				magazine = "UK3CB_BAF_556_200Rnd_T";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Modern_2IC_Kitbag: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Box_Stanag
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 1;
			};
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 1;
			};
            class _xx_MarksmanMag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 2;
			};
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 8;
			};
			class _xx_Stanag_Tracer
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 3;
			};			
		};
	};
	class TWC_Backpack_Modern_2IC: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Box_Stanag
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 1;
			};
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 1;
			};
            class _xx_MarksmanMag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 2;
			};
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};			
		};
	};
	class TWC_Backpack_Modern_MachineGunner_Kitbag: UK3CB_BAF_B_Kitbag_MTP
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 1;
			};
			class _xx_Belt_T
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Modern_MachineGunner: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 1;
			};
			class _xx_Belt_T
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Marksman: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class TransportMagazines
			{
				class _xx_Belt
				{
					magazine = "UK3CB_BAF_762_100Rnd";
					count = 1;
				};
			};
		};
	};
	class TWC_Backpack_Modern_Platoon_Sergeant: UK3CB_BAF_B_Carryall_MTP
	{
		scope = 1;
		maximumLoad = 500;
		mass = 59.84;
		class TransportItems
		{
			class _xx_Wire_Cutters
			{
				name = "ACE_wirecutter";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
		};
	};
	class TWC_Backpack_Platoon_Mortar: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Mortar
			{
				magazine = "UK3CB_BAF_1Rnd_60mm_Mo_Shells";
				count = 9;
			};
		};
	};
	class TWC_Backpack_Modern_Medic: UK3CB_BAF_B_Bergen_MTP_Medic_L_A
	{
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
				count = 15;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 6;
			};
			class _xxACE_adenosine
			{
				name = "ACE_adenosine";
				count = 4;
			};
			class _xxACE_atropine
			{
				name = "ACE_atropine";
				count = 4;
			};
			class _xxACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _xxACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 15;
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
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
		};
	};
	class TWC_Backpack_Modern_MortarGunner: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 5;
			};		
		};
	};
	class TWC_Backpack_Modern_MortarAssistant: UK3CB_BAF_B_Bergen_MTP_SL_L_A
	{
		scope = 1;
		class TransportMagazines
		{
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 5;
			};
		};
	};
	class TWC_Backpack_Modern_Sniper: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Lapua
				{
					magazine = "UK3CB_BAF_762_100Rnd";
					count = 5;
				};
		};
	};
	class TWC_Backpack_Modern_Spotter: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A
	{
		scope = 1;
		class TransportItems
		{
			class _xx_Spotting
			{
				name = "ACE_SpottingScope";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Lapua
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 5;
			};
			class _xx_MarksmanMag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 2;
			};
		};
	};
	class TWC_Backpack_Modern_FAC: UK3CB_BAF_B_Bergen_MTP_JTAC_L_A
	{
		scope = 1;
		mass = 59.84;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_HE
			{
				magazine = "UK3CB_BAF_1Rnd_HE_Grenade_Shell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell_Red
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell_Green
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "1Rnd_SmokePurple_Grenade_shell";
				count = 3;
			};
		};
	};
//////////////////////////////  COIN  //////////////////////////////	
	class TWC_Backpack_Modern_Pointman: UK3CB_BAF_B_Bergen_MTP_PointMan_L_A
	{
		transportMaxWeapons = 2;
		scope = 1;
		class TransportMagazines
		{
            class _xx_Slug
			{
				magazine = "UK3CB_BAF_12G_Slugs";
				count = 5;
			};
            class _xx_Buck
			{
				magazine = "UK3CB_BAF_12G_Pellets";
				count = 7;
			};
		};
		class TransportWeapons
		{
            class _xx_Shotgun
			{
				weapon = "UK3CB_BAF_L128A1_Eotech";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Modern_Coin_2IC: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Box_Stanag
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 1;
			};
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 1;
			};
			class _xx_Belt_T
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 1;
			};
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 2;
			};	
            class _xx_Slug
			{
				magazine = "UK3CB_BAF_12G_Slugs";
				count = 2;
			};
            class _xx_Buck
			{
				magazine = "UK3CB_BAF_12G_Pellets";
				count = 2;
			};		
		};
	};