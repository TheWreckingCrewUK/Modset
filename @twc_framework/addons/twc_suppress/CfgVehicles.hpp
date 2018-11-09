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
			class target {
				displayName = "Suppression Target";
				description = "What should the sync'd units suppress?";
				typeName = "STRING";
				defaultValue = "T_Module";
				
				class values {
					class T_Module {
						name = "Module Position";
						value = "T_Module";
					};

					class T_PlayersRand {
						name = "Random Trigger Players";
						value = "T_PlayerRand";
					};
				};
			};
			
			class radius {
				displayName = "Random Radius";
				description = "Radius in which to pick a random position each cycle & unit.";
				typeName = "NUMBER";
				defaultValue = 0;
			};
			
			class triggerName {
				displayName = "Trigger Variable Name";
				description = "The variable name of the associated area trigger";
				typeName = "String";
				defaultValue = "";
			};
		};

		class ModuleDescription: ModuleDescription {
			description = "Set Unit(s) that'll Suppress";
			sync[] = {"AnyAI"};
		};
	};
};