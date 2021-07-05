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

	class TWC_Box_Replenish_Module: Module_F {
		author = "[TWC] Bosenator";
		scope = 2;
		displayName = "Set Replenish Box(es) Quantities";
		category = "twc_mission_framework";
		function = "TWC_Box_Replenish_fnc_moduleSetReplenishQuantity";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "\twc_box_replenish\ui\replenish_ca.paa";
		functionPriority = 1;

		class Arguments {
			class artillery {
				displayName = "Artillery Resupplies";
				description = "0 to disable, -1 for infinite.";
				typeName = "NUMBER";
				defaultValue = -1;
			};
			
			class launcher {
				displayName = "Launcher Resupplies";
				description = "0 to disable, -1 for infinite.";
				typeName = "NUMBER";
				defaultValue = -1;
			};
			
			class medical {
				displayName = "Medical Resupplies";
				description = "0 to disable, -1 for infinite.";
				typeName = "NUMBER";
				defaultValue = -1;
			};
			
			class section {
				displayName = "Section Resupplies";
				description = "0 to disable, -1 for infinite.";
				typeName = "NUMBER";
				defaultValue = -1;
			};
			
			class other {
				displayName = "'Other' Resupplies";
				description = "0 to disable, -1 for infinite.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
		};
		
		class ModuleDescription: ModuleDescription {
			description = "What boxes to set quantities on?";
			sync[] = {"AnyVehicle"};
		};
	};
};
