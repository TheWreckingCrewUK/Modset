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
};