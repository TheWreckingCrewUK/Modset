#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE GENERIC_EMPTY
// defined in twc_framework\twc_parachute
/* class CUP_B_C130J_GB;
class TWC_Vehicle_Generic_Hercules_RAF: CUP_B_C130J_GB {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Hercules (RAF)";
	editorSubcategory = "TWC_ForceType_Airborne";
	
	class TransportItems { }; 
	class TransportMagazines { };
	class TransportWeapons { };
	class TransportBackpacks { };
}; */

class CUP_B_C130J_Cargo_GB;
class TWC_Vehicle_Generic_Hercules_RAF_VIV: CUP_B_C130J_Cargo_GB {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Hercules - VIV (RAF)";
	editorSubcategory = "TWC_ForceType_Airborne";
	
	class TransportItems { }; 
	class TransportMagazines { };
	class TransportWeapons { };
	class TransportBackpacks { };
};