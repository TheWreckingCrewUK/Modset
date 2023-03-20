#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE GENERIC_EMPTY
class CUP_B_CH47F_GB;
class TWC_Vehicle_Generic_Chinook_RAF: CUP_B_CH47F_GB {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Chinook (RAF)";
	editorSubcategory = "TWC_ForceType_AirMobility";

	class TransportItems { }; 
	class TransportMagazines { };
	class TransportWeapons { };
	class TransportBackpacks { };
};

class CUP_B_CH47F_VIV_GB;
class TWC_Vehicle_Generic_Chinook_RAF_VIV: CUP_B_CH47F_VIV_GB {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Chinook - VIV (RAF)";
	editorSubcategory = "TWC_ForceType_AirMobility";

	class TransportItems { }; 
	class TransportMagazines { };
	class TransportWeapons { };
	class TransportBackpacks { };
};