class CfgVehicles {
	class Man;

	class CAManBase: Man {
		class ACE_SelfActions {
			class TWC_Gestures {
				displayName = "Issue Order";
				condition = "(canStand _target) && TWC_Show_Gestures";
				statement = "";
				exceptions[] = {"isNotSwimming"};
				showDisabled = 1;
				icon = "";
				
				class TWC_AI_Control_Gesture_Advance {
					displayName = "Advance";
					condition = "true";
					statement = "[_target] call TWC_AI_Control_Gestures_fnc_signalAdvance";
					icon = "";
					showDisabled = 1;
				};
				
				class TWC_AI_Control_Gesture_Halt {
					displayName = "Halt";
					condition = "true";
					statement = "[_target] call TWC_AI_Control_Gestures_fnc_signalHalt";
					icon = "";
					showDisabled = 1;
				};
			};
		};
	};
	
	/** MODULES **/
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
	
	//_group getVariable ["TWC_AI_Control_Gestures_HaltIgnoreChance", 0];
	class TWC_Module_Gestures_SetHaltIgnoreChance: Module_F {
		author = "[TWC] Bosenator";
		category = "TWC_AI_Control_Gestures";
		displayName = "Set Halt Ignore Chance";
		function = "TWC_AI_Control_Gestures_fnc_moduleSetHaltIgnoreChance";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "\twc_ai_control_gestures\ui\haltignorechance_ca.paa";
		functionPriority = 1;
		
		class probability {
			displayName = "Probability of Ignoring Halt Command(s)";
			description = "Range, from 0 to 100. Rounded to either.";
			typeName = "NUMBER";
			defaultValue = 0;
		};
		
		class ModuleDescription: ModuleDescription {
			description = "Set Halt Ignore Chance";
			sync[] = {"AnyAI"};
		};
	};
	
	//missionNamespace getVariable ["TWC_AI_Control_Gestures_Disabled", false];
	class TWC_Module_Gestures_SetHaltIgnoreChance: Module_F {
		author = "[TWC] Bosenator";
		category = "TWC_AI_Control_Gestures";
		displayName = "Mission Ignore Gestures";
		function = "TWC_AI_Control_Gestures_fnc_moduleMissionIgnoreGestures";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "\twc_ai_control_gestures\ui\missionignoregestures_ca.paa";
		functionPriority = 1;
	};
};