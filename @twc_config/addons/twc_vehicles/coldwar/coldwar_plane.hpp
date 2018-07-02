class CUP_B_GR9_DYN_GB;
class TWC_Vehicle_ColdWar_HarrierGR3_RAF: CUP_B_GR9_DYN_GB {
	scope = 2;
	scopeCurator = 0; // dynamic loadout, sort of fuck'd if we need to spawn mid game
	side = 1;
	ADD_FACTION;
	
	displayname = "Harrier GR.3 (RAF)";
	editorSubcategory = "TWC_ForceType_Airborne";
	
	fuelCapacity = 6140; //4140 default, f35 - 13325
	
	class TransportItems { }; 
	class TransportMagazines { };
	class TransportWeapons { };
	class TransportBackpacks { };
	
	class AcreRacks {
		class Rack_1 {
			displayName = "Vehicle Radio";
			shortName = "Vehicle Radio";
			componentName = "ACRE_VRC64";
			allowedPositions[] = {"crew"};
			disabledPositions[] = {};
			defaultComponents[] = {};
			mountedRadio = "ACRE_PRC77";
			isRadioRemovable = 0;
			intercom[] = {"Intercom_1"};
		};
	};
};

class TWC_Vehicle_ColdWar_Hercules_RAF_VIV: TWC_Vehicle_Generic_Hercules_RAF_VIV {
	scope = 2;
	side = 1;
	ADD_FACTION;

	displayname = "Hercules (Cold War) - VIV (RAF)";
	editorSubcategory = "TWC_ForceType_Airborne";

	class AcreRacks {
		class Rack_1 {
			displayName = "Vehicle Radio";
			shortName = "Vehicle Radio";
			componentName = "ACRE_VRC64";
			allowedPositions[] = {"crew"};
			disabledPositions[] = {};
			defaultComponents[] = {};
			mountedRadio = "ACRE_PRC77";
			isRadioRemovable = 0;
			intercom[] = {"Intercom_2"};
		};
	};
};