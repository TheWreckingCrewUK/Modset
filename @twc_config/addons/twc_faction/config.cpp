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
class CfgFactionClasses
{
	class a_units
	{
		displayName="TWC Operation Units";
		author="FakeMatty";
		icon="TWClogo.paa";
		priority=2;
		side=1;
	};
	class Veh_units
	{
		displayName="TWC Vehicles";
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
class CfgVehicleClasses
{
	class Modern_British
	{
		displayName="Modern British";
	};
	class Coin_British
	{
		displayName="Modern COIN British";
	};
	class Cold_British
	{
		displayName="Cold War British";
	};
	class 1990_British
	{
		displayName="1990 British";
	};
	class 1990_Desert_British
	{
		displayName = "1990 Desert British";
	};
	class Russian
	{
		displayName="Russian";
	};
	class USSR
	{
		displayName="USSR";
	};
	class Attachments
	{
		displayName="Attachments";
	};
	class NewVehicles
	{
		displayName="Vehicles";
	};
	class GulfWar_Iraqi
	{
		displayName="Gulf War Iraqi";
	};
	class Cold_War_Argentinian
	{
		displayname="Cold War Argentinia";
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
	
	#include "russianfederation.hpp"
	#include "ussr.hpp"
	#include "iraq.hpp"
	#include "argentina.hpp"
};