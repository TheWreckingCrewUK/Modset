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
			"1990_British_Rifleman_Mechanised_Desert",
			"1990_British_Gunner_Mechanised_Desert",
			"1990_British_2IC_Mechanised_Desert",
			"1990_British_Vehicle_Commander_Desert",
			"1990_British_Vehicle_Crew_Desert",
			"1990_British_Tank_Commander_Desert",
			"1990_British_Tank_Crew_Desert"
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
			"ace_interact_menu"
		};
	};
};
class EventHandlers;
class CfgEditorSubCategories
{
	class Men_1990D
	{
		displayName = "Men (1990 Desert)";
	};
	class Men_1990W
	{
		displayName = "Men (1990 Woodland)";
	};
};
class CfgFactionClasses
{
	class twc_faction
	{
		displayName="TWC Public Units";
		author="The Wrecking Crew";
		icon="TWClogo.paa";
		priority=2;
		side=1;
	};
};
#include "compositions.hpp"
class CfgVehicles
{
	class B_Soldier_base_F;
	
	#include "1990.hpp"
	
	#include "backpacks.hpp"
};
#include "weapons.hpp"