class CfgPatches
{
	class twc_coldwar
	{
		units[]=
		{
			"ColdWar_Base",
			"ColdWar_Rifleman",
			"ColdWar_Rifleman_SUIT",
			"ColdWar_AT",
			"ColdWar_AT_Ass",
			"ColdWar_2IC",
			"ColdWar_MG",
			"ColdWar_MG_AS",
			"ColdWar_Section_Leader",
			"ColdWar_Platoon_Commander",
			"ColdWar_Sergeant",
			"ColdWar_CSM",
			"ColdWar_Medic",
			"ColdWar_FAC",
			"ColdWar_HeliPilot",
			"ColdWar_JetPilot",
			"ColdWar_AA_Gunner",
			"ColdWar_AA_Assistant",
			"ColdWar_MilanGunner",
			"ColdWar_MilanAssistant",
			"ColdWar_Tank_Commander",
			"ColdWar_Tank_Crewman",
			"ColdWar_Sniper",
			"coldWar_Spotter",
			"ColdWar_Vehicle_Commander",
			"ColdWar_Vehicle_Crewman",
			"ColdWar_Rifleman_Dismounted",
			"ColdWar_Rifleman_SUIT_Dismounted",
			"ColdWar_AT_Dismounted",
			"ColdWar_AT_Ass_Dismounted",
			"ColdWar_2IC_Dismounted",
			"ColdWar_MG_Dismounted",
			"ColdWar_MG_Ass_Dismounted"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"TWC_Faction"
		};
	};
};
class EventHandlers;
class CfgEditorSubCategories
{
	class Men_ColdWar_Dismounted
	{
		displayName = "Men (Dismounted)";
	};
	class Men_ColdWar_Mounted
	{
		displayName = "Men (Mounted)";
	};
	class Men_ColdWar_Airborne
	{
		displayName = "Men (Airborne)";
	};
};
#include "compositions.hpp"
class CfgVehicles
{
	class B_Soldier_base_F;
	
	#include "coldwar.hpp"
	
	#include "backpacks.hpp"
};
#include "weapons.hpp"