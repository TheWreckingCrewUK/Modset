class CfgPatches
{
	class Addons_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"uk3cb_baf_weapons",
			"uk3cb_baf_equipment",
			"cup_weapons_ammoboxes"
		};
		version="1";
		projectName="TWC";
		author="FakeMatty";
	};
};
	
class cfgWeapons
{
	class UK3CB_BAF_L1A1_Wood;
	class UK3CB_BAF_L85A2;
	class UK3CB_BAF_L85A2_RIS_AFG;
	class UK3CB_BAF_L85A2_RIS;
	class UK3CB_BAF_L110A2;
	class UK3CB_BAF_L129A1_Grippod;
	class UK3CB_BAF_L85A2_UGL;
	class UK3CB_BAF_L128A1;
	class UK3CB_BAF_L7A2;
	class UK3CB_BAF_L22A2;
	class hlc_rifle_SLR;
	class CUP_launch_FIM92Stinger;
	class RKSL_optic_LDS_PIP;
	class tf47_m3maaws;
	class kio_Elcan_reflex;
	class UK3CB_BAF_L86A2;
	class UK3CB_BAF_SUSAT_3D;
	class rhs_weap_ak74m_dtk; //base ussr AK
	class rhs_acc_1p29; //ussr section lead and 2IC scope
	class ACRE_PRC117F;
	
	class twc_PRC325: ACRE_PRC117F
	{
		scope = 1;
		author = "jayman";
		displayName = "UK/HF PRC 325";
		mass = 10;
	};
	
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
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="tf47_optic_m3maaws";
			};
		};
	};
	class UK3CB_BAF_L85A2_RIS_AFG_ELCAN3D:UK3CB_BAF_L85A2_RIS
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="RKSL_optic_LDS_PIP";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	class UK3CB_BAF_L110A2_ELCAN3D:UK3CB_BAF_L110A2
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L110A2";
				item="RKSL_optic_LDS_PIP";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L110A2";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	class UK3CB_BAF_L129A1_Grippod_TA648:UK3CB_BAF_L129A1_Grippod
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_TA648_308";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	class UK3CB_BAF_L128A1_Eotech:UK3CB_BAF_L128A1
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L128A1";
				item="UK3CB_BAF_Eotech";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L128A1";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	class UK3CB_BAF_L85A2_UGL_ELCAN3D:UK3CB_BAF_L85A2_UGL
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="RKSL_optic_LDS_PIP";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	class UK3CB_BAF_L7A2_ELCAN3D:UK3CB_BAF_L7A2
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L7A2";
				item="RKSL_optic_LDS_PIP";
			};
		};
	};
	class UK3CB_BAF_L22A2_SUSAT3D:UK3CB_BAF_L22A2
	{
		scope = 1;
		author="Jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="UK3CB_BAF_SUSAT_3D";
			};
		};
	};
	class hlc_rifle_SLR_Suit:hlc_rifle_SLR
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="hlc_optic_suit";
			};
		};
	};
	class FIMStingerA:CUP_launch_FIM92Stinger
	{
		author="Jayman";
		displayName="Stinger A";
	};
	class UK3CB_BAF_L86A1:UK3CB_BAF_L86A2
	{
		displayName = "L86A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
	};
	class UK3CB_BAF_L86A1_SUSAT3D:UK3CB_BAF_L86A2
	{
		scope = 1;
		displayName = "L86A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="UK3CB_BAF_SUSAT_3D";
			};
		};
	};
	class UK3CB_BAF_L85A1:UK3CB_BAF_L85A2
	{
		displayName = "L85A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
	};
	class UK3CB_BAF_L85A1_SUSAT3D:UK3CB_BAF_L85A2
	{
		scope = 1;
		displayName = "L85A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="UK3CB_BAF_SUSAT_3D";
			};
		};
	};
	class UK3CB_BAF_L85A1_SUSAT3D_Lazer:UK3CB_BAF_L85A2
	{
		scope = 1;
		displayName = "L85A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="UK3CB_BAF_SUSAT_3D";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	class UK3CB_BAF_L85A2_UGL_SUSAT3D:UK3CB_BAF_L85A2_UGL
	{
		scope = 1;
		displayName = "L85A1 W/ L123A2 Ladder";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_SUSAT_3D";
			};
		};
	};	
	class USSR_AK74_1p29:rhs_weap_ak74m_dtk
	{
		scope = 1;
		author="Jayman";
		class LinkedItems
		{
			class linkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_acc_1p29";
			};
		};
	};
};
class CfgVehicles
{
	
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C;
	class UK3CB_BAF_B_Bergen_MTP_Radio_L_A;
	class UK3CB_BAF_B_Bergen_MTP_Radio_L_B;
	class UK3CB_BAF_B_Bergen_MTP_Medic_L_A;
	class UK3CB_BAF_B_Bergen_MTP_PointMan_L_A;
	class UK3CB_BAF_B_Bergen_MTP_SL_L_A;	
	class CUP_B_AlicePack_Khaki;
	class CUP_BAF_VehicleBox;
	class CUP_B_Bergen_BAF;
	
	class UK3CB_BAF_B_Bergen_DPMT_SL_A;
	class UK3CB_BAF_B_Bergen_DPMT_Rifleman_A;
	class UK3CB_BAF_B_Bergen_DPMT_Rifleman_B;
	class UK3CB_BAF_B_Kitbag_DPMT;
	
	class UK3CB_BAF_B_Bergen_DDPM_SL_A;
	class UK3CB_BAF_B_Bergen_DDPM_Rifleman_A;
	class UK3CB_BAF_B_Bergen_DDPM_Rifleman_B;
	class UK3CB_BAF_B_Kitbag_DDPM;
	
	class rhs_sidor;
	class rhs_rpg_empty;
	class B_AssaultPack_blk;
	class Box_NATO_AmmoVeh_F;
	class B_CargoNet_01_ammo_F;
	
//*****************   Modern Backpack Symetrical *********************	
	
	class TWC_Backpack_Modern_Rifleman:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
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
	};
	class TWC_Backpack_Modern_Automatic_Rifleman:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Box_Stanag
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 3;
			};
		};
	};
	class TWC_Backpack_Modern_Marksman:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Marksman_Mag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 6;
			};
			class _xx_Marksman_Mag_T
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd_T";
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
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 3;
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
				count = 12;
			};
			class _xx_Flare
			{
				magazine = "UGL_FlareWhite_F";
				count = 3;
			};
			class _xx_Smoke
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
		};
	};		
	class TWC_Backpack_Modern_2IC:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
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
				count = 14;
			};			
		};
	};		
	class TWC_Backpack_Modern_Sectionlead:UK3CB_BAF_B_Bergen_MTP_SL_L_A
	{
		scope = 1;
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
	class TWC_Backpack_Modern_Platoon_Command:UK3CB_BAF_B_Bergen_MTP_Radio_L_B
	{
		scope = 1;
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
	class TWC_Backpack_Modern_Platoon_Sergeant:UK3CB_BAF_B_Bergen_MTP_Radio_L_B
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
	class TWC_Backpack_Modern_Vehiclecommander:B_AssaultPack_blk
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
	class TWC_Backpack_Mechanized_2IC:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Box_Stanag
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 1;
			};
			class _xx_Box_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 1;
			};
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 14;
			};			
		};
	};
	class TWC_Backpack_Mechanized_Marksman:UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Marksman_Mag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 6;
			};
			class _xx_Marksman_Mag_T
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd_T";
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
	
	
//**************************** Modern Backpack Coin *********************
	class TWC_Backpack_Modern_Pointman:UK3CB_BAF_B_Bergen_MTP_PointMan_L_A
	{
		transportMaxWeapons = 2;
		scope = 1;
		class TransportMagazines
		{
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 3;
			};
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
			class _xx_twc_vallon
			{
				weapon = "twc_vallon";
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
				count = 14;
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
//******************** Cold War Backpack **********************	
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
	};
	class TWC_Backpack_Cold_War_Rifleman:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine = "UK3CB_BAF_762_20Rnd";
				count = 7;
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
			class _xx_34_rnd_sterling_mag   
			{
				magazine = "34_rnd_sterling_mag";
				count = 8;
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
	class TWC_Backpack_Cold_War_MG:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 2;
			};
			class _xx_UK3CB_BAF_75Rnd
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 1;
			};			
		};
	};
	class TWC_Backpack_Cold_War_MGAS:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_75Rnd
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 2;
			};
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 2;
			};
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine = "UK3CB_BAF_762_20Rnd";
				count = 5;
			};
		};
	};
	class TWC_Backpack_Cold_War_AT:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_34_rnd_sterling_mag
			{
				magazine = "34_rnd_sterling_mag";
				count = 4;
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
			class _xx_34_rnd_sterling_mag
			{
				magazine = "34_rnd_sterling_mag";
				count = 8;
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
			class _xx_34_rnd_sterling_mag
			{
				magazine = "34_rnd_sterling_mag";
				count = 8;
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
	class TWC_Backpack_Cold_War_FAC:CUP_B_AlicePack_Khaki
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
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine = "UK3CB_BAF_762_20Rnd";
				count = 7;
			};
		};
	};
	class TWC_Backpack_Cold_War_AA:CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stinger
			{
				magazine = "CUP_Stinger_M";
				count = 1;
			};
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine = "UK3CB_BAF_762_20Rnd";
				count = 6;
			};
		};
	};
	class TWC_Backpack_Cold_War_Milan:CUP_B_AlicePack_Khaki
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
//********************** 1990 Backpack ********************
	class TWC_Backpack_1990_Platoon_Command:UK3CB_BAF_B_Bergen_DPMT_SL_A
	{
		scope = 1;
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
	class TWC_Backpack_1990_Platoon_Sergeant:UK3CB_BAF_B_Bergen_DPMT_SL_A
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
	};
	class TWC_Backpack_1990_Grenadier:UK3CB_BAF_B_Bergen_DPMT_Rifleman_A
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 7;
			};
			class _xx_HE
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 12;
			};
			class _xx_Flare
			{
				magazine = "UGL_FlareWhite_F";
				count = 3;
			};
			class _xx_Smoke
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
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
	class TWC_Backpack_1990_D_Platoon_Sergeant:UK3CB_BAF_B_Bergen_DDPM_SL_A
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
	};
	class TWC_Backpack_1990_D_Grenadier:UK3CB_BAF_B_Bergen_DDPM_Rifleman_A
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 7;
			};
			class _xx_HE
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 12;
			};
			class _xx_Flare
			{
				magazine = "UGL_FlareWhite_F";
				count = 3;
			};
			class _xx_Smoke
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
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

//********************** Ammo Boxes ***********************
	class TWC_modern_Operation_Ammobox:CUP_BAF_VehicleBox
	{
		author="FakeMatty";
		displayName="TWC Modern AmmoBox";
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
			class _xx_UK3CB_BAF_556_30Rnd
			{
				magazine="UK3CB_BAF_556_200Rnd";
				count=30;
			};
			class _xx_UK3CB_BAF_556_30Rnd_T
			{
				magazine="UK3CB_BAF_556_30Rnd_T";
				count=30;
			};
			class _xx_UK3CB_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=40;
			};
			class _xx_UK3CB_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=10;
			};
			class _xx_UK3CB_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=20;
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
		};
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 50;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 25;
			};
			class _xx_Epipen
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _xx_ACE_bloodIV_500
			{
				name = "ACE_bloodIV_500";
				count = 40;
			};
			class _xx_MortarRound
			{
				name = "UK3CB_BAF_1Rnd_81mm_Mo_shells";
				count = 40;
			};
		};
		class TransportWeapons
		{
			class _xx_NLAW
				{
					Weapon = "UK3CB_BAF_NLAW_Launcher";
					count = 10;
				};
			class _xx_LAW
				{
					Weapon = "HAFM_LAW";
					count = 10;
				};
		};
		transportAmmo=1000000;
		supplyRadius=3;
	};
	class TWC_modern_Operation_Coin_Ammobox:TWC_modern_Operation_Ammobox
	{
		author="FakeMatty";
		displayName="TWC Modern COIN AmmoBox";
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
			class _xx_UK3CB_BAF_556_30Rnd
			{
				magazine="UK3CB_BAF_556_200Rnd";
				count=30;
			};
			class _xx_UK3CB_BAF_556_30Rnd_T
			{
				magazine="UK3CB_BAF_556_30Rnd_T";
				count=30;
			};
			class _xx_UK3CB_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=40;
			};
			class _xx_UK3CB_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=10;
			};
			class _xx_UK3CB_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=20;
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
				count = 50;
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
		};
		class TransportWeapons
		{
			class _xx_LAW
			{
				Weapon = "HAFM_LAW";
				count = 10;
			};
		};
		transportAmmo=1000000;
		supplyRadius=3;
	};
	class TWC_modern_Operation_ColdWar_Ammobox:TWC_modern_Operation_Ammobox
	{
		author="FakeMatty";
		displayName="TWC Cold War AmmoBox";
		class TransportMagazines
		{
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
				count = 50;
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
		class TransportItems
	    {
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 50;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 25;
			};
			class _xx_Epipen
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _xx_ACE_bloodIV_500
			{
				name = "ACE_bloodIV_500";
				count = 40;
			};
			class _xx_MortarRound
			{
				name = "UK3CB_BAF_1Rnd_81mm_Mo_shells";
				count = 40;
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
		transportAmmo=1000000;
		supplyRadius=3;
	};
	class TWC_modern_Operation_1990_Ammobox:TWC_modern_Operation_Ammobox
	{
		author="FakeMatty";
		displayName="TWC 1990 Symetrical AmmoBox";
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
			class _xx_UK3CB_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=80;
			};
			class _xx_UK3CB_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=20;
			};
			class _xx_UK3CB_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=40;
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
				count = 50;
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
		};
		class TransportWeapons
		{
			class _xx_LAW
			{
				Weapon = "HAFM_LAW";
				count = 10;
			};
			class _xx_AT4
			{
				Weapon = "rhs_weap_M136_hedp";
				count = 10;
			};
		};		
		transportAmmo=1000000;
		supplyRadius=3;
	};
	class TWC_modern_USSR_Ammobox:CUP_BAF_VehicleBox
	{
		author="FakeMatty";
		displayName="TWC USSR AmmoBox";
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
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 50;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 25;
			};
			class _xx_Epipen
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _xx_ACE_bloodIV_500
			{
				name = "ACE_bloodIV_500";
				count = 40;
			};
			transportAmmo=1000000;
			supplyRadius=3;
		};
	};
	class TWC_Vehicle_Ammo:Box_NATO_AmmoVeh_F
	{
		transportAmmo=1000000;
		supplyRadius=10;
	};
	class TWC_modern_Warrior_Ammobox:CUP_BAF_VehicleBox
	{
		author="FakeMatty";
		displayName="TWC Warrior AmmoBox";
		class TransportMagazines
		{};
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
// //////////////////////////////////////////////////////
//                                                     //
//                     Sling Load Crates               //
//                                                     //
/////////////////////////////////////////////////////////
	class TWC_modern_Operation_SlingBox:B_CargoNet_01_ammo_F
	{
		author = "jayman";
		displayName = "TWC Modern SlingBox";
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_556_30Rnd
			{
				magazine="UK3CB_BAF_556_30Rnd";
				count=32;
			};
			class _xx_UK3CB_BAF_556_30Rnd_T
			{
				magazine="UK3CB_BAF_556_30Rnd_T";
				count=8;
			};
			class _xx_UK3CB_BAF_75Rnd
			{
				magazine="UK3CB_BAF_762_100Rnd";
				count=9;
			};
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine="UK3CB_BAF_762_100Rnd_T";
				count=3;
			};
			class _xx_UK3CB_BAF_20Rnd
			{
				magazine="UK3CB_BAF_762_L42A1_20Rnd";
				count=8;
			};
			class _xx_UK3CB_BAF_20Rnd_T
			{
				magazine="UK3CB_BAF_762_L42A1_20Rnd_T";
				count=2;
			};
			class _xx_UK3CB_BAF_556_30Rnd
			{
				magazine="UK3CB_BAF_556_200Rnd";
				count=4;
			};
			class _xx_UK3CB_BAF_556_30Rnd_T
			{
				magazine="UK3CB_BAF_556_30Rnd_T";
				count=2;
			};
			class _xx_UK3CB_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=12;
			};
			class _xx_UK3CB_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=3;
			};
			class _xx_UK3CB_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=16;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=24;
			};
		};
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 48;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 16;
			};
			class _xx_Epipen
			{
				name = "ACE_epinephrine";
				count = 2;
			};
			class _xx_ACE_SalineIV_500
			{
				name = "ACE_salineIV_500";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_NLAW
				{
					Weapon = "UK3CB_BAF_NLAW_Launcher";
					count = 2;
				};
			class _xx_LAW
				{
					Weapon = "HAFM_LAW";
					count = 2;
				};
		};
	};
	class TWC_modern_Operation_Coin_SlingBox:B_CargoNet_01_ammo_F
	{
		author = "jayman";
		displayName = "TWC Modern COIN SlingBox";
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_556_30Rnd
			{
				magazine="UK3CB_BAF_556_30Rnd";
				count=32;
			};
			class _xx_UK3CB_BAF_556_30Rnd_T
			{
				magazine="UK3CB_BAF_556_30Rnd_T";
				count=8;
			};
			class _xx_UK3CB_BAF_75Rnd
			{
				magazine="UK3CB_BAF_762_100Rnd";
				count=9;
			};
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine="UK3CB_BAF_762_100Rnd_T";
				count=3;
			};
			class _xx_UK3CB_BAF_20Rnd
			{
				magazine="UK3CB_BAF_762_L42A1_20Rnd";
				count=8;
			};
			class _xx_UK3CB_BAF_20Rnd_T
			{
				magazine="UK3CB_BAF_762_L42A1_20Rnd_T";
				count=2;
			};
			class _xx_UK3CB_BAF_556_30Rnd
			{
				magazine="UK3CB_BAF_556_200Rnd";
				count=4;
			};
			class _xx_UK3CB_BAF_556_30Rnd_T
			{
				magazine="UK3CB_BAF_556_30Rnd_T";
				count=2;
			};
			class _xx_UK3CB_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=12;
			};
			class _xx_UK3CB_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=3;
			};
			class _xx_UK3CB_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=24;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=16;
			};
			class _xx_Slug
			{
				magazine = "UK3CB_BAF_12G_Slugs";
				count = 5;
			};
            class _xx_Buck
			{
				magazine = "UK3CB_BAF_12G_Pellets";
				count = 2;
			};	
		};
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 48;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 16;
			};
			class _xx_Epipen
			{
				name = "ACE_epinephrine";
				count = 2;
			};
			class _xx_ACE_SalineIV_500
			{
				name = "ACE_salineIV_500";
				count = 4;
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
	};
	class TWC_modern_Operation_ColdWar_SlingBox:B_CargoNet_01_ammo_F
	{
		author = "jayman";
		displayName="TWC Cold War SlingBox";
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine="UK3CB_BAF_762_20Rnd";
				count=70;
			};
			class _xx_UK3CB_BAF_75Rnd
			{
				magazine="UK3CB_BAF_762_100Rnd";
				count=9;
			};
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine="UK3CB_BAF_762_100Rnd_T";
				count=3;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine="ACE_HandFlare_White";
				count=10;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine="tf47_m3maaws_HEAT";
				count=3;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine="tf47_m3maaws_HE";
				count=3;
			};
			class _xx_tf47_m3maaws_SMOKE
			{
				magazine="tf47_m3maaws_SMOKE";
				count=2;
			};
			class _xx_tf47_m3maaws_ILLUM
			{
				magazine="tf47_m3maaws_ILLUM";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=24;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=16;
			};
		};
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 48;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 16;
			};
			class _xx_Epipen
			{
				name = "ACE_epinephrine";
				count = 2;
			};
			class _xx_ACE_SalineIV_500
			{
				name = "ACE_salineIV_500";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_LAW
			{
				Weapon = "HAFM_LAW";
				count = 2;
			};
		};
	};
	class TWC_modern_Operation_1990_SlingBox:B_CargoNet_01_ammo_F
	{
		author = "jayman";
		displayName = "TWC 1990 SlingBox";
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_556_30Rnd
			{
				magazine="UK3CB_BAF_556_30Rnd";
				count=40;
			};
			class _xx_UK3CB_BAF_556_30Rnd_T
			{
				magazine="UK3CB_BAF_556_30Rnd_T";
				count=10;
			};
			class _xx_UK3CB_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=24;
			};
			class _xx_UK3CB_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=6;
			};
			class _xx_UK3CB_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=6;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=64;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=48;
			};
		};
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 60;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 16;
			};
			class _xx_Epipen
			{
				name = "ACE_epinephrine";
				count = 2;
			};
			class _xx_ACE_SalineIV_500
			{
				name = "ACE_salineIV_500";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_AT4
			{
				Weapon = "rhs_weap_M136_hedp";
				count = 2;
			};
		};
	};
};


