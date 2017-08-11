class CfgPatches
{
	class twc_faction
	{
		units[]=
		{
			"EAF56_Base",
			"EAF56_Rifleman_AK",
			"EAF56_Rifleman_LE",
			"EAF56_Rifleman_light",
			"EAF56_MachineGunner",
			"EAF56_AssistantMG",
			"EAF56_AntiTank",
			"EAF56_AssistantAT",
			"EAF56_NCO",
			"EAF56_RTO",
			"EAF56_Officer",
			"EAF56_Crewman",
			"EAF56_T-34",
			"EAF56_M4A2",
			"EAF56_MB",
			"EAF56_US6_Open",
			"EAF56_US6_Ammo",
			"EAF56_US6_Tent"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_OPFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma"
		};
	};
};
class CfgFactionClasses
{
	class EAF56
	{
		displayName="Egyptian Armed Forces '56";
		author="Saxon";
		icon="TWClogo.paa";
		priority=2;
		side=0;
	};
};
class CfgVehicles
{
	class fow_ija_soldier02;
	class twc_base_Redfor_soldier01: fow_ija_soldier02
	{
		side = 0;
	};
	
	#include "infantry.hpp"
	#include "backpacks.hpp"
	#include "vehicles.hpp"
};
class cfgWeapons
{
	class fow_u_ija_type98_khakibrown;
	class twc_u_eaf: fow_u_ija_type98_khakibrown
	{
		class itemInfo
		{
			containerClass = Supply40;
			mass = 30;
			scope = 0;
			uniformClass = "twc_base_Redfor_soldier01";
			uniformModel = "-";
		};
	};
};