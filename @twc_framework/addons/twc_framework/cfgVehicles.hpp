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
				description="Enable for Headless Clients";
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
				description="Ends Mission when all Players Disconnect";
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
				description="Enable for Unit Caching";
				typeName="BOOL";
				defaultValue=1;
			};
			class aiRange
			{
				displayName="AI Range";
				description="Range at which AI will Cache 0 to Disable";
				typeName="NUMBER";
				defaultValue=1500;
			};
			class vehicleRange
			{
				displayName="Vehicle Caching";
				description="Range at which vehicles will Cache 0 to Disable";
				typeName="NUMBER";
				defaultValue=2000;
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

	class TWC_Module_StationaryUnits: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Stationary Units";
		function = "twc_fnc_moduleStationaryUnits";
		scope = 1;
		isGlobal = 0;
		isTriggerActivated = 0;
		icon = ""; // TODO
		functionPriority = 1;
		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Set Units as Stationary";
			sync[] = {"AnyAI"};
		};
	};
};