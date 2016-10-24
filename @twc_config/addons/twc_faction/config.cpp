class CfgPatches
{
	class twc_faction
	{
		units[]=
		{
			"Modern_British_Squadleader",
			"Modern_British_Rifleman",
			"Modern_British_Grenadier",
			"Modern_British_Automaticrifleman",
			"Modern_British_2IC",
			"Modern_British_Machinegunner",
			"Modern_British_Marksman",
			"Modern_British_Platoon_Commander",
			"Modern_British_Platoon_Sergeant",
			"Modern_British_Medic",
			"Modern_HeloPilot",
			"Modern_JetPilot",
			"Modern_British_MortarGunner",
			"Modern_British_MortarAssistant",
			"Pilot_British",
			"Modern_British_Sniper",
			"Modern_British_Spotter",
			"Modern_British_VehicleCrew",
			"Modern_British_VehicleCommander",
			"Mechanized_British_Marksman",
			"Modern_British_Coin_Squadleader",
			"Modern_British_Coin_Pointman",
			"Modern_British_Coin_Grenadier",
			"Modern_British_Coin_Automaticrifleman",
			"Modern_British_Coin_2IC",
			"Modern_British_Coin_Machinegunner",
			"Modern_British_Coin_Marksman",
			"Modern_British_Coin_Platoon_Commander",
			"Modern_British_Coin_Platoon_Sergeant",
			"Modern_British_Coin_Medic",
			"ColdWar_Rifleman",
			"ColdWar_Rifleman_SUIT",
			"ColdWar_AT",
			"ColdWar_AT_ASS",
			"ColdWar_2IC",
			"ColdWar_MG",
			"ColdWar_MG_AS",
			"ColdWar_Section_Leader",
			"ColdWar_Platoon_Commander",
			"ColdWar_sergeant",
			"ColdWar_Medic",
			"ColdWar_FAC",
			"ColdWar_HeloPilot",
			"ColdWar_JetPilot",
			"ColdWar_AA_Gunner",
			"ColdWar_AA_Assistant",
			"ColdWar_MilanGunner",
			"ColdWar_MilanAssistant",
			"WW2_British_Squadleader",
			"WW2_British_Rifleman",
			"WW2_British_2IC",
			"WW2_British_MG",
			"WW2_British_MGASS",
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
			"ColdWar_USSR_MachineGunner"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR"
		};
	};
};
class CfgEditorSubCategories
{
	class Men_Modern
	{
		displayName = "Men (Modern)";
	};
	class Men_ModernCoin
	{
		displayName = "Men (Modern COIN)";
	};
	class Men_ColdWar
	{
		displayName = "Men (ColdWar)";
	};
	class Men_1990D
	{
		displayName = "Men (1990 Early Desert)";
	};
	class Men_1990W
	{
		displayName = "Men (1990 Early Woodland)";
	};
	class Men_WW2
	{
		displayName = "Men (WW2)";
	};
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
};
class CfgFactionClasses
{
	class a_units
	{
		displayName="Broken";
		author="FakeMatty";
		icon="TWClogo.paa";
		priority=2;
		side=1;
	};
	class twc_faction
	{
		displayName="TWC Operation Units";
		author="FakeMatty";
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
	class argentinian_units
	{
		displayName="Argentinian Units";
		author="Rik";
		icon="TWClogo.paa";
		priority=2;
		side=2;
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;
	
	#include "90early.hpp"
	//#include "90late.hpp"
	#include "coin.hpp"
	#include "mechanized.hpp"
	#include "modern.hpp"
	#include "coldwar.hpp"
	#include "ww2.hpp"
	
	#include "russianfederation.hpp"
	#include "ussr.hpp"
	#include "iraq.hpp"
	#include "argentina.hpp"
};