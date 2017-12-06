class CfgPatches
{
	class twc_faction
	{
		units[]=
		{
			"1990_British_Base",
			"1990_British_Squadleader",
			"1990_British_Rifleman",
			"1990_British_Gunner",
			"1990_British_2IC",
			"1990_British_Platoon_Commander",
			"1990_British_Platoon_Sergeant",
			"1990_British_Medic",
			"1990_British_HeloPilot",
			"1990_British_JetPilot",
			"1990_British_Vehicle_Commander",
			"1990_British_Vehicle_Crew",
			"1990_British_Squadleader_Desert",
			"1990_British_Rifleman_Desert",
			"1990_British_Gunner_Desert",
			"1990_British_2IC_Desert",
			"1990_British_Platoon_Commander_Desert",
			"1990_British_Platoon_Sergeant_Desert",
			"1990_British_Medic_Desert",
			"1990_British_HeloPilot_Desert",
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
			
			"greek_Civ_Men_1",
			"greek_Civ_Men_2",
			"greek_Civ_Men_3",
			"greek_Civ_Men_4",
			"greek_Civ_Men_5",
			"greek_Civ_Men_6",
			"greek_Civ_Men_7",
			"greek_Civ_Men_8",
			"greek_Civ_Men_9",
			"greek_Civ_Men_10",
			"greek_Civ_Men_11",
			"greek_Civ_Men_12",
			"greek_Civ_Men_13",
			"greek_Civ_Men_14",
			
			
			"Tak_twc_ins_Men_B1",
			"Tak_twc_ins_Men_B2",
			"Tak_twc_ins_Men_R1",
			"Tak_twc_ins_Men_RPG1",
			"Tak_twc_ins_Men_R2",
			"Tak_twc_ins_Men_AR1",
			"Tak_twc_ins_Men_MG1",
			"Tak_twc_ins_Men_R3",
			"Tak_twc_ins_Men_a1",
			"Tak_twc_ins_Men_a2",
			"Tak_twc_ins_Men_sniper",
			"Tak_twc_ins_Men_Scout",			
			
			"twc_greek_officer",
			"twc_greek_rifleman",
			"twc_greek_rifleman_2",
			"twc_greek_rifleman_at",
			"twc_greek_grenadier",
			"twc_greek_ar",
			"twc_greek_mg",
			"twc_greek_aa",
			"twc_greek_heavy"
			
		
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
		displayName = "Men (TWC)";
	};
		class TWC_greek_Civ_Men
	{
		displayName = "Men (Greek)";
	};
	class Men_Greek
	{
		displayName="Men (Greek)";
	};
		class Men_tak_twc_ins
	{
		displayName="Men (TWC)";
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
		priority=2;
		side=3;
	};
		class TWC_greek_Civ
	{
		displayName="Civilians (Greek)";
		priority=2;
		side=3;
	};
	class greek_units
	{
		displayName="Greek Units";
		priority=2;
		side=2;
	};

	class TWC_Tak_Ins
	{
		displayName="Takistani Militia (TWC)";
		priority=2;
		side=2;
	};
	
};
class EventHandlers;
class CfgVehicles
{
	class CUP_B_AlicePack_Khaki;
	class CUP_B_RPGPack_Khaki;
	class rhs_sidor;
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
	class greek_Backpack_AT: CUP_B_RPGPack_Khaki
	{
		class TransportMagazines
		{
			class _xx_RPG7
			{
				magazine="CUP_PG7V_M";
				count=3;
			};
		};
	};
	
		class Backpack_AT_og7: CUP_B_RPGPack_Khaki
	{
		class TransportMagazines
		{
			class _xx_RPG7
			{
				magazine="CUP_OG7_M";
				count=4;
			};
		};
	};
	
			class Backpack_rpk: rhs_sidor
	{
		class TransportMagazines
		{
			class _xx_RPk
			{
				magazine="CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
				count=4;
			};
		};
	};
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;
	
	#include "russianfederation.hpp"
	//#include "iraq.hpp"
	#include "african.hpp"
	#include "irish.hpp"
	#include "takistan.hpp"
	#include "greek.hpp"
	#include "greek_civ.hpp"
	#include "takistanins.hpp"
};