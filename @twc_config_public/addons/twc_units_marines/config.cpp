class CfgPatches
{
	class twc_framework_public_modern_us
	{
		units[]=
		{
			"2000_USMC_Base",
			"2000_USMC_Base_d",
			"2000_USMC_Squadleader",
			"2000_USMC_Squadleader_d",
			"2000_USMC_Teamleader",
			"2000_USMC_Teamleader_d",
			"2000_USMC_Grenadier",
			"2000_USMC_Grenadier_d",
			"2000_USMC_Breacher",
			"2000_USMC_Breacher_d",
			"2000_USMC_Autorifleman",
			"2000_USMC_Autorifleman_d",
			"2000_USMC_AsstAutorifleman",
			"2000_USMC_AsstAutorifleman_d",
			"2000_USMC_Medic",
			"2000_USMC_Medic_d",
			"2000_USMC_Marksman",
			"2000_USMC_Marksman_d",
			
			"Modern_USMC_Squadleader_d",
			"Modern_USMC_Teamleader_d",
			"Modern_USMC_Rifleman_d",
			"Modern_USMC_Breacher_d",
			"Modern_USMC_Autorifleman_d",
			"Modern_USMC_AsstAutorifleman_d",
			"Modern_USMC_MachineGunner_d",
			"Modern_USMC_AsstMachineGunner_d",
			"Modern_USMC_Medic_d",
			
			"Modern_USMC_Base",
			"Modern_USMC_Squadleader",
			"Modern_USMC_Teamleader",
			"Modern_USMC_Breacher",
			"Modern_USMC_Rifleman",
			"Modern_USMC_MachineGunner",
			"Modern_USMC_AsstMachineGunner",
			"Modern_USMC_Autorifleman",
			"Modern_USMC_AsstAutorifleman",
			"Modern_USMC_Medic"
			
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
class EventHandlers;
class CfgEditorSubCategories
{
	class US_Men_Modern
	{
		displayName = "Men (US Army Modern)";
	};
	
	class USMC_Modern_WD
	{
		displayName = "Men (Woodland)";
	};
	class USMC_Modern_D
	{
		displayName = "Men (Desert)";
	};
};
class CfgFactionClasses
{
	class twc_public_usmc
	{
		displayName="TWC Public USMC Units";
		author="The Wrecking Crew";
		icon="TWClogo.paa";
		priority=2;
		side=1;
	};
};
#include "compositions.hpp"
class CfgVehicles
{
	// Time saving MACROs - NC = Non-Conflict
	#define maga_nc(a,b) class _nc_##a {magazine = a; count = b;}
	#define weap_nc(a,b) class _nc_##a {weapon = a; count = b;}
	#define item_nc(a,b) class _nc_##a {name = a; count = b;}
	
	class B_Soldier_base_F;
	
	#include "usmarines.hpp"
	#include "usmarines2000.hpp"
	
	#include "marinesbackpacks.hpp"
};
#include "weapons.hpp"