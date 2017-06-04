class CfgPatches
{
	class twc_framework
	{
		units[]=
		{
			"twc_ModuleMission",
			"twc_moduelHC",
			"twc_moduelCache",
			"twc_moduleHealPlayer",
			"twc_moduleKillPlayer",
			"twc_moduleSetSpectator",
			"twc_moduleMedicalInfo"
		};
		weapons[]={};
		requiredVersion=1.7;
		requiredAddons[]=
		{
			"cba_ai",
			"A3_Modules_F"
		};
		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};
class cfgFactionClasses
{
	class NO_CATEGORY;
	class twc_missionSetup: NO_CATEGORY
	{
		displayName="TWC Mission Module";
	};
	class twc_zeus: NO_CATEGORY
	{
		displayName = "Zeus TWC";
	};
};
class Extended_InitPost_EventHandlers
{
	class CAManBase
	{
		class twc_moduleInitPos_eh
		{
			init=" [(_this select 0)] execVM 'twc_framework\xeh_postInit.sqf';";
		};
	};
};
#include "cfgWeapons.hpp"
#include "cfgVehicles.hpp"
#include "cfgFunctions.hpp"
#include "cfgMusic.hpp"
#include "noHUD.hpp"