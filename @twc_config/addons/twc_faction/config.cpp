class CfgPatches
{
	class twc_faction
	{
		units[]={};
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
	class TWC_PAVN
	{
		displayName="TWC PAVN Operation Units";
		author="The Wrecking Crew";
		icon="TWClogo.paa";
		priority=2;
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
	
	//#include "russianfederation.hpp" // uncomment once all rhs classes have been replaced
	#include "iraq.hpp"
	#include "african.hpp"
	#include "irish.hpp"
	
	#include "takistan.hpp"
	
	#include "usa_1970.hpp"
};