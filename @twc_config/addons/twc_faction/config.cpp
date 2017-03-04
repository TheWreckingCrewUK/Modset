class CfgPatches
{
	class twc_faction
	{
		units[]=
		{
			"ColdWar_Base",
			"ColdWar_Rifleman",
			"ColdWar_Rifleman_SUIT",
			"ColdWar_AT",
			"ColdWar_AT_ASS",
			"ColdWar_2IC",
			"ColdWar_MG",
			"ColdWar_MG_AS",
			"ColdWar_Section_Leader",
			"ColdWar_Platoon_Commander",
			"ColdWar_Sergeant",
			"ColdWar_Medic",
			"ColdWar_FAC",
			"ColdWar_HeliPilot",
			"ColdWar_JetPilot",
			"ColdWar_AA_Gunner",
			"ColdWar_AA_Assistant",
			"ColdWar_MilanGunner",
			"ColdWar_MilanAssistant",
			"ColdWar_Vehicle_Commander",
			"ColdWar_Vehicle_Crewman",
			"1990_British_Base",
			"1990_British_Squadleader",
			"1990_British_Rifleman",
			"1990_British_Gunner",
			"1990_British_2IC",
			"1990_British_CGG",
			"1990_British_CGAss",
			"1990_British_Platoon_Commander",
			"1990_British_Platoon_Sergeant",
			"1990_British_Medic",
			"1990_British_HeliPilot",
			"1990_British_JetPilot",
			"1990_British_MilanGunner",
			"1990_British_MilanAssistant",
			"1990_British_MortarGunner",
			"1990_British_Vehicle_Commander",
			"1990_British_Vehicle_Crew",
			"1990_British_Squadleader_Desert",
			"1990_British_Rifleman_Desert",
			"1990_British_CGG_Desert",
			"1990_British_CGAss_Desert",
			"1990_British_Gunner_Desert",
			"1990_British_2IC_Desert",
			"1990_British_Platoon_Commander_Desert",
			"1990_British_Platoon_Sergeant_Desert",
			"1990_British_Medic_Desert",
			"1990_British_HiloPilot_Desert",
			"1990_British_MilanGunner_Desert",
			"1990_British_MilanAssistant_Desert",
			"1990_British_MortarGunner_Desert",
			"1990_British_Tank_Commander_Desert",
			"1990_British_Tank_Crew_Desert",
			"Modern_British_Squadleader",
			"Modern_British_Rifleman",
			"Modern_British_Pointman",
			"Modern_British_Grenadier",
			"Modern_British_Autorifleman",
			"Modern_British_2IC",
			"Modern_British_Machinegunner",
			"Modern_British_Marksman",
			"Modern_British_Marksman_COIN",
			"Modern_British_Platoon_Commander",
			"Modern_British_Platoon_Sergeant",
			"Modern_British_Medic",
			"Modern_British_VehicleCrew",
			"Modern_British_VehicleCommander",
			"Modern_British_HeliPilot",
			"Modern_British_JetPilot",
			"Modern_British_MortarGunner",
			"Modern_British_MortarAssistant",
			"Modern_British_Sniper",
			"Modern_British_Spotter",
			"Modern_British_FAC",
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
	class Men_USSR
	{
		displayName = "Men (USSR)";
	};
	class Men_RussianFederation
	{
		displayName = "Men (Russian Federation)";
	};
	class Men_Iraq
	{
		displayName = "Men (Iraq)";
	};
	class Men_Argentina
	{
		displayName = "Men (Argentina)";
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
	class Iraqi_units
	{
		displayName="Iraqi Army Gulf War Units";
		author="Rik";
		icon="TWClogo.paa";
		priority=2;
		side=0;
	};
	class argentinian_units
	{
		displayName="Argentinian Units";
		author="Rik";
		icon="TWClogo.paa";
		priority=2;
		side=2;
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
	#include "ussr.hpp"
	#include "iraq.hpp"
	#include "argentina.hpp"
	#include "african.hpp"
	#include "irish.hpp"
	
	#include "takistan.hpp"
	
	#include "usa_1970.hpp"
};