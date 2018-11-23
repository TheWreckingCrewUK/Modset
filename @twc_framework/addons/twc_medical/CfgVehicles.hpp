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
	
	/** EDITOR ONLY MODULES **/
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
	
	/** ZEUS/CURATOR ONLY MODULES **/
	class TWC_Curator_fullHealUnit: Module_F {
		author = "[TWC] Bosenator";
		category = "twc_zeus";
		scope = 1;
		scopeCurator = 2;
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		function = "twc_medical_fnc_fullHealUnit";
		curatorCanAttach = 1;
		displayName = "Fully Heal Unit";
	};
	
	class TWC_Curator_killUnit: Module_F {
		author = "[TWC] Bosenator";
		category = "twc_zeus";
		scope = 1;
		scopeCurator = 2;
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		function = "twc_medical_fnc_killUnit";
		curatorCanAttach = 1;
		displayName = "Kill Unit";
	};
	
	class TWC_Curator_resuscitateUnit: Module_F {
		author = "[TWC] Bosenator";
		category = "twc_zeus";
		scope = 1;
		scopeCurator = 2;
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		function = "twc_medical_fnc_resuscitateUnit";
		curatorCanAttach = 1;
		displayName = "Resuscitate Unit";
	};
	
	class TWC_Curator_inspectUnit: Module_F {
		author = "[TWC] Bosenator";
		category = "twc_zeus";
		scope = 1;
		scopeCurator = 2;
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		function = "twc_medical_fnc_inspectUnit";
		curatorCanAttach = 1;
		displayName = "Inspect Unit (Medically)";
	};
	
	class TWC_Curator_logUnit: Module_F {
		author = "[TWC] Bosenator";
		category = "twc_zeus";
		scope = 1;
		scopeCurator = 2;
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		function = "twc_medical_fnc_logUnit";
		curatorCanAttach = 1;
		displayName = "log Unit (Medically)";
	};
	
	class TWC_Module_setFieldTent: Module_F {
		author = "[TWC] Bosenator";
		scope = 1;
		scopeCurator = 2;
		displayName = "Set Field Tent";
		category = "twc_zeus";
		function = "twc_medical_fnc_setFieldTent";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisplosable = 0;
		curatorCanAttach = 1;
	};
};