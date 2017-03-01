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
};
class Extended_PostInit_EventHandlers
{
	class ADDON
	{
		init="execVM 'twc_framework\xeh_postInit.sqf';";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class ACE_ItemCore;
	class TWC_Syrette: ACE_ItemCore
	{
		scope = 2;
		displayName = "Morphine Syrette";
		descriptionShort = "Used to combat moderate to severe pain experiences";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 1;
		};
	};
};
class cfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;
			class Combo;
			class CheckBox;
			class CheckBoxNumber;
			class ModuleDescription;
			class Units;
		};
		class ModuleDescription
		{
			class Player;
		};
	};
	class twc_ModuleMission: Module_F
	{
		author="[TWC] jayman";
		scope=2;
		displayName="TWC Mission Module";
		category="twc_missionSetup";
		function="twc_fnc_missionModuleInit";
		functionPriority=1;
		isGlobal=0;
		isTriggerActivated=0;
		isDisposable=0;
		class Arguments
		{
			class enabled
			{
				displayName="Enabled";
				description="Enable if this is a TWC Operation";
				typeName="BOOL";
				defaultValue=1;
			};
			class era
			{
				displayName="ERA";
				description="Select the ERA";
				typeName="STRING";
				defaultValue="modern";
				class values
				{
					class modern
					{
						name="Modern";
						value="modern";
					};
					class coldwar
					{
						name="Coldwar";
						value="coldwar";
					};
					class 1990
					{
						name="1990s";
						value="1990";
					};
					class ww2
					{
						name="WW2";
						value="ww2";
					};
				};
			};
			class boatSafety
			{
				displayName="Added Protection From Boats";
				description="Enable to keep players from being squished by rhibs.";
				typeName="BOOL";
				defaultValue=0;
			};
			class civilianEquipment
			{
				displayName="Civilian Equipment";
				description="Enable to remove goggles and backpacks from civilians";
				typeName="BOOL";
				defaultValue=1;
			};
			class deadBodies
			{
				displayName="Player Base Body Cleanup";
				description="Range. Set to 0 to Disable";
				typeName="NUMBER";
				defaultValue=250;
			};
			class nightGear
			{
				displayName="Nighttime Equipment";
				description="Enable to give NVGs, Flares, and chemlights to units";
				typeName="BOOL";
				defaultValue=0;
			};
			class rollSleeves
			{
				displayName="Roll Sleeves";
				description="Enable to allow Rolling Sleeves";
				typeName="BOOL";
				defaultValue=0;
			};
			class run
			{
				displayName="Running in Base";
				description="Set base no run zone. 0 = Run anywhere";
				typeName="NUMBER";
				defaultValue=0;
			};
			class saveGear
			{
				displayName="Save Player Gear";
				description="Saves and Sets Gear for Disconects";
				typeName="BOOL";
				defaultValue=1;
			};
			class safeZone
			{
				displayName="Shooting in Base";
				description="Set number to set size of base no-fire zone. 0 = no safezone";
				typeName="NUMBER";
				defaultValue=400;
			};
			class stats
			{
				displayName="Stat Saving";
				description="Enable to allow saving player stats";
				typeName="BOOL";
				defaultValue=0;
			};
			class zuesObjects
			{
				displayName="Zeus Objects";
				description="Enable to give zeus access to all objects";
				typeName="BOOL";
				defaultValue=1;
			};
		};
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class Medical
			{
				class ACE_ArmLeft
				{
					class Syrette
					{
						displayName = "Syrette Morphine";
						distance = 5.0;
						condition = "[_player,_target, 'TWC_Syrette'] call twc_fnc_itemCheck";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target, 'hand_l','TWC_Syrette'] call twc_fnc_useSyrette";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
				};
				class ACE_ArmRight
				{
					class Syrette
					{
						displayName = "Syrette Morphine";
						distance = 5.0;
						condition = "[_player,_target, 'TWC_Syrette'] call twc_fnc_itemCheck";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target, 'hand_r','TWC_Syrette'] call twc_fnc_useSyrette";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
				};
				class ACE_LegLeft
				{
					class Syrette
					{
						displayName = "Syrette Morphine";
						distance = 5.0;
						condition = "[_player,_target, 'TWC_Syrette'] call twc_fnc_itemCheck";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target, 'leg_l','TWC_Syrette'] call twc_fnc_useSyrette";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
				};
				class ACE_LegRight
				{
					class Syrette
					{
						displayName = "Syrette Morphine";
						distance = 5.0;
						condition = "[_player,_target, 'TWC_Syrette'] call twc_fnc_itemCheck";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target, 'leg_r','TWC_Syrette'] call twc_fnc_useSyrette";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
				};
			};
		};
		class ACE_Actions
		{
			class Medical
			{
				class ACE_ArmLeft
				{
					class Syrette
					{
						displayName = "Syrette Morphine";
						distance = 5.0;
						condition = "[_player,_target, 'TWC_Syrette'] call twc_fnc_itemCheck";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target, 'hand_l','TWC_Syrette'] call twc_fnc_useSyrette";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
				};
				class ACE_ArmRight
				{
					class Syrette
					{
						displayName = "Syrette Morphine";
						distance = 5.0;
						condition = "[_player,_target, 'TWC_Syrette'] call twc_fnc_itemCheck";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target, 'hand_r','TWC_Syrette'] call twc_fnc_useSyrette";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
				};
				class ACE_LegLeft
				{
					class Syrette
					{
						displayName = "Syrette Morphine";
						distance = 5.0;
						condition = "[_player,_target, 'TWC_Syrette'] call twc_fnc_itemCheck";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target, 'leg_l','TWC_Syrette'] call twc_fnc_useSyrette";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
				};
				class ACE_LegRight
				{
					class Syrette
					{
						displayName = "Syrette Morphine";
						distance = 5.0;
						condition = "[_player,_target, 'TWC_Syrette'] call twc_fnc_itemCheck";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target, 'leg_r','TWC_Syrette'] call twc_fnc_useSyrette";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					};
				};
			};
		};
	};
};
class CfgFunctions
{
	class TWC
	{
		class Functions
		{
			file="twc_framework\functions";
			class Defend
			{
			};
			class Patrol
			{
			};
			class AirAssault
			{
			};
			class AttackPlane
			{
			};
			class AttackHelicopter
			{
			};
			class spawnIed
			{
			};
			class IEDpopulate
			{
			};
			class intelHint
			{
			};
			class Artillery
			{
			};
			class CommandMessage
			{
			};
			class LightsSwitch
			{
			};
			class Retreat
			{
			};
			class patrolRoads
			{
			};
			class placedIED
			{
			};
			class patrolMarkers
			{
			};
			class putWeaponOnBack
			{
			};
			class CreateTask
			{
			};
			class UpdateTask
			{
			};
			class daisyCutter
			{
			};
			class reconnected
			{
			};
			class createMarker
			{
			};
			class virtualMortar
			{
			};
		};
		class Modules
		{
			file="twc_framework\modules";
			class era
			{
			};
			class rollShirt
			{
			};
			class boatSafety
			{
			};
			class civilianEquipment
			{
			};
			class deadBodies
			{
			};
			class forwardBase
			{
			};
			class missionModuleInit
			{
			};
			class nightGear
			{
			};
			class run
			{
			};
			class saveGear
			{
			};
			class safeZone
			{
			};
			class stats
			{
			};
			class zeus
			{
			};
		};
		class medical
		{
			file="twc_framework\medical";
			class itemCheck {};
			class useSyrette {};
		};
		class admin
		{
			file="twc_framework\admin";
			class setSpectator {};
		};
		class cache
		{
			file="twc_framework\cache";
			class aiCaching {};
			class cacheGroup {};
			class cachePlayerJoined {};
			class cacheVehicle {};
			class unCacheGroup {};
			class unCacheGroupDefend {};
			class unCacheVehicle {};
			class vehicleCaching {};
		};

	};
};
class CfgMusic
{
	tracks[]={};
	class Theme
	{
		name="Theme";
		sound[]=
		{
			"twc_framework\music\TWCoperationTheme.ogg",
			"db+10",
			1
		};
	};
};
