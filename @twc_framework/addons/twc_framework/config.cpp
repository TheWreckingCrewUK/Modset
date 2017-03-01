class CfgPatches
{
	class twc_framework
	{
		units[]=
		{
			"twc_ModuleMission",
			"twc_"
		};
		weapons[]={};
		requiredVersion=1.54;
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
	class twc_moduelHC: NO_CATEGORY
	{
		displayName="TWC Headless Client Module";
	};
};
class Extended_PostInit_EventHandlers
{
	class ADDON
	{
		init="execVM 'twc_framework\xeh_postInit.sqf';";
	};
};
#include "cfgWeapons.hpp"
#include "cfgVehicles.hpp"
#include "cfgFunctions.hpp"
#include "cfgMusic.hpp"
