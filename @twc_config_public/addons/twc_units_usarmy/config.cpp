class CfgPatches
{
	class twc_framework_public_modern_us
	{
		units[]=
		{
			"TWC_2000_US_Army_Base",
			"TWC_2000_US_Army_SectionCommander",
			"TWC_2000_US_Army_TeamLeader",
			"TWC_2000_US_Army_Rifleman",
			"TWC_2000_US_Army_Grenadier",
			"TWC_2000_US_Army_AutomaticRifleman",
			"TWC_2000_US_Army_Marksman",
			"TWC_2000_US_Army_Medic",
			
			"TWC_Modern_US_Army_Base",
			"TWC_Modern_US_Army_SectionCommander",
			"TWC_Modern_US_Army_TeamLeader",
			"TWC_Modern_US_Army_Rifleman",
			"TWC_Modern_US_Army_Grenadier",
			"TWC_Modern_US_Army_AutomaticRifleman",
			"TWC_Modern_US_Army_Marksman",
			"TWC_Modern_US_Army_Medic"
			
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma"
		};

	};
};
class CfgEditorSubCategories
{
	class US_Men_Modern
	{
		displayName = "Men (US Army Modern)";
	};
	class US_Men_2000
	{
		displayName = "Men (US Army 2000)";
	};
};
class CfgFactionClasses
{
	class twc_public_us
	{
		displayName="TWC Public US Units";
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
	
	#include "usarmy.hpp"
	
	#include "usbackpacks.hpp"
};
#include "weapons.hpp"