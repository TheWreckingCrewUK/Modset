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

	class TWC_Suppress_Module: Module_F {
		author = "[TWC] Bosenator";
		scope = 2;
		displayName = "Suppress";
		category = "twc_mission_framework";
		function = "twc_suppress_fnc_module";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_suppress\ui\suppress_ca.paa";

		class Attributes: AttributesBase {
			class Target: Combo {
				property = "TWC_Suppress_Module_Target";
				displayName = "Suppression Target";
				tooltip = "What should the sync'd units suppress?";
				typeName = "STRING";
				defaultValue = "Module";
				
				class Values {
					class T_Module { name = "Module Position"; value = "Module"; };
					class T_PlayerRand { name = "Random Trigger Player"; value = "RandomPlayer"; };
				};
			};
		};
	};
};