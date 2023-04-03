class CfgVehicles {
	class Logic;
	class Module_F: Logic {
		class AttributesBase {
			class Default;
			class Edit;					// Default edit box (i.e. text input field)
			class Combo;				// Default combo box (i.e. drop-down menu)
			class Checkbox;				// Default checkbox (returned value is Boolean)
			class CheckboxNumber;		// Default checkbox (returned value is Number)
			class ModuleDescription;	// Module description
			class Units;				// Selection of units on which the module is applied
		};

		class ModuleDescription {
			class Anything;
			class EmptyDetector;
		};
	};
	
	class TWC_Module_CacheConfig: Module_F {
		author = "[TWC] jayman";
		scope = 2;
		displayName = "Cache Configuration";
		category = "twc_cache_modules";
		function = "twc_cache_fnc_initCacheModule";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;

		class Arguments {
			class enabled {
				displayName = "Enabled";
				description = "Enable Caching (highly recommended)";
				typeName = "BOOL";
				defaultValue = 1;
			};

			class characters {
				displayName = "AI Range";
				description = "Range at which AI will cache. 0 to disable.";
				typeName = "NUMBER";
				defaultValue = 1500;
			};

			class vehicles {
				displayName = "Vehicle Caching";
				description = "Range at which vehicles will cache. 0 to disable.";
				typeName = "NUMBER";
				defaultValue = 2000;
			};
			
			class emptyVehicles {
				displayName = "Empty Vehicles";
				description = "Range at which empty vehicles will cache. 0 to disable. Should be set higher than the longest AT ability";
				typeName = "NUMBER";
				defaultValue = 800;
			};
			
			class isMoving {
				displayName = "is Moving?";
				description = "Increases Range when units are moving. It's a multiplier";
				typeName = "NUMBER";
				defaultValue = 1;
			};
		};
		
		
	};
	
	class TWC_Module_DisableCaching: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_cache_modules";
		displayName = "Disable Caching on Unit(s)";
		function = "twc_cache_fnc_moduleDisableCaching";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "\twc_cache\ui\disable_caching_ca.paa";
		functionPriority = 1;

		class Attributes: AttributesBase {
			// Module Description should always be shown last
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription {
			description = "Disable Cache On Unit(s)";
			sync[] = {"AnyAI", "AnyVehicle"};
		};
	};

	class TWC_Module_TriggerUncache: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_cache_modules";
		displayName = "Trigger Unit(s) Uncache";
		function = "twc_cache_fnc_moduleTriggerUncache";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_cache\ui\disable_caching_ca.paa";
		functionPriority = 1;
		
		class Attributes: AttributesBase {
			// Module Description should always be shown last
			class ModuleDescription: ModuleDescription{};
		};
		
		class ModuleDescription: ModuleDescription {
			description = "Trigger Uncache On Unit(s)";
			sync[] = {"AnyAI", "AnyVehicle"};
		};
	};
	
	class TWC_Zeus_ForceUncache: Module_F {
		author = "[TWC] jayman";
		category = "twc_zeus";
		scope = 1;
		scopeCurator = 2;
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		function = "twc_cache_fnc_zeusForceUncache";
		curatorCanAttach = 1;
		displayName = "Force Uncache";
	};
};
