class CUP_B_GR9_GBU12_GB;
class TWC_Vehicle_ColdWar_HarrierGR3_RAF: CUP_B_GR9_GBU12_GB {
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
	
	REGULAR_77({"crew"}, {"Intercom_1"})
};

class TWC_Vehicle_ColdWar_Hercules_RAF_VIV: TWC_Vehicle_Generic_Hercules_RAF_VIV {
	scope = 2;
	side = 1;
	ADD_FACTION;

	displayname = "Hercules (Cold War) - VIV (RAF)";
	editorSubcategory = "TWC_ForceType_Airborne";

	REGULAR_77({"crew"}, {"Intercom_2"})
};

class CUP_B_C47_USA;
class TWC_Vehicle_ColdWar_C47_RAF: CUP_B_C47_USA {
	scope = 2;
	side = 1;
	ADD_FACTION;

	displayname = "Dakota (Cold War) - VIV (RAF)";
	editorSubcategory = "TWC_ForceType_Airborne";

	hiddenSelectionsTextures[] = {
		"TWC_Vehicles\data\dc3_body_raf_01_co.paa",
		"TWC_Vehicles\data\dc3_body_raf_02_co.paa"
	};

	REGULAR_77({"crew"}, {"Intercom_2"})
};