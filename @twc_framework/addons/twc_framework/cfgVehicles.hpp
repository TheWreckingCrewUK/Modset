class cfgVehicles {
	class Logic;
	
	class Module_Base: Logic {
		class AttributesBase;
		class ModuleDescription;
	};
	
	class Module_F: Module_Base {
		class AttributesBase: AttributesBase {
			class Default;
			class Edit;
			class Combo;
			class CheckBox;
			class CheckBoxNumber;
			class ModuleDescription;
			class Units;
		};
		
		class ModuleDescription: ModuleDescription {
			class Player;
		};
	};

	class twc_ModuleMission: Module_F {
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
			class disconectGear
			{
				displayName="Disconect Gear";
				description="Removes gear from the previous body when they disconect";
				typeName="BOOL";
				defaultValue=1;
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
			class safeZone
			{
				displayName="Shooting in Base";
				description="Set number to set size of base no-fire zone. 0 = no safezone";
				typeName="NUMBER";
				defaultValue=400;
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
	
	class twc_moduelHC: Module_F {
		author="[TWC] jayman";
		scope=2;
		displayName="TWC Headless Client Module";
		category="twc_missionSetup";
		function="twc_fnc_hcModuleInit";
		functionPriority=1;
		isGlobal=0;
		isTriggerActivated=0;
		isDisposable=0;
		class Arguments
		{
			class enabled
			{
				displayName="Enabled";
				description="Enable for headless clients";
				typeName="BOOL";
				defaultValue=1;
			};
			class delay
			{
				displayName="Delay";
				description="Adds a delay before HC begin. 120 is usually optimal.";
				typeName="NUMBER";
				defaultValue=120;
			};
			class endMission
			{
				displayName="End Mission";
				description="Ends mission when all players disconnect";
				typeName="BOOL";
				defaultValue=0;
			};
		};
	};
	
	class twc_moduelCache: Module_F {
		author="[TWC] jayman";
		scope=2;
		displayName="TWC Cache Module";
		category="twc_missionSetup";
		function="twc_fnc_cacheModuleInit";
		functionPriority=1;
		isGlobal=0;
		isTriggerActivated=0;
		isDisposable=0;
		class Arguments
		{
			class enabled
			{
				displayName="Enabled";
				description="Enable for unit caching";
				typeName="BOOL";
				defaultValue=1;
			};
			class aiRange
			{
				displayName="AI Range";
				description="Range at which AI will cache. 0 to disable.";
				typeName="NUMBER";
				defaultValue=1500;
			};
			class vehicleRange
			{
				displayName="Vehicle Caching";
				description="Range at which vehicles will cache. 0 to disable.";
				typeName="NUMBER";
				defaultValue=2000;
			};
		};
	};

	class twc_moduleDebug: Module_F {
		author = "[TWC] Bosenator";
		scope = 2;
		displayName = "Debug Mode";
		category = "twc_missionSetup";
		function = "twc_fnc_moduleDebug";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;

		class Arguments {
			class enabled {
				displayName = "Enabled";
				description = "Enable debug mode";
				typeName = "BOOL";
				defaultValue = 0;
			};
		};
	};

	class twc_moduleHealPlayer: Module_F {
		author="[TWC] jayman";
		category="twc_zeus";
		scope=1;
		scopeCurator = 2;
		functionPriority=1;
		isGlobal=1;
		isTriggerActivated=0;
		function="twc_fnc_healPlayer";
		curatorCanAttach = 1;
		displayName = "Heal Player";
	};
	
	class twc_moduleKillPlayer: Module_F {
		author="[TWC] jayman";
		category="twc_zeus";
		scope=1;
		scopeCurator = 2;
		functionPriority=1;
		isGlobal=1;
		isTriggerActivated=0;
		function="twc_fnc_killPlayer";
		curatorCanAttach = 1;
		displayName = "Kill Player";
	};
	
	class twc_modulesetSpectator: Module_F {
		author="[TWC] jayman";
		category="twc_zeus";
		scope=1;
		scopeCurator = 2;
		functionPriority=1;
		isGlobal=1;
		isTriggerActivated=0;
		function="twc_fnc_setSpectator";
		curatorCanAttach = 1;
		displayName = "Toggle Unit ACRE Spectator";
	};

	class twc_moduleMedicalInfo: Module_F {
		author="[TWC] jayman";
		category="twc_zeus";
		scope=1;
		scopeCurator = 2;
		functionPriority=1;
		isGlobal=1;
		isTriggerActivated=0;
		function="twc_fnc_medicalInfo";
		curatorCanAttach = 1;
		displayName = "Hint Unit Medical Info";
	};

	class TWC_Module_VirtualArtillery: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Virtual Artillery";
		function = "twc_fnc_moduleVirtualArtillery";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\twc_framework\ui\virtual_artillery_ca.paa";
		functionPriority = 1;
		class Arguments {
			class Type
			{
				displayName="Type";
				description="Type Of Ordinance";
				typeName="STRING";
				defaultValue="HE";
				class values
				{
					class HE
					{
						name="HE";
						value="HE";
					};
					class Smoke
					{
						name="Smoke";
						value="smoke";
					};
					class Illum
					{
						name="Illum";
						value="illum";
					};
				};
			};
			class Rounds
			{
				displayName = "Rounds";
				description="Number of rounds";
				typeName="Number";
				defaultValue=5;
			};
			class Dispersion
			{
				displayName = "Dispersion";
				description="Dispersion diameter";
				typeName="Number";
				defaultValue=250;
			};
			class Delay
			{
				displayName = "Delay";
				description="Delay between rounds";
				typeName="Number";
				defaultValue=10;
			};
			class SafeArea
			{
				displayName = "SafeArea";
				description="Area marker defined SafeZone";
				typeName="String";
				defaultValue="nil";
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Call in Virtual Artillery";
			sync[] = {"EmptyDetector"};
		};
	};
	
	class TWC_Module_CompleteTask: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Complete Task";
		function = "twc_fnc_moduleUpdateTask";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\twc_framework\ui\complete_task_ca.paa";
		functionPriority = 1;
		class Arguments {
			class TaskID
			{
				displayName="TaskID";
				description="Task1, Task2, Task3 etc";
				typeName="STRING";
				defaultValue="";
			};
			class Status
			{
				displayName = "Task Status";
				description="Succeeded/Failed";
				typeName="String";
				defaultValue="Succeeded";
				class values
				{
					class SUCCEEDED
					{
						name="SUCCEEDED";
						value="SUCCEEDED";
					};
					class FAILED
					{
						name="FAILED";
						value="FAILED";
					};
					class CANCELED
					{
						name="CANCELLED";
						value="CANCELLED";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Update Task";
			sync[] = {"EmptyDetector"};
		};
	};
	
	class TWC_Module_Defend: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Defend";
		function = "twc_fnc_moduleDefend";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\twc_framework\ui\defend_ca.paa";
		functionPriority = 1;
		class Arguments
		{
			class Radius
			{
				displayName="Radius";
				description="Radius";
				typeName="Number";
				defaultValue=100;
			};
			class Size
			{
				displayName="Size";
				description="Size";
				typeName="Number";
				defaultValue=2;
			};
			class Patrol
			{
				displayName="Patrol";
				description="Have units patrol?";
				typeName="BOOl";
				defaultValue=0;
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "TWC Defend Function";
			sync[] = {"AnyAI"};
		};
	};
	
	class TWC_Module_AirAssault: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Air Assault";
		function = "twc_fnc_moduleAirAssault";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\twc_framework\ui\air_assault_ca.paa";
		functionPriority = 1;
		class Arguments
		{
			class LZ
			{
				displayName="LZ";
				description="Landing Zone";
				typeName="String";
				defaultValue="";
			};
			class InfantryMarker
			{
				displayName="Infantry Move";
				description="Marker that infantry will move to";
				typeName="String";
				defaultValue="";
			};
			class ERA
			{
				displayName="ERA";
				description="Era for type of units";
				typeName="String";
				defaultValue="Modern";
				class values
				{
					class Modern
					{
						name="Modern";
						value="Modern";
					};
					class Cold
					{
						name="Cold";
						value="Cold";
					};
					class Custom
					{
						name="Custom";
						value="Custom";
					};
				};
			};
			class HeloClass
			{
				displayName="Helicopter Classname";
				description="If custom please input helicopter classname";
				typeName="String";
				defaultValue="";
			};
			class InfClass
			{
				displayName="Infantry Classname";
				description="If custom please input infantry group classname";
				typeName="String";
				defaultValue="";
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Call in Air Assault";
			sync[] = {""};
		};
	};
	
	class TWC_Module_AttackPlane: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Attack Plane";
		function = "twc_fnc_moduleAttackPlane";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\twc_framework\ui\attack_plane_ca.paa";
		functionPriority = 1;
		class Arguments
		{
			class Patrol
			{
				displayName="Patrol";
				description="Marker plane will patrol around";
				typeName="String";
				defaultValue="";
			};
			class Radius
			{
				displayName="Radius";
				description="Radius plane will fly around marker";
				typeName="Number";
				defaultValue=0;
			};
			class Type
			{
				displayName="Type Of Attack Plane";
				description="ClassName";
				typeName="String";
				defaultValue="";
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Call in Attack Plane";
			sync[] = {""};
		};
	};
	
	class TWC_Module_CommandMessage: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Command Message";
		function = "twc_fnc_moduleCommandMessage";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\twc_framework\ui\command_message_ca.paa";
		functionPriority = 1;
		class Arguments
		{
			class Message
			{
				displayName="Message";
				description="Text To Display";
				typeName="String";
				defaultValue="";
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Send Command A Message";
			sync[] = {""};
		};
	};
	
	class TWC_Module_IntelHint: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Intel Action Hint";
		function = "twc_fnc_moduleIntelHint";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		icon = "\twc_framework\ui\intel_action_ca.paa";
		functionPriority = 1;
		class Arguments
		{
			class Title
			{
				displayName="Title";
				description="Title To Display";
				typeName="String";
				defaultValue="";
			};
			class Message
			{
				displayName="Message";
				description="Text To Display";
				typeName="String";
				defaultValue="";
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Intel Hint";
			sync[] = {""};
		};
	};
	
	class TWC_Module_LightsSwitch: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Lights Switch";
		function = "twc_fnc_moduleLightsSwitch";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\twc_framework\ui\light_switch_ca.paa";
		functionPriority = 1;
		class Arguments
		{
			class Status
			{
				displayName="On/Off";
				description="Select On or Off";
				typeName="Number";
				defaultValue=0.95;
				class values
				{
					class On
					{
						name="On";
						value=0;
					};
					class Off
					{
						name="Off";
						value=0.95;
					};
				};
			};
			class Radius
			{
				displayName="Radius";
				description="Radius from module to disable lights";
				typeName="Number";
				defaultValue=0;
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Turn off the lights";
			sync[] = {""};
		};
	};
	
	class TWC_Module_DaisyCutter: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Daisy Cutter";
		function = "twc_fnc_moduleDaisyCutter";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 01;
		icon = "\twc_framework\ui\daisy_cutter_ca.paa";
		functionPriority = 1;
		class ModuleDescription: ModuleDescription {
			description = "Boom";
			sync[] = {""};
		};
	};
		
	class TWC_Module_StationaryUnits: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Set Stationary Units";
		function = "twc_fnc_moduleStationaryUnits";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		icon = "\twc_framework\ui\stationary_units_ca.paa";
		functionPriority = 1;
		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Set Unit(s) as Stationary";
			sync[] = {"AnyAI"};
		};
	};

	class TWC_Module_DisableCaching: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Disable Caching on Units";
		function = "twc_fnc_moduleDisableCaching";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		icon = "\twc_framework\ui\disable_caching_ca.paa";
		functionPriority = 1;
		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Disable Cache On Unit(s)";
			sync[] = {"AnyAI", "AnyVehicle"};
		};
	};

	class TWC_Module_GrabComposition: Module_F {
		author = "[TWC] Bosenator";
		category = "twc_missionSetup";
		displayName = "Log Composition to RPT file";
		function = "twc_fnc_moduleGrabComposition";
		scope = 2;
		scopeCurator = 0;
		isGlobal = 1;
		isTriggerActivated = 0;
		is3DEN = 1;
		functionPriority = 1;
	};

	/* class TWC_Module_ArtillerySpotter: Module_F {
		author = "[TWC] Bosenator";
		category = "twc_mission_framework";
		displayName = "Artillery System - Set Spotter(s)";
		function = "twc_fnc_moduleArtillerySpotter";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		icon = ""; // TODO
		functionPriority = 1;
		class Arguments {
			class maxRange {
				displayName = "Maximum Range";
				description = "How far can the spotter(s) spot out to? Targets beyond this range, or go further than this range won't be fired upon. Set in meters.";
				typeName = "NUMBER";
				defaultValue = 1000;
			};

			class minDelay {
				displayName = "Minimum Delay";
				description = "How fast after spotting the target, should the call be made. In seconds. Set to 0 to be random between 2 and 5 minutes.";
				typeName = "NUMBER";
				defaultValue = 120;
			};

			class startingRadius {
				displayName = "Starting Radius";
				description = "The initial radius before zeroing correction narrows it down, closer to the target. Set in meters.";
				typeName = "NUMBER";
				defaultValue = 500;
			};

			class skillLevel {
				displayName = "Skill Level";
				description = "Sets the Skill Level of the Spotter(s). Affects correction accuracy, and speed of communication.";
				typeName = "STRING";
				defaultValue = "untrained";
				
				class values {
					class trained {
						name = "Trained";
						value = "trained";
					};
					
					class untrained {
						name = "Untrained";
						value = "untrained";
					};
				};
			};

			class illuminationOnly {
				displayName = "Illumination Only";
				description = "Should this spotter only call in for Illumination? Tick to enable.";
				typeName = "BOOL";
				defaultValue = 0;
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Set Unit(s) as Artillery Spotter(s)";
			sync[] = {"AnyAI"};
		};
	};
	
	class TWC_Module_ArtilleryPieces: Module_F {
		author = "[TWC] Bosenator";
		category = "twc_mission_framework";
		displayName = "Artillery System - Set Piece(s)";
		function = "twc_fnc_moduleArtilleryPieces";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		icon = ""; // TODO
		functionPriority = 1;
		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Set Piece(s) Available to Spotter(s)";
			sync[] = {"AnyVehicle"};
		};
	}; */
};