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
			"cup_weapons_ammoboxes",
			"ace_dragging"
		};
		version="1";
		projectName="TWC";
		author="jayman";
	};
};
class cfgMagazines
{
	class Default;
	class CA_Magazine;
	class CUP_7Rnd_45ACP_1911;
	
	class twc_13Rnd_40cal_Mag: CUP_7Rnd_45ACP_1911
	{
		scope = 2;
		displayName = "13 round 40cal Magazine";
		count = 13;
		descriptionShort = "Used in L9A1";
	};
};
	
class cfgWeapons
{
//////////////////////////////  Cold War  //////////////////////////////
	class CUP_hgun_Colt1911;
	class UK3CB_BAF_L1A1_Wood;
	class tf47_m3maaws;
	class CUP_launch_FIM92Stinger;
	
	class twc_browninghp: CUP_hgun_Colt1911
	{
		scope = 2;
		author = "jayman";
		displayName = "L9A1";
		magazines[] = {twc_13Rnd_40cal_Mag};
	};
	class twc_L1A1_SUIT: UK3CB_BAF_L1A1_Wood
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
	class TWC_Carl_Gustav: tf47_m3maaws
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
	class FIMStingerA: CUP_launch_FIM92Stinger
	{
		author="Jayman";
		displayName="Stinger A";
	};
//////////////////////////////  1990  //////////////////////////////
	class UK3CB_BAF_L85A2;
	class UK3CB_BAF_L86A2;
	
	class UK3CB_BAF_L86A1: UK3CB_BAF_L86A2
	{
		displayName = "L86A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
	};
	class UK3CB_BAF_L86A1_SUSAT3D: UK3CB_BAF_L86A2
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
	class UK3CB_BAF_L85A1: UK3CB_BAF_L85A2
	{
		displayName = "L85A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
	};
	class UK3CB_BAF_L85A1_SUSAT3D: UK3CB_BAF_L85A2
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
	class UK3CB_BAF_L85A1_SUSAT3D_Lazer: UK3CB_BAF_L85A2
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
//////////////////////////////  Modern  //////////////////////////////
	class UK3CB_BAF_L85A2_RIS;
	class UK3CB_BAF_L110A2;
	class UK3CB_BAF_L129A1_Grippod;
	class UK3CB_BAF_L128A1;
	class UK3CB_BAF_L85A2_UGL;
	class UK3CB_BAF_L7A2;
	
	
	class UK3CB_BAF_L85A2_RIS_ELCAN3D: UK3CB_BAF_L85A2_RIS
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	class UK3CB_BAF_L110A2_ELCAN3D: UK3CB_BAF_L110A2
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L110A2";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L110A2";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	class UK3CB_BAF_L129A1_Grippod_TA648: UK3CB_BAF_L129A1_Grippod
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
	class UK3CB_BAF_L128A1_Eotech: UK3CB_BAF_L128A1
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
	class UK3CB_BAF_L85A2_UGL_ELCAN3D: UK3CB_BAF_L85A2_UGL
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
//////////////////////////////  Others  //////////////////////////////	
	class UK3CB_BAF_L115A3_Ghillie;
	class rhs_weap_ak74m_dtk; //base ussr AK
	class rhs_acc_1p29; //ussr section lead and 2IC scope
	
	class USSR_AK74_1p29: rhs_weap_ak74m_dtk
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
	class twc_l129a1_spotter: UK3CB_BAF_L129A1_Grippod
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L129A1";
				item="RKSL_optic_PMII_312_sunshade";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	class twc_l115a3_wd: UK3CB_BAF_L115A3_Ghillie
	{
		scope = 1;
		author = "jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RKSL_optic_PMII_312_sunshade_wdl";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item= "UK3CB_BAF_Silencer_L115A3";
			};
		};
	};
};

class CfgVehicles
{
	#include "modern.hpp"
	#include "coldwar.hpp"
	#include "90s.hpp"
	

//*************************USSR****************************
	class rhs_sidor;
	class rhs_rpg_empty;
	
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
	class CUP_B_AlicePack_Khaki;
	
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
//*************************Africans****************************
	class CUP_B_RPGPack_Khaki;
	
	class Afr_Backpack_Rifleman: CUP_B_AlicePack_Khaki
	{
		class TransportMagazines
		{
			class _xx_AKMags
			{
				magazine="CUP_30Rnd_762x39_AK47_M";
				count=6;
			};
			class _xx_PKMags
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count=1;
			};
		};
	};
	class Afr_Backpack_MG: CUP_B_AlicePack_Khaki
	{
		class TransportMagazines
		{
			class _xx_PKMags
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count=2;
			};
		};
	};
	class Afr_Backpack_AT: CUP_B_RPGPack_Khaki
	{
		class TransportMagazines
		{
			class _xx_AKMags
			{
				magazine="CUP_30Rnd_762x39_AK47_M";
				count=2;
			};
			class _xx_RPG7
			{
				magazine="CUP_PG7V_M";
				count=2;
			};
		};
	};
	#include "ammoboxes.hpp"
};


