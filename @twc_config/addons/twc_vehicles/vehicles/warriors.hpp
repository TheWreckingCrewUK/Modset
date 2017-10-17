// This file defines our custom warriors, as the CUP one is pretty inaccurate
// Two camoflauges, either with or without SLAT
class CUP_B_MCV80_GB_D_SLAT;
class TWC_Vehicle_FV510_D_SLAT: CUP_B_MCV80_GB_D_SLAT {
	scope = 0;
	scopeCurator = 0;
	side = 1;

	displayname = "FV510 D SLAT (EMPTY)";
	editorSubcategory = "TWC_ForceType_Mechanised";

	class TransportItems {}; 
	class TransportMagazines {};
	class TransportWeapons { };
	class TransportBackpacks { };
};

class TWC_Vehicle_FV510_D: TWC_Vehicle_FV510_D_SLAT {
	
};