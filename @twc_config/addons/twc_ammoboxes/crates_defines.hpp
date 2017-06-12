// Base Classes, all others inherit from these!

class CUP_BAF_VehicleBox;
class Box_NATO_Ammo_F;
class Box_NATO_AmmoVeh_F;
class ACE_medicalSupplyCrate;
class B_supplyCrate_F;

class TWC_AmmoBox_Base: CUP_BAF_VehicleBox {
	scope       = 1;
	// 1 is invisible, but usable
	// 2 is spawn-able via editor/zeus
	displayName = "Ammo Box (Base)";
	author      = "Bosenator";
	
	TransportMagazines = { };
	TransportItems     = { };
	TransportWeapons   = { };
	
	side = 1;
	editorCategory = "TWC_Crates";
	editorSubcategory = "TWC_Crates_Other"; // default here
	
	// ACE Defines
	ace_cargo_canLoad     = 0;
	ace_cargo_hasCargo    = 0;
	ace_dragging_canCarry = 0;
	ace_dragging_canDrag  = 0;
};

class TWC_AmmoBox_Portable: Box_NATO_Ammo_F {
	scope       = 1;
	displayName = "Ammo Box (Portable)";
	author      = "Bosenator";
	
	TransportMagazines = { };
	TransportItems     = { };
	TransportWeapons   = { };
	
	side = 1;
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
	scope       = 1;
	displayName = "Vehicle Ammo Box (Immobile)";
	author      = "Bosenator";
	
	side = 1;
	editorCategory = "TWC_Crates";
	editorSubcategory = "TWC_Crates_Vehicles";
	
	TransportMagazines = { };
	TransportItems     = { };
	TransportWeapons   = { };
	
	// ACE Defines
	ace_cargo_canLoad     = 0;
	ace_cargo_hasCargo    = 0;
	ace_dragging_canCarry = 0;
	ace_dragging_canDrag  = 0;
};

class TWC_AmmoBox_Medical: ACE_medicalSupplyCrate {
	scope       = 1;
	displayName = "Medical Box (Portable)";
	author      = "Bosenator";
	
	TransportMagazines = { };
	TransportItems     = { };
	TransportWeapons   = { };
	
	side = 1;
	editorCategory = "TWC_Crates";
	editorSubcategory = "TWC_Crates_Other";
	
	// ACE Defines
	ace_cargo_canLoad     = 1;
	ace_cargo_size        = 1;
	ace_cargo_hasCargo    = 0;
	ace_dragging_canCarry = 1;
	ace_dragging_canDrag  = 1;
};

// Actual finished ones, because this is all they needed
class TWC_AmmoBox_Other_Pallet: B_supplyCrate_F {
	scope       = 2;
	displayName = "Air Pallet (Cargo/Immobile)";
	author      = "Bosenator";
	
	side = 1;
	editorCategory = "TWC_Crates";
	editorSubcategory = "TWC_Crates_Other";
	
	TransportMagazines = { };
	TransportItems     = { };
	TransportWeapons   = { };
	
	// ACE Defines
	ace_cargo_canLoad     = 1;
	ace_cargo_hasCargo    = 1;
	ace_cargo_space       = 3;
	ace_cargo_size        = 3; 
	ace_dragging_canCarry = 0;
	ace_dragging_canDrag  = 0;
};

class TWC_AmmoBox_Other_Empty_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	displayName = "Empty Ammo Box (Portable)";
};