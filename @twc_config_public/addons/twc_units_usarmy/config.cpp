class CfgPatches
{
	class twc_framework_public_modern
	{
		units[]=
		{
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
		requiredVersion=1.54;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma"
		};
		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};
class CfgEditorSubCategories
{
	class Men_Modern
	{
		displayName = "Men (Modern)";
	};
};
class CfgFactionClasses
{
	class twc_public
	{
		displayName="TWC Public Units";
		author="jayman";
		icon="TWClogo.paa";
		priority=2;
		side=1;
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