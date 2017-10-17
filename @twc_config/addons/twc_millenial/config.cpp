class CfgPatches
{
	class twc_1990
	{
		units[]=
		{
			"1990_British_Base",
			"1990_British_SectionCommander",
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
			"1990_British_FAC",
			"1990_British_Rifleman_Mechanised",
			"1990_British_Gunner_Mechanised",
			"1990_British_2IC_Mechanised",
			"1990_British_Vehicle_Commander",
			"1990_British_Vehicle_Crew",
			
			"1990_British_SectionCommander_Desert",
			"1990_British_Rifleman_Desert",
			"1990_British_CGG_Desert",
			"1990_British_CGAss_Desert",
			"1990_British_Gunner_Desert",
			"1990_British_2IC_Desert",
			"1990_British_Platoon_Commander_Desert",
			"1990_British_Platoon_Sergeant_Desert",
			"1990_British_Medic_Desert",
			"1990_British_HeliPilot_Desert",
			"1990_British_MilanGunner_Desert",
			"1990_British_MilanAssistant_Desert",
			"1990_British_MortarGunner_Desert",
			"1990_British_FAC_Desert",
			"1990_British_Rifleman_Mechanised_Desert",
			"1990_British_Gunner_Mechanised_Desert",
			"1990_British_2IC_Mechanised_Desert",
			"1990_British_Vehicle_Commander_Desert",
			"1990_British_Vehicle_Crew_Desert",
			"1990_British_Tank_Commander_Desert",
			"1990_British_Tank_Crew_Desert",
			
			
			"2000_British_Base",
			"2000_British_SectionCommander",
			"2000_British_Rifleman",
			"2000_British_Rifleman_AT",
			"2000_British_AutoRifleman",
			"2000_British_2IC",
			"2000_British_Marksman",
			"2000_British_Platoon_Commander",
			"2000_British_Platoon_Sergeant",
			"2000_British_Platoon_CSM",
			"2000_British_Medic",
			"2000_British_MilanGunner",
			"2000_British_MilanAssistant",
			"2000_British_MortarGunner",
			"2000_British_FAC",
			"2000_British_CGG",
			"2000_British_CGAss",
			"2000_British_Rifleman_Mounted",
			"2000_British_Rifleman_AT_Mounted",
			"2000_British_AutoRifleman_Mounted",
			"2000_British_2IC_Mounted",
			"2000_British_Marksman_Mounted",
			"2000_British_Vehicle_Commander",
			"2000_British_Vehicle_Crew",			
			
			"2000_British_SectionCommander_Desert",
			"2000_British_Rifleman_Desert",
			"2000_British_Rifleman_AT_Desert",
			"2000_British_AutoRifleman_Desert",
			"2000_British_2IC_Desert",
			"2000_British_Marksman_Desert",
			"2000_British_Platoon_Commander_Desert",
			"2000_British_Platoon_Sergeant_Desert",
			"2000_British_Platoon_CSM_Desert",
			"2000_British_Medic_Desert",
			"2000_British_MilanGunner_Desert",
			"2000_British_MilanAssistant_Desert",
			"2000_British_MortarGunner_Desert",
			"2000_British_FAC_Desert",
			"2000_British_CGG_Desert",
			"2000_British_CGAss_Desert",
			"2000_British_Rifleman_Mounted_Desert",
			"2000_British_Rifleman_AT_Mounted_Desert",
			"2000_British_Marksman_Mounted_Desert",
			"2000_British_AutoRifleman_Mounted_Desert",
			"2000_British_2IC_Mounted_Desert",
			"2000_British_Vehicle_Commander_Desert",
			"2000_British_Vehicle_Crew_Desert",
			"2000_British_Tank_Commander_Desert",
			"2000_British_Tank_Crew_Desert"
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
	class Men_1990_Arctic_Dismounted
	{
		displayName = "Men (90's Arctic Dismounted)";
	};
	class Men_1990_Desert_Dismounted
	{
		displayName = "Men (90's Desert Dismounted)";
	};
	class Men_1990_Desert_Mounted
	{
		displayName = "Men (90's Desert Mounted)";
	};
	class Men_1990_Woodland_Dismounted
	{
		displayName = "Men (90's Woodland Dismounted)";
	};
	class Men_1990_Woodland_Mounted
	{
		displayName = "Men (90's Woodland Mounted)";
	};
	class Men_2000_Arctic_Dismounted
	{
		displayName = "Men (00's Arctic Dismounted)";
	};
	class Men_2000_Desert_Dismounted
	{
		displayName = "Men (00's Desert Dismounted)";
	};
	class Men_2000_Desert_Mounted
	{
		displayName = "Men (00's Desert Mounted)";
	};
	class Men_2000_Woodland_Dismounted
	{
		displayName = "Men (00's Woodland Dismounted)";
	};
	class Men_2000_Woodland_Mounted
	{
		displayName = "Men (00's Woodland Mounted)";
	};
};

#include "compositions.hpp"

class CfgVehicles
{
	// Time saving MACROs - NC = Non-Conflict
	#define maga_nc(a,b) class _nc_##a {magazine = a; count = b;}
	#define weap_nc(a,b) class _nc_##a {weapon = a; count = b;}
	#define item_nc(a,b) class _nc_##a {name = a; count = b;}
	
	//Needed for 1990 + 2000 base class
	class B_Soldier_base_F;
	
	#include "1990.hpp"	
	#include "2000.hpp"	
	#include "backpacks.hpp"
};
#include "weapons.hpp"