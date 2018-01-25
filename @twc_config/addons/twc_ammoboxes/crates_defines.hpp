// Base Classes, all others inherit from these!

class CUP_BAF_VehicleBox;
class Box_NATO_Ammo_F;
class Box_NATO_AmmoVeh_F;
class ACE_medicalSupplyCrate;
class B_supplyCrate_F;

class TWC_AmmoBox_Base: CUP_BAF_VehicleBox {
	scope = 1;
	// 1 - protected
	// 2 - public for ((Zeus)) and Editor
	displayName = "Ammo Box (Base)";
	author      = "Bosenator";

	class TransportMagazines { };
	class TransportItems     { };
	class TransportWeapons   { };
	class TransportBackpacks { };

	editorCategory = "TWC_Crates";
	editorSubcategory = "TWC_Crates_Other"; // default here

	// ACE Defines
	ace_cargo_canLoad     = 0;
	ace_cargo_hasCargo    = 0;

	ace_dragging_canCarry = 0;
	ace_dragging_canDrag  = 0;
};

class TWC_AmmoBox_Portable: Box_NATO_Ammo_F {
	scope = 1;
	displayName = "Ammo Box (Portable)";
	author      = "Bosenator";
	
	class TransportMagazines { };
	class TransportItems     { };
	class TransportWeapons   { };
	class TransportBackpacks { };
	
	editorCategory = "TWC_Crates";
	editorSubcategory = "TWC_Crates_Other";
	
	// ACE Defines
	ace_cargo_canLoad     = 1;
	ace_cargo_size        = 1;
	ace_cargo_hasCargo    = 0;
	
	ace_dragging_canCarry = 1;
	ace_dragging_canDrag  = 1;
};

class TWC_AmmoBox_Vehicle: Box_NATO_AmmoVeh_F {
	scope = 1;
	displayName = "Vehicle Ammo Box (Immobile)";
	author      = "Bosenator";

	editorCategory = "TWC_Crates";
	editorSubcategory = "TWC_Crates_Vehicles";

	class TransportMagazines { };
	class TransportItems     { };
	class TransportWeapons   { };
	class TransportBackpacks { };

	// ACE Defines
	ace_cargo_canLoad     = 0;
	ace_cargo_hasCargo    = 0;
	
	ace_dragging_canCarry = 0;
	ace_dragging_canDrag  = 0;
};

class TWC_AmmoBox_Medical: ACE_medicalSupplyCrate {
	scope = 1;
	displayName = "Medical Box (Portable)";
	author      = "Bosenator";

	class TransportMagazines { };
	class TransportItems     { };
	class TransportWeapons   { };
	class TransportBackpacks { };

	editorCategory = "TWC_Crates";
	editorSubcategory = "TWC_Crates_Other";

	// ACE Defines
	ace_cargo_canLoad     = 1;
	ace_cargo_size        = 1;
	ace_cargo_hasCargo    = 0;

	ace_dragging_canCarry = 1;
	ace_dragging_canDrag  = 1;
};

// It's here for a myriad of reasons, all of which I can't explain...
class TWC_AmmoBox_Other_Pallet: B_supplyCrate_F  {
	scope = 2;
	scopeCurator = 2;
	displayName = "Cargo Pallet (Deployable/Immobile)";
	author      = "Bosenator";

	editorCategory = "TWC_Crates";
	editorSubcategory = "TWC_Crates_Other";

	class TransportMagazines { };
	class TransportItems     { };
	class TransportWeapons   { };
	class TransportBackpacks { };
	
	ace_dragging_canCarry = 0;
	ace_dragging_canDrag  = 1;
	
	// Disable inventory on it
	maximumLoad           = 0;
	transportMaxMagazines = 0;
	transportMaxWeapons   = 0;
	transportMaxBackpacks = 0;
};

class TWC_AmmoBox_Other_Empty_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Empty Ammo Box (Portable)";
};