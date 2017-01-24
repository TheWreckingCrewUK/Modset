class CfgPatches
{
	class twc_framework
	{
		units[]=
		{
			
		};
		weapons[]={};
		requiredVersion=1.54;
		requiredAddons[]=
		{
			"cba_ai",
			"A3_Modules_F"
		};
		author[]=
		{

		};
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
		displayName = "TWC Mission Module";
	};
};
#include "cfgVehicles.hpp"

class CfgFunctions
{
	class TWC
	{
		class Functions
		{
			file="twc_framework\functions";
			class Defend {};
			class Patrol {};
			class AirAssault {};
			class AttackPlane {};
			class AttackHelicopter {};
			class spawnIed {};
			class IEDpopulate {};
			class intelHint {};
			class Artillery {};
			class Attack {};
			class CommandMessage {};
			class LightsSwitch {};
			class Retreat {};
			class Convoy {};
			class patrolRoads {};
			class placedIED {};
			class patrolMarkers {};
			class CreateTask {};
			class UpdateTask {};
			class daisyCutter {};
			class createMarker {};
		};
		class Modules
		{
			file = "twc_framework\modules";
			class era {};
			class rollShirt {};
			class boatSafety {};
			class civilianEquipment {};
			class deadBodies {};
			class forwardBase {};
			class giveRadio {};
			class moduleMission {};
			class run {};
			class safeZone {};
			class zeus {};
		};
	};
};

class Extended_PostInit_EventHandlers
{
	class Twc_framework_init
	{
		init="execVM '\twc_framework\init.sqf';";
	};
};
class Extended_PreInit_EventHandlers
{
	class Twc_framework_init
	{
		init="execVM '\twc_framework\preinit.sqf';";
	};
};

class CfgMusic
{
 tracks[]={};

 class Theme
 {
  name = "Theme";
  sound[] = {"twc_framework\music\TWCoperationTheme.ogg", db+10, 1.0};
 };
};