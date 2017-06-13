class CfgPatches
{
	class twc_faction
	{
		units[]=
		{
			"GulfWar_Iraqi_Squadleader",
			"GulfWar_Iraqi_Rifleman",
			"GulfWar_Iraqi_RPG",
			"GulfWar_Iraqi_RPGAssistant",
			"GulfWar_Iraqi_MG",
			"GulfWar_Iraqi_MGAssistant",
			"Russian_Squadleader",
			"Russian_Rifleman",
			"Russian_Grenadier",
			"Russian_Seniorrifleman",
			"Russian_Grenadierassistant",
			"Russian_Automaticrifleman",
			"Russian_Vehiclecommander",
			"Russian_Vehiclecrew",
			"ColdWar_USSR_Squadleader",
			"ColdWar_USSR_Rifleman",
			"ColdWar_USSR_Grenadier",
			"ColdWar_USSR_Grenadierassistant",
			"ColdWar_USSR_Efreitor",
			"ColdWar_USSR_MachineGunner",
			"Afr_Mil_Rifleman",
			"Afr_Mil_AT_Assistant",
			"Afr_Mil_RiflemanAT",
			"Afr_Mil_Machinegunner",
			"Afr_Mil_Teamleader",
			"Afr_Mil_Squadleader",
			"Afr_Mil_Officer",
			"Afr_Mil_Crewman",
			"IRA_Squadleader",
			"IRA_Rifleman_M16",
			"IRA_Rifleman_AKM",
			"IRA_Rifleman_FAL",
			"IRA_Rifleman_AT",
			"IRA_Autorifleman",
			"usa_1970_medic",
			"usa_1970_leader",
			"usa_1970_grenadier"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma"
		};
	};
};
class CfgEditorSubCategories
{
	class Men_RussianFederation
	{
		displayName = "Men (Russian Federation)";
	};
	class Men_Iraq
	{
		displayName = "Men (Iraq)";
	};
	class Men_AfricanMilitia
	{
		displayName = "Men (African Militia)";
	};
	class Men_IRA
	{
		displayName = "Men (IRA)";
	};
	class TWC_tak_Civ_Men
	{
		displayName = "Men (Takistan Militia)";
	};
	class TWC_usa_1970
	{
		displayName = "USA (1970)";
	};
};
class CfgFactionClasses
{
	class TWC_General
	{
		displayName="TWC General Operation Units";
		author="The Wrecking Crew";
		icon="TWClogo.paa";
		priority=2;
		side=1;
	};
	class TWC_ColdWar
	{
		displayName="TWC Cold War Operation Units";
		author="The Wrecking Crew";
		icon="TWClogo.paa";
		priority=2;
		side=1;
	};
	class TWC_Millenial
	{
		displayName="TWC Millennial Operation Units";
		author="The Wrecking Crew";
		icon="TWClogo.paa";
		priority=2;
		side=1;
	};
	class TWC_Modern
	{
		displayName="TWC Modern Operation Units";
		author="The Wrecking Crew";
		icon="TWClogo.paa";
		priority=2;
		side=1;
	};
	class Iraqi_units
	{
		displayName="Iraqi Army Gulf War Units";
		author="Rik";
		icon="TWClogo.paa";
		priority=2;
		side=0;
	};
	class ira_units
	{
		displayName="IRA Units";
		author="Jayman";
		icon="TWClogo.paa";
		priority=2;
		side=2;
	};
	class african_units
	{
		displayName="African Militia";
		author="Saxon";
		icon="TWClogo.paa";
		priority=2;
		side=2;
	};
	class TWC_Tak_Civ
	{
		displayName="Takistani Civilians";
		priority=1;
		side=3;
	};
	class twc_usa_1970
	{
		displayName="USA 1970";
		priority=1;
		side=1;
	};
	class Russian_Federation
	{
		displayName="Russian Federation";
		priority=1;
		side=3;
	};
};
class CfgVehicles
{
	class CUP_B_AlicePack_Khaki;
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
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;
	
	#include "russianfederation.hpp"
	#include "iraq.hpp"
	#include "african.hpp"
	#include "irish.hpp"
	
	#include "takistan.hpp"
	
	#include "usa_1970.hpp"
};