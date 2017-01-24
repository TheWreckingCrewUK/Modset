class CfgVehicles
{
	//Modern
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A;
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C;
	class UK3CB_BAF_B_Bergen_MTP_Radio_L_A;
	class UK3CB_BAF_B_Bergen_MTP_Radio_L_B;
	class UK3CB_BAF_B_Bergen_MTP_Medic_L_A;
	class UK3CB_BAF_B_Bergen_MTP_PointMan_L_A;
	class UK3CB_BAF_B_Bergen_MTP_SL_L_A;
	class UK3CB_BAF_B_Bergen_MTP_JTAC_L_A;
	class UK3CB_BAF_B_Kitbag_MTP;
	
	//Coldwar
	class CUP_B_AlicePack_Khaki;
	class CUP_BAF_VehicleBox;
	class CUP_B_Bergen_BAF;
	
	//1990 Woodland Temperate
	class UK3CB_BAF_B_Bergen_DPMT_SL_A;
	class UK3CB_BAF_B_Bergen_DPMT_Rifleman_A;
	class UK3CB_BAF_B_Bergen_DPMT_Rifleman_B;
	class UK3CB_BAF_B_Kitbag_DPMT;
	class UK3CB_BAF_B_Carryall_DPMT;
	
	//1990 Desert
	class UK3CB_BAF_B_Bergen_DDPM_SL_A;
	class UK3CB_BAF_B_Bergen_DDPM_Rifleman_A;
	class UK3CB_BAF_B_Bergen_DDPM_Rifleman_B;
	class UK3CB_BAF_B_Kitbag_DDPM;
	class UK3CB_BAF_B_Carryall_DDPM;
	
	//Russian Federation
	class rhs_sidor;
	class rhs_rpg_empty;
	
	//Ammo Boxes
	class Box_NATO_AmmoVeh_F;
	class B_CargoNet_01_ammo_F;
	
//*****************   Modern Backpack Symetrical *********************	
	
	class TWC_Backpack_Modern_Rifleman:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
		};
	};
	class TWC_Backpack_Modern_Automatic_Rifleman:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Box_Stanag
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 1;
			};
			class _xx_Box_Stanag_T
			{
				magazine = "UK3CB_BAF_556_200Rnd_T";
				count = 2;
			};
		};
	};
	class TWC_Backpack_Modern_Marksman:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 2;
			};
			class _xx_Belt_T
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Modern_Machine_Gunner:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 2;
			};
			class _xx_Belt_T
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 2;
			};
		};
	};
	class TWC_Backpack_Modern_Grenadier:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_HE
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 13;
			};
			class _xx_Flare
			{
				magazine = "UGL_FlareWhite_F";
				count = 3;
			};
			class _xx_Smoke_White
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
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
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
		};
	};		
	class TWC_Backpack_Modern_2IC:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Box_Stanag
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 2;
			};
			class _xx_Box_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 2;
			};
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 8;
			};			
		};
	};		
	class TWC_Backpack_Modern_Sectionlead:UK3CB_BAF_B_Bergen_MTP_SL_L_A
	{
		scope = 1;
		mass = 59.84;
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
	class TWC_Backpack_Modern_Platoon_Command:UK3CB_BAF_B_Bergen_MTP_SL_L_A
	{
		scope = 1;
		maximumLoad = 500;
		mass = 59.84;
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
	class TWC_Backpack_Modern_Platoon_Sergeant:UK3CB_BAF_B_Bergen_MTP_SL_L_A
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
	class TWC_Backpack_Modern_Medic:UK3CB_BAF_B_Bergen_MTP_Medic_L_A
	{
		scope = 1;
		class TransportItems
		{
            class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 25;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 15;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 25;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 25;
			};
			class _xxACE_adenosine
			{
				name = "ACE_adenosine";
				count = 8;
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
				count = 25;
			};
			class _xxACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 8;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 6;
			};
		};
	};
	class TWC_Backpack_Modern_Vehiclecommander:UK3CB_BAF_B_Kitbag_MTP
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
		};
	};
	class TWC_Backpack_Mechanized_Marksman:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
		};
	};
	class TWC_Backpack_Modern_MortarGunner:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};		
		};
	};
	class TWC_Backpack_Modern_MortarAssistant:UK3CB_BAF_B_Bergen_MTP_SL_L_A
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ACRE_PRC117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
		class TransportMagazines
		{
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
		};
	};
	class TWC_Backpack_Modern_Sniper:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
		};
	};
	class TWC_Backpack_Modern_Spotter:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_Spotting
			{
				name = "ACE_SpottingScope";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Modern_FAC:UK3CB_BAF_B_Bergen_MTP_JTAC_L_A
	{
		scope = 1;
		mass = 59.84;
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
	
	
//**************************** Modern Backpack Coin *********************
	class TWC_Backpack_Modern_Pointman:UK3CB_BAF_B_Bergen_MTP_PointMan_L_A
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
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
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
	class TWC_Backpack_Modern_Coin_2IC:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
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
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 1;
			};
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 10;
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
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};			
		};
	};
//******************** Cold War Backpack **********************	
	class TWC_Backpack_Cold_War_Rifleman:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Cold_War_2IC:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine = "UK3CB_BAF_762_20Rnd";
				count = 5;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 2;
			};
			class _xx_Belt_T
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Cold_War_Section:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};	
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine = "ACE_HandFlare_White";
				count = 3;
			};		
		};
	};
	class TWC_Backpack_Cold_War_MG:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 2;
			};
			class _xx_UK3CB_BAF_75Rnd
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 2;
			};			
		};
	};
	class TWC_Backpack_Cold_War_MGAS:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 2;
			};
			class _xx_UK3CB_BAF_75Rnd
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 2;
			};
		};
	};
	class TWC_Backpack_Cold_War_AT:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine = "tf47_m3maaws_HEAT";
				count = 1;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine = "tf47_m3maaws_HE";
				count = 1;
			};			
		};
	};
	class TWC_Backpack_Cold_War_AAT:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine = "tf47_m3maaws_HEAT";
				count = 2;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine = "tf47_m3maaws_HE";
				count = 1;
			};			
		};
	};
	class TWC_Backpack_Cold_War_Pilot:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ACRE_PRC117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Cold_War_Platoon_Command:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		maximumLoad = 500;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};	
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine = "ACE_HandFlare_White";
				count = 3;
			};		
		};
	};
	class TWC_Backpack_Cold_War_Platoon_Sergeant:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		maximumLoad = 500;
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
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};	
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine = "ACE_HandFlare_White";
				count = 3;
			};		
		};
	};
	class TWC_Backpack_Cold_Medic:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportItems
		{
            class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 25;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 15;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 25;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 25;
			};
			class _xxACE_adenosine
			{
				name = "ACE_adenosine";
				count = 8;
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
				count = 25;
			};
			class _xxACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 8;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 6;
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
	class TWC_Backpack_Cold_War_FAC:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 5;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 5;
			};	
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 5;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine = "ACE_HandFlare_White";
				count = 5;
			};	
		};
	};
	class TWC_Backpack_Cold_War_AA:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Stinger
			{
				magazine = "CUP_Stinger_M";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Cold_War_Milan:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportItems
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Milan
			{
				name = "TWC_MilanMissileItem";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Cold_War_MortarGunner:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_60MortarRound
			{
				magazine = "UK3CB_BAF_1Rnd_60mm_Mo_Shells";
				count = 10;
			};
		};
	};
//********************** 1990 Backpack ********************
	class TWC_Backpack_1990_Platoon_Command:UK3CB_BAF_B_Bergen_DPMT_SL_A
	{
		scope = 1;
		maximumLoad = 500;
		mass = 59.84;
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
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1990_Platoon_Sergeant:UK3CB_BAF_B_Carryall_DPMT
	{
		scope = 1;
		maximumLoad = 1000;
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
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1990_Medic:UK3CB_BAF_B_Bergen_DPMT_Rifleman_B
	{
		scope = 1;
		class TransportItems
		{
           class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 25;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 15;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 25;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 25;
			};
			class _xxACE_adenosine
			{
				name = "ACE_adenosine";
				count = 8;
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
				count = 25;
			};
			class _xxACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 8;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 6;
			};
		};
	};

	class TWC_Backpack_1990_Sectionlead:UK3CB_BAF_B_Bergen_DPMT_SL_A
	{
		scope = 1;
		mass = 59.84;
		maximumLoad = 500;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1990_2IC:UK3CB_BAF_B_Bergen_DPMT_Rifleman_B
	{
		scope = 1;
		class TransportMagazines
		{
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 25;
			};			
		};
	};
	class TWC_Backpack_1990_Rifleman:UK3CB_BAF_B_Bergen_DPMT_Rifleman_A
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 7;
			};
		};
		class TransportWeapons
		{
			class _xx_LAW
			{
				weapon = "HAFM_LAW";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_Gunner:UK3CB_BAF_B_Kitbag_DPMT
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 13;
			};
			class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 4;
			};
		};
	};
	class TWC_Backpack_1990_AT:UK3CB_BAF_B_Bergen_DPMT_Rifleman_A
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 7;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine = "tf47_m3maaws_HEAT";
				count = 1;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine = "tf47_m3maaws_HE";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_AAT:UK3CB_BAF_B_Bergen_DPMT_Rifleman_A
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 7;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine = "tf47_m3maaws_HEAT";
				count = 2;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine = "tf47_m3maaws_HE";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_Pilot:UK3CB_BAF_B_Kitbag_DPMT
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ACRE_PRC117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_Milan:UK3CB_BAF_B_Bergen_DPMT_Rifleman_B
	{
		scope = 1;
		class TransportItems
		{
			class _xx_Milan
			{
				name = "TWC_MilanMissileItem";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_Mortar:UK3CB_BAF_B_Bergen_DPMT_Rifleman_B
	{
		scope = 1;
		class TransportItems
		{
			class _xx_60MortarRound
			{
				name = "UK3CB_BAF_1Rnd_60mm_Mo_Shells";
				count = 10;
			};
		};
	};
//*************************1990 DESERT ********************
	class TWC_Backpack_1990_D_Platoon_Command:UK3CB_BAF_B_Bergen_DDPM_SL_A
	{
		scope = 1;
		maximumLoad = 500;
		mass = 59.84;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1990_D_Platoon_Sergeant:UK3CB_BAF_B_Carryall_DDPM
	{
		scope = 1;
		maximumLoad = 1000;
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
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1990_D_Medic:UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
	{
		scope = 1;
		class TransportItems
		{
           class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 25;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 15;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 25;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 25;
			};
			class _xxACE_adenosine
			{
				name = "ACE_adenosine";
				count = 8;
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
				count = 25;
			};
			class _xxACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 8;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 6;
			};
		};
	};

	class TWC_Backpack_1990_D_Sectionlead:UK3CB_BAF_B_Bergen_DDPM_SL_A
	{
		scope = 1;
		mass = 59.84;
		maximumLoad = 500;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1990_D_2IC:UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
	{
		scope = 1;
		class TransportMagazines
		{
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 25;
			};			
		};
	};
	class TWC_Backpack_1990_D_Rifleman:UK3CB_BAF_B_Bergen_DDPM_Rifleman_A
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 7;
			};
		};
		class TransportWeapons
		{
			class _xx_LAW
			{
				weapon = "HAFM_LAW";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_D_AT:UK3CB_BAF_B_Bergen_DDPM_Rifleman_A
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 7;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine = "tf47_m3maaws_HEAT";
				count = 1;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine = "tf47_m3maaws_HE";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_D_AAT:UK3CB_BAF_B_Bergen_DDPM_Rifleman_A
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 7;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine = "tf47_m3maaws_HEAT";
				count = 2;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine = "tf47_m3maaws_HE";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_D_Gunner:UK3CB_BAF_B_Kitbag_DDPM
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 13;
			};
			class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 4;
			};
		};
	};
	class TWC_Backpack_1990_D_Pilot:UK3CB_BAF_B_Kitbag_DDPM
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ACRE_PRC117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_D_Milan:UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
	{
		scope = 1;
		class TransportItems
		{
			class _xx_Milan
			{
				name = "TWC_MilanMissileItem";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_D_Mortar:UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
	{
		scope = 1;
		class TransportItems
		{
			class _xx_60MortarRound
			{
				name = "UK3CB_BAF_1Rnd_60mm_Mo_Shells";
				count = 10;
			};
		};
	};
//*************************USSR****************************
	class TWC_Backpack_USSR_Sectionlead:rhs_sidor
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ACRE_PRC117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "rhs_30Rnd_545x39_7N10_AK";
				count = 1;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
	};
	class TWC_Backpack_USSR_Rifleman:rhs_sidor
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "rhs_30Rnd_545x39_7N10_AK";
				count = 7;
			};
		};
	};
	class TWC_Backpack_USSR_Grenadier:rhs_rpg_empty
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "rhs_30Rnd_545x39_7N10_AK";
				count = 5;
			};
			class _xx_rpg
			{
				magazine = "rhs_rpg7_PG7VL_mag";
				count = 3;
			};
		};
	};
	class TWC_Backpack_USSR_Seniorrifleman:rhs_sidor
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "rhs_30Rnd_545x39_7N10_AK";
				count = 15;
			};
			class _xx_Belt
			{
				magazine = "rhs_100Rnd_762X54mmR";
				count = 2;
			};
		};
	};
	class TWC_Backpack_USSR_Grenadierassistant:rhs_rpg_empty
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "rhs_30Rnd_545x39_7N10_AK";
				count = 5;
			};
			class _xx_Rpg
			{
				magazine = "rhs_rpg7_PG7VL_mag";
				count = 3;
			};
		};
	};
	class TWC_Backpack_USSR_Automaticrifleman:rhs_sidor
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Box_Stanag
			{
				magazine = "rhs_100Rnd_762X54mmR";
				count = 3;
			};
		};
	};
	class TWC_Backpack_USSR_Vehiclecommander:rhs_sidor
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ACRE_PRC117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
	};
	class TWC_Backpack_USSR_AATeam:rhs_rpg_empty
	{
		scope = 1;
		maximumLoad = 500;
		class TransportMagazines
		{
			class _xx_Strela
			{
				magazine = "CUP_Strela_2_M";
				count = 1;
			};
		};
	};
//*************************USA 1970****************************
	class usa_1970_backpack_grenadier: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine = "CUP_1Rnd_HE_M203";
				count = 10;
			};
			class _xx_CUP_1Rnd_Smoke_M203
			{
				magazine = "CUP_1Rnd_Smoke_M203";
				count = 10;
			};
			class _xx_CUP_1Rnd_SmokeRed_M203
			{
				magazine = "CUP_1Rnd_SmokeRed_M203";
				count = 6;
			};
			class _xx_CUP_1Rnd_SmokeGreen_M203
			{
				magazine = "CUP_1Rnd_SmokeGreen_M203";
				count = 6;
			};
			class _xx_CUP_1Rnd_SmokeYellow_M203
			{
				magazine = "CUP_1Rnd_SmokeYellow_M203";
				count = 6;
			};
			class _xx_CUP_1Rnd_StarCluster_Red_M203
			{
				magazine = "CUP_1Rnd_StarCluster_Red_M203";
				count = 6;
			};
			class _xx_CUP_1Rnd_StarCluster_Green_M203
			{
				magazine = "CUP_1Rnd_StarCluster_Green_M203";
				count = 6;
			};
			class _xx_CUP_1Rnd_StarCluster_Yellow_M203
			{
				magazine = "CUP_1Rnd_StarCluster_Yellow_M203";
				count = 6;
			};
		};
	};

//********************** Ammo Boxes ***********************
	class TWC_Operation_AmmoBox_Template: CUP_BAF_VehicleBox
	{
		author = "[TWC] Jayman";
		scope = 0;
		transportAmmo=1000000;
		supplyRadius=3;
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 100;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 50;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 100;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 100;
			};
			class _xxACE_adenosine
			{
				name = "ACE_adenosine";
				count = 30;
			};
			class _xxACE_atropine
			{
				name = "ACE_atropine";
				count = 30;
			};
			class _xxACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 30;
			};
			class _xxACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 100;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 50;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 50;
			};
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
	};	
	class TWC_modern_Operation_Ammobox:TWC_Operation_AmmoBox_Template
	{
		author="FakeMatty";
		displayName="TWC Modern AmmoBox";
		scope = 2;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_556_30Rnd
			{
				magazine="UK3CB_BAF_556_30Rnd";
				count=100;
			};
			class _xx_UK3CB_BAF_556_30Rnd_T
			{
				magazine="UK3CB_BAF_556_30Rnd_T";
				count=50;
			};
			class _xx_UK3CB_BAF_75Rnd
			{
				magazine="UK3CB_BAF_762_100Rnd";
				count=30;
			};
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine="UK3CB_BAF_762_100Rnd_T";
				count=10;
			};
			class _xx_UK3CB_BAF_20Rnd
			{
				magazine="UK3CB_BAF_762_L42A1_20Rnd";
				count=30;
			};
			class _xx_UK3CB_BAF_20Rnd_T
			{
				magazine="UK3CB_BAF_762_L42A1_20Rnd_T";
				count=20;
			};
			class _xx_UK3CB_BAF_556_200Rnd
			{
				magazine="UK3CB_BAF_556_200Rnd";
				count=30;
			};
			class _xx_UK3CB_BAF_556_200Rnd_T
			{
				magazine="UK3CB_BAF_556_200Rnd_T";
				count=30;
			};
			class _xx_UK3CB_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=60;
			};
			class _xx_UK3CB_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=20;
			};
			class _xx_UK3CB_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=20;
			};
			class _xx_Smoke_Green
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 20;
			};
			class _xx_Smoke_Red
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 20;
			};
			class _xx_Smoke_Blue
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count = 30;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count = 25;
			};
			class _xx_60MortarRound
			{
				magazine="UK3CB_BAF_1Rnd_60mm_Mo_Shells";
				count = 60;
			};
			class _xx_60MortarRound_Smoke
			{
				magazine="UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White";
				count = 20;
			};
			class _xx_60MortarRound_Flare
			{
				magazine="UK3CB_BAF_1Rnd_60mm_Mo_Flare_White";
				count = 20;
			};
			class _xx_338Lapua
			{
				magazine = "UK3CB_BAF_338_5Rnd";
				count = 20;
			};
			class _xx_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 10;
			};
			class _xx_Chemlight_Green
			{
				magazine = "Chemlight_green";
				count = 20;
			};
			class _xx_Chemlight_Blue
			{
				magazine = "Chemlight_blue";
				count = 20;
			};
			class _xx_Chemlight_Red
			{
				magazine = "Chemlight_red";
				count = 20;
			};
		};
		class TransportWeapons
		{
			class _xx_NLAW
				{
					Weapon = "launch_NLAW_F";
					count = 10;
				};
			class _xx_LAW
				{
					Weapon = "HAFM_LAW";
					count = 10;
				};
		};
	};
	class TWC_modern_Operation_Coin_Ammobox:TWC_Operation_AmmoBox_Template
	{
		author="FakeMatty";
		displayName="TWC Modern COIN AmmoBox";
		scope = 2;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_556_30Rnd
			{
				magazine="UK3CB_BAF_556_30Rnd";
				count=100;
			};
			class _xx_UK3CB_BAF_556_30Rnd_T
			{
				magazine="UK3CB_BAF_556_30Rnd_T";
				count=50;
			};
			class _xx_UK3CB_BAF_75Rnd
			{
				magazine="UK3CB_BAF_762_100Rnd";
				count=30;
			};
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine="UK3CB_BAF_762_100Rnd_T";
				count=10;
			};
			class _xx_UK3CB_BAF_20Rnd
			{
				magazine="UK3CB_BAF_762_L42A1_20Rnd";
				count=30;
			};
			class _xx_UK3CB_BAF_20Rnd_T
			{
				magazine="UK3CB_BAF_762_L42A1_20Rnd_T";
				count=20;
			};
			class _xx_UK3CB_BAF_556_200Rnd
			{
				magazine="UK3CB_BAF_556_200Rnd";
				count=30;
			};
			class _xx_UK3CB_BAF_556_200Rnd_T
			{
				magazine="UK3CB_BAF_556_30Rnd_T";
				count=30;
			};
			class _xx_UK3CB_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=60;
			};
			class _xx_UK3CB_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=20;
			};
			class _xx_UK3CB_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=20;
			};
			class _xx_Smoke_Green
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 20;
			};
			class _xx_Smoke_Red
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 20;
			};
			class _xx_Smoke_Blue
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=30;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=25;
			};
			class _xx_Slug
			{
				magazine = "UK3CB_BAF_12G_Slugs";
				count = 30;
			};
            class _xx_Buck
			{
				magazine = "UK3CB_BAF_12G_Pellets";
				count = 30;
			};
			class _xx_60MortarRound
			{
				magazine="UK3CB_BAF_1Rnd_60mm_Mo_Shells";
				count = 60;
			};
			class _xx_60MortarRound_Smoke
			{
				magazine="UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White";
				count = 20;
			};
			class _xx_60MortarRound_Flare
			{
				magazine="UK3CB_BAF_1Rnd_60mm_Mo_Flare_White";
				count = 20;
			};
			class _xx_338Lapua
			{
				magazine = "UK3CB_BAF_338_5Rnd";
				count = 20;
			};
			class _xx_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 10;
			};
			class _xx_Chemlight_Green
			{
				magazine = "Chemlight_green";
				count = 20;
			};
			class _xx_Chemlight_Blue
			{
				magazine = "Chemlight_blue";
				count = 20;
			};
			class _xx_Chemlight_Red
			{
				magazine = "Chemlight_red";
				count = 20;
			};
		};
		class TransportWeapons
		{
			class _xx_NLAW
				{
					Weapon = "launch_NLAW_F";
					count = 5;
				};
			class _xx_LAW
			{
				Weapon = "HAFM_LAW";
				count = 10;
			};
		};
	};
	class TWC_modern_Operation_ColdWar_Ammobox:TWC_Operation_AmmoBox_Template
	{
		author="FakeMatty";
		displayName="TWC Cold War AmmoBox";
		scope = 2;
		class TransportMagazines
		{
			class _xx_Sterling_34Rnd
			{
				magazine = "34_rnd_sterling_mag";
				count = 25;
			};
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine="UK3CB_BAF_762_20Rnd";
				count=100;
			};
			class _xx_UK3CB_BAF_75Rnd
			{
				magazine="UK3CB_BAF_762_100Rnd";
				count=30;
			};
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine="UK3CB_BAF_762_100Rnd_T";
				count=10;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine="ACE_HandFlare_White";
				count=10;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine="tf47_m3maaws_HEAT";
				count=10;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine="tf47_m3maaws_HE";
				count=10;
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
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=25;
			};
			class _xx_60MortarRound
			{
				magazine="UK3CB_BAF_1Rnd_60mm_Mo_Shells";
				count = 60;
			};
			class _xx_60MortarRound_Smoke
			{
				magazine="UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White";
				count = 20;
			};
			class _xx_60MortarRound_Flare
			{
				magazine="UK3CB_BAF_1Rnd_60mm_Mo_Flare_White";
				count = 20;
			};
		};
		class TransportWeapons
		{
			class _xx_LAW
			{
				Weapon = "HAFM_LAW";
				count = 10;
			};
		};
	};
	class TWC_modern_Operation_1990_Ammobox:TWC_Operation_AmmoBox_Template
	{
		author="FakeMatty";
		displayName="TWC 1990 Symetrical AmmoBox";
		scope = 2;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_556_30Rnd
			{
				magazine="UK3CB_BAF_556_30Rnd";
				count=200;
			};
			class _xx_UK3CB_BAF_556_30Rnd_T
			{
				magazine="UK3CB_BAF_556_30Rnd_T";
				count=100;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=60;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=50;
			};
			class _xx_60MortarRound
			{
				magazine="UK3CB_BAF_1Rnd_60mm_Mo_Shells";
				count = 60;
			};
			class _xx_60MortarRound_Smoke
			{
				magazine="UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White";
				count = 20;
			};
			class _xx_60MortarRound_Flare
			{
				magazine="UK3CB_BAF_1Rnd_60mm_Mo_Flare_White";
				count = 20;
			};
			class _xx_338Lapua
			{
				magazine = "UK3CB_BAF_338_5Rnd";
				count = 20;
			};
			class _xx_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 10;
			};
			class _xx_Chemlight_Green
			{
				magazine = "Chemlight_green";
				count = 20;
			};
			class _xx_Chemlight_Blue
			{
				magazine = "Chemlight_blue";
				count = 20;
			};
			class _xx_Chemlight_Red
			{
				magazine = "Chemlight_red";
				count = 20;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine="ACE_HandFlare_White";
				count=20;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine="tf47_m3maaws_HEAT";
				count=10;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine="tf47_m3maaws_HE";
				count=10;
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
		};
		class TransportWeapons
		{
			class _xx_LAW
			{
				Weapon = "HAFM_LAW";
				count = 20;
			};
		};
	};
	class TWC_modern_USSR_Ammobox:TWC_Operation_AmmoBox_Template
	{
		author="FakeMatty";
		displayName="TWC USSR AmmoBox";
		scope = 2;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine="rhs_30Rnd_545x39_7N10_AK";
				count=100;
			};
			class _xx_Box_Stanag
			{
				magazine="rhs_100Rnd_762X54mmR";
				count=30;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine="ACE_HandFlare_White";
				count=10;
			};
			class _xx_rpg
			{
				magazine="rhs_rpg7_PG7VL_mag";
				count=30;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=30;
			};
			class _xx_Grenade
			{
				magazine="rhs_mag_rgd5";
				count=25;
			};
		};
	};
	class TWC_modern_Warrior_Ammobox:CUP_BAF_VehicleBox
	{
		author="FakeMatty";
		displayName="TWC Warrior AmmoBox";
		class TransportMagazines
		{
			
		};
		class TransportItems
	    {
			class _xx_TWC_30mm_HE_item
			{
				name =  "TWC_30mm_HE_item";
				count = 250;
			};
			class _xx_TWC_30mm_AP_item
			{
				name = "TWC_30mm_AP_item";
				count = 250;
			};
		};
	};
};