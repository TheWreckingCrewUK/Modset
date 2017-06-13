// Base Classes, all others inherit from these!

class CUP_BAF_VehicleBox;
class Box_NATO_Ammo_F;
class Box_NATO_AmmoVeh_F;
class ACE_medicalSupplyCrate;
class Land_PaperBox_closed_F;

class TWC_AmmoBox_Base: CUP_BAF_VehicleBox {
	set_scope(1)
	// 1 - protected
	// 2 - public for ((Zeus)) and Editor
	displayName = "Ammo Box (Base)";
	author      = "Bosenator";

	class TransportMagazines { };
	class TransportItems { };
	class TransportWeapons { };
	class TransportBackpacks {};

	side = 4;
	editorCategory = "TWC_Crates";
	editorSubcategory = "TWC_Crates_Other"; // default here

	// ACE Defines
	ace_cargo_canLoad     = 0;
	ace_cargo_hasCargo    = 0;

	ace_dragging_canCarry = 0;
	ace_dragging_canDrag  = 0;
};

class TWC_AmmoBox_Portable: Box_NATO_Ammo_F {
	set_scope(1)
	displayName = "Ammo Box (Portable)";
	author      = "Bosenator";
	
	class TransportMagazines { };
	class TransportItems { };
	class TransportWeapons { };
	class TransportBackpacks {};
	
	side = 4;
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
	set_scope(1)
	displayName = "Vehicle Ammo Box (Immobile)";
	author      = "Bosenator";

	side = 4;
	editorCategory = "TWC_Crates";
	editorSubcategory = "TWC_Crates_Vehicles";

	class TransportMagazines { };
	class TransportItems { };
	class TransportWeapons { };
	class TransportBackpacks {};

	// ACE Defines
	ace_cargo_canLoad     = 0;
	ace_cargo_hasCargo    = 0;
	
	ace_dragging_canCarry = 0;
	ace_dragging_canDrag  = 0;
};

class TWC_AmmoBox_Medical: ACE_medicalSupplyCrate {
	set_scope(1)
	displayName = "Medical Box (Portable)";
	author      = "Bosenator";

	class TransportMagazines { };
	class TransportItems { };
	class TransportWeapons { };
	class TransportBackpacks {};

	side = 4;
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
class TWC_AmmoBox_Other_Pallet: Land_PaperBox_closed_F  {
	set_scope(2)
	displayName = "Cargo Pallet (Deployable/Immobile)";
	author      = "Bosenator";

	// Basically make this building a Supply Crate, so ACE Cargo can work
	model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
	memoryPointSupply = "doplnovani";
	slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
	
	icon = "iconCrate";
	picture = "pictureThing";
	vehicleClass = "Ammo";
	destrType = "DestructBuilding";
	explosionEffect = "BasicAmmoExplosion";

	side = 4;
	editorCategory = "TWC_Crates";
	editorSubcategory = "TWC_Crates_Other";

	class TransportMagazines { };
	class TransportItems { };
	class TransportWeapons { };
	class TransportBackpacks { };
	
	// ACE Defines
	ace_cargo_hasCargo    = 1;
	ace_cargo_space       = 3;
	ace_cargo_canLoad     = 1;
	ace_cargo_size        = 4;
	
	ace_dragging_canCarry = 0;
	ace_dragging_canDrag  = 0;
	
	// Disable inventory on it
	maximumLoad = 0;
	transportMaxMagazines = 0;
	transportMaxWeapons   = 0;
	transportMaxBackpacks = 0;
	
	class DestructionEffects {
		class Smoke2 {
			simulation = "particles";
			type = "AmmoSmokeParticles2";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 2;
		};
		
		class Bullets {
			simulation = "particles";
			type = "AmmoBulletCore";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1.2;
		};
		
		class HouseDestr {
			simulation = "destroy";
			type = "DelayedDestructionAmmoBox";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 10;
		};
	};
};

class TWC_AmmoBox_Other_Empty_Portable: TWC_AmmoBox_Portable {
	set_scope(2)
	displayName = "Empty Ammo Box (Portable)";
};