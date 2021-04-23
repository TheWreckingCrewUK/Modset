class CfgVehicles {
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
	
	class TWC_Module_Cache_Configuration: Module_F {
		author = "[TWC] Bosenator";
		scope = 2;
		displayName = "Cache Configuration";
		category = "TWC_Cache_Modules";
		function = "twc_fnc_cacheModuleInit";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "\twc_cache\ui\cache_config_ca.paa";

		class Arguments {
			class AI_Range {
				displayName = "AI Cache Range";
				description = "Range at which AI will cache. 0 to disable.";
				typeName = "NUMBER";
				defaultValue = 1500;
			};

			class Vehicle_Range {
				displayName = "Vehicle Cache Range";
				description = "Range at which vehicles will cache. 0 to disable.";
				typeName = "NUMBER";
				defaultValue = 2000;
			};

			class Urban_Range {
				displayName = "Urban Cache Range";
				description = "Range at which urban units will cache. 0 to disable.";
				typeName = "NUMBER";
				defaultValue = 750;
			};
		};
	};
	
	class TWC_Module_Cache_DisableOnUnit: Module_F {
		author = "[TWC] Bosenator";
		category = "TWC_Cache_Modules";
		displayName = "Disable Caching on Units";
		function = "twc_fnc_moduleDisableCaching";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "\twc_cache\ui\disable_caching_ca.paa";
		functionPriority = 1;
		
		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Disable Cache On Unit(s)";
			sync[] = {"AnyAI", "AnyVehicle"};
		};
	};
	
	class TWC_Module_Cache_TriggerUncache: Module_F {
		author = "[TWC] Bosenator";
		category = "TWC_Cache_Modules";
		displayName = "Trigger Unit(s) Uncache";
		function = "twc_fnc_moduleTriggerUncache";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_cache\ui\disable_caching_ca.paa";
		functionPriority = 1;
		
		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Disable Cache On Unit(s)";
			sync[] = {"AnyAI", "AnyVehicle"};
		};
	};
	
	class TWC_Module_Cache_SetUrbanUnit: Module_F {
		author = "[TWC] Bosenator";
		category = "TWC_Cache_Modules";
		displayName = "Set Urban Unit(s)";
		function = "twc_fnc_moduleUrbanUnitsCache";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "\twc_cache\ui\disable_caching_ca.paa";
		functionPriority = 1;

		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Set Urban Unit(s)";
			sync[] = {"AnyAI", "AnyVehicle"};
		};
	};
};