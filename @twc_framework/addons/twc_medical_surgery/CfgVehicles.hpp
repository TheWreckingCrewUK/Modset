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
	
	class TWC_Module_AssignFieldTent: Module_F {
		author = "[TWC] Bosenator";
		scope = 2;
		scopeCurator = 0;
		displayName = "TWC Medical Configuration";
		category = "twc_missionSetup";
		function = "twc_medical_surgery_fnc_moduleAssignFieldTent";
		functionPriority = 10;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisplosable = 0;
		
		class Arguments {
			class enabled {
				displayName = "Set as Field Tent";
				description = "Set as Field Tent";
				typeName = "BOOL";
			};
		};
		
		class ModuleDescription {
			description = "Object(s) to set as Field Tent";
			sync[] = {};
		};
	};
	
	class TWC_Curator_setFieldTent: Module_F {
		author = "[TWC] Bosenator";
		scope = 1;
		scopeCurator = 2;
		displayName = "Set Field Tent";
		category = "twc_zeus";
		function = "twc_medical_surgery_fnc_curatorSetFieldTent";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisplosable = 0;
		curatorCanAttach = 1;
	};
};