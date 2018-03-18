class CfgPatches
{
	class twc_modern
	{
		units[]=
		{
			"Modern_British_Base",
			"Modern_British_Squadleader",
			"Modern_British_Rifleman",
			"Modern_British_Grenadier",
			"Modern_British_Autorifleman",
			"Modern_British_2IC",
			"Modern_British_Machinegunner",
			"Modern_British_Marksman",
			"Modern_British_Platoon_Commander",
			"Modern_British_Platoon_Sergeant",
			"Modern_British_Medic",
			"Modern_British_Rifleman_Mounted",
			"Modern_British_Grenadier_Mounted",
			"Modern_British_Autorifleman_Mounted",
			"Modern_British_Machinegunner_Mounted",
			"Modern_British_Marksman_Mounted",
			"Modern_British_Pointman",
			"Modern_British_Grenadier_COIN",
			"Modern_British_Autorifleman_COIN",
			"Modern_British_2IC_COIN",
			"Modern_British_Marksman_COIN",
			"Modern_British_PlatoonMortar",
			"Modern_British_HeliPilot",
			"Modern_British_JetPilot",
			"Modern_British_MortarGunner",
			"Modern_British_MortarAssistant",
			"Modern_British_Sniper",
			"Modern_British_Spotter",
			"Modern_British_FAC",
			"Modern_British_VehicleCrew",
			"Modern_British_VehicleCommander"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma",
			"TWC_Faction"
		};
	};
};
class EventHandlers;
class CfgEditorSubCategories
{
	class Men_Modern_Mounted
	{
		displayName = "Men (Mounted)";
	};
	class Men_Modern_Dismounted
	{
		displayName = "Men (Dismounted)";
	};
	class Men_Modern_COIN
	{
		displayName = "Men (COIN)";
	};
	class Men_Modern_COIN_Mounted
	{
		displayName = "Men (COIN Mounted)";
	};
};
#include "compositions.hpp"
class CfgVehicles
{
	class B_Soldier_base_F;
	
	#include "modern.hpp"
	
	#include "backpacks.hpp"
};
#include "weapons.hpp"