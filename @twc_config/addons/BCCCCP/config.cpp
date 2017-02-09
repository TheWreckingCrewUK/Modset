class CfgPatches
{
	class twc_BCCCCP
	{
		units[]=
		{
			"BCCCCP_Mi24_D",
			"BCCCCP_Mi24_D_Tr",
			"BCCCCP_Mi24_P",
			"BCCCCP_Mi24_V",
			"BCCCCP_Mi6A",
			"BCCCCP_Mi6T",
			"BCCCCP_Mi8T",
			"BCCCCP_Mi8T_VIV",
			"BCCCCP_Mi8TV",
			"BCCCCP_Mi8TVK",
			"BCCCCP_BMP1",
			"BCCCCP_BMP2",
			"BCCCCP_BMP2_HQ",
			"BCCCCP_BMP2_Amb",
			"BCCCCP_BMP2_ZU23",
			"BCCCCP_BRDM",
			"BCCCCP_BRDM_ATGM",
			"BCCCCP_BRDM_HQ",
			"BCCCCP_BTR60",
			"BCCCCP_T55",
			"BCCCCP_T72",
			"BCCCCP_T72A",
			"BCCCCP_ZSU23",
			"BCCCCP_UAZ_Unarmed",
			"BCCCCP_UAZ_Open",
			"BCCCCP_UAZ_MG",
			"BCCCCP_UAZ_AGS30",
			"BCCCCP_UAZ_SPG9",
			"BCCCCP_UAZ_METIS",
			"BCCCCP_Ural",
			"BCCCCP_Ural_Open",
			"BCCCCP_Ural_Repair",
			"BCCCCP_Ural_Reammo",
			"BCCCCP_Ural_Empty",
			"BCCCCP_Ural_ZU23",
			"BCCCCP_BM21",
			"BCCCCP_Rifleman",
			"BCCCCP_SenRifleman",
			"BCCCCP_Squadlead",
			"BCCCCP_Grenadier",
			"BCCCCP_MG_RPK",
			"BCCCCP_MG_PKM",
			"BCCCCP_MGAss",
			"BCCCCP_Sniper",
			"BCCCCP_VDV_Rifleman",
			"BCCCCP_VDV_Rifleman_Para",
			"BCCCCP_VDV_SenRifleman",
			"BCCCCP_VDV_Squadlead",
			"BCCCCP_VDV_Grenadier",
			"BCCCCP_VDV_GrenadierAss",
			"BCCCCP_VDV_MG_RPK",
			"BCCCCP_VDV_MG_PKM",
			"BCCCCP_VDV_MGAss",
			"BCCCCP_VDV_Sniper",
			"BCCCCP_AAGunner",
			"BCCCCP_AAAssistant",
			"BCCCCP_ATGunner",
			"BCCCCP_ATAssistant",
			"BCCCP_Razvedka_Observer",
			"BCCCP_Razvedka_Marksman",
			"BCCCCP_Spets_Operator",
			"BCCCCP_Spets_Marksman",
			"BCCCCP_Crewman",
			"BCCCCP_Driver"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			//"cup_creatures_people_military_sla",
			//"cup_creatures_people_military_russia",
			//"cup_airvehicles_mi6",
			//"cup_airvehicles_mi8",
			//"cup_airvehicles_mi24",
			//"cup_airvehicles_su25",
			//"cup_trackedvehicles_bmp",
			//"cup_trackedvehicles_t55",
			//"cup_trackedvehicles_t72",
			//"cup_trackedvehicles_zsu23",
			//"cup_wheeledvehicles_brdm2",
			//"cup_wheeledvehicles_btr60",
			//"cup_wheeledvehicles_uaz",
			//"cup_wheeledvehicles_ural"
		};
	};
};
class CfgEditorSubCategories
{
	class BCCCCP_Men
	{
		displayName = "Men";
	};
	class BCCCCP_VDV
	{
		displayName = "Men (VDV)";
	};
	class BCCCCP_Razvedka
	{
		displayName = "Men (Razvedka)";
	};
	class BCCCCP_Spetsnaz
	{
		displayName = "Men (Spetsnas GRU)";
	};
};
class CfgFactionClasses
{
	class BCCCCP
	{
		displayName="Armed Forces of the USSR";
		author="Saxon";
		icon="TWClogo.paa";
		priority=2;
		side=0;
	};
};
#include "compositions.hpp"
class CfgVehicles
{
	#include "backpacks.hpp"
	#include "infantry.hpp"
	#include "air.hpp"
	#include "armour.hpp"
	#include "cars.hpp"
	
	class FlagCarrier;	
	class Flag_USSR_F: FlagCarrier
	{
		author="Anschluss";
		class SimpleObject
		{
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Flag_Red_F.jpg";
		_generalMacro="Flag_USSR_F";
		scope=2;
		scopeCurator=2;
		displayName="Flag (USSR)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\BCCCCP\Data\flag_ussr.paa'";
		};
	};	
};
class CfgMarkers
{
	class Flag;
	class flag_USSR: Flag
	{
		name="USSR";
		icon="BCCCCP\Data\marker_ussr.paa";
		texture="BCCCCP\Data\marker_ussr.paa";
		size=32;
		scope=1;
		shadow=0;
		color[]={1,1,1,1};
		markerClass="Flags";
	};
};