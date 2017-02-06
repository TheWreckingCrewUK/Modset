class CfgPatches
{
	class twc_framework
	{
		units[]=
		{
			"twc_ModuleMission"
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
#include "cfgEventHandlers.hpp"
#include "cfgVehicles.hpp"

class CfgFunctions
{
	class TWC
	{
		class Functions
		{
			file="twc_framework\functions";
			class aiStats {};
			class Defend {};
			class Patrol {};
			class AirAssault {};
			class AttackPlane {};
			class AttackHelicopter {};
			class spawnIed {};
			class IEDpopulate {};
			class intelHint {};
			class Artillery {};
			class CommandMessage {};
			class LightsSwitch {};
			class Retreat {};
			class patrolRoads {};
			class placedIED {};
			class patrolMarkers {};
			class CreateTask {};
			class UpdateTask {};
			class daisyCutter {};
			class createMarker {};
			class virtualMortar {};
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
			class nightGear {};
			class run {};
			class safeZone {};
			class stats {};
			class zeus {};
		};
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