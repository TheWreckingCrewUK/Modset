class CfgVehicles {
	class Logic;
	class Module_F: Logic {
		class AttributesBase {
			class Default;
			class Edit;
			class Combo;
			class CheckBox;
			class CheckBoxNumber;
			class ModuleDescription;
			class Units;
		};
		
		class ModuleDescription {
			class EmptyDetector;
			class AnyAI;
		};
	};

	class TWC_moduleSuppress: Module_F {
		author = "[TWC] Bosenator";
		scope = 2;
		displayName = "AI Suppress";
		category = "twc_mission_framework";
		function = "twc_suppress_fnc_moduleSuppress";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_suppress\ui\suppress_ca.paa";

		class Arguments {
			class Target: Combo {
				displayName = "Suppression Target";
				description = "What should the sync'd units suppress?";
				typeName = "STRING";
				defaultValue = "Module";
				
				class Values {
					class T_Module {
						name = "Module Position";
						value = "Module";
					};

					class T_PlayerRand {
						name = "Random Trigger Player"; 
						value = "RandomPlayer";
					};
				};
			};
		};

		class ModuleDescription: ModuleDescription {
			description = "Set Unit(s) that'll Suppress";
			sync[] = {"EmptyDetector", "AnyAI"};
		};
	};
};