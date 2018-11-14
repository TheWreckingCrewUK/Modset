class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_Actions {
			class ACE_MainActions {
				class Medical {
					class ACE_Torso {
						class fieldDressing;
						class Defib: fieldDressing {
							displayName = "Defibrillate";
							condition = "[_player, _target] call twc_medical_fnc_canDefib";
							statement = "[_player, _target] call twc_medical_fnc_Defib";
							exceptions[] = {"isNotDragging", "isNotCarrying", "isNotInside", "isNotSwimming"};
							icon = "";
						};
						
						class Surgery: fieldDressing {
							displayName = "Surgery";
							condition = "[_player, _target] call twc_medical_fnc_canSurgery";
							statement = "[_player, _target] call twc_medical_fnc_surgery";
							exceptions[] = {"isNotDragging", "isNotCarrying", "isNotSwimming"};
							icon = "";
						};
						
						class Diagnose;
						class LogDebug: Diagnose {
							displayName = "Medical to RPT (DEBUG)";
							condition = "true";
							statement = "[_player, _target] call twc_medical_fnc_logToRPT";
							exceptions[] = {"isNotDragging", "isNotCarrying", "isNotSwimming"};
							icon = "";
						};
					};
				};
			};
		};
	};
	
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

	class TWC_Module_Medical: Module_F {
		author = "[TWC] Bosenator";
		scope = 2;
		displayName = "TWC Medical Configuration";
		category = "twc_missionSetup";
		function = "twc_medical_fnc_moduleMedical";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisplosable = 0;
		
		class Arguments {
			class enablePublicCPRChance {
				displayName = "Enable Public CPR Chance";
				description = "Enable higher chance of CPR being successful";
				typeName = "BOOL";
				defaultValue = 0;
			};
		};
	};
};