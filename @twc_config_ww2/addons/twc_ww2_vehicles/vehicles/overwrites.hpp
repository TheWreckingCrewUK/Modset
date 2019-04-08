/** This file includes all the edits we do to the default/modded vehicles, for our reasons **/

class LIB_MKI_HADRIAN;
class LIB_HORSA_RAF;
class LIB_US_Willys_MB;

class Tank;
class Tank_F: Tank {
	class Turrets {};
};

class fow_v_universalCarrier: Tank_F {
	class Turrets: Turrets {
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class Turret_1;
		class Turret_2;
	};
};

// ACRE & ACE fixes
class TWC_Vehicle_WW2_UniversalCarrier_F: fow_v_universalCarrier {
	scope = 1;
	ADD_FACTION;
	ace_cargo_size = 14;
	ace_cargo_canLoad = 1;
	class Turrets: Turrets {
		class CargoTurret_01: CargoTurret_01 {
			gunnerCompartments = "Compartment1";
		};
		
		class CargoTurret_02: CargoTurret_02 {
			gunnerCompartments = "Compartment1";
		};
		
		class CargoTurret_03: CargoTurret_03 {
			gunnerCompartments = "Compartment1";
		};
		
		class Turret_1: Turret_1 {};
		class Turret_2: Turret_2 {};
	};
};

class TWC_Vehicle_WW2_Willys_F: LIB_US_Willys_MB {
	scope = 1;
	ADD_FACTION;
	ace_cargo_size = 10;
	ace_cargo_canLoad = 1;
};

class TWC_Vehicle_WW2_Hadrian_F: LIB_MKI_HADRIAN { scope = 1; ADD_FACTION; };

class TWC_Vehicle_WW2_Hadrian_VIV_F: LIB_MKI_HADRIAN {
	scope = 1;
	displayname = "Mk I. Hadrian (Vehicle Transport)";
	ADD_FACTION;
	transportSoldier = 5;
	cargoIsCoDriver[] = {true, false, false, false, false};
	cargoAction[] = {
		"passenger_generic01_leanright",
		"passenger_generic01_leanleft",
		"passenger_mantisrear",
		"passenger_generic01_leanright",
		"passenger_generic01_foldhands"
	};
	
	ace_cargo_hasCargo = 1;
	ace_cargo_space = 16;
};

class TWC_Vehicle_WW2_Horsa_F: LIB_HORSA_RAF { scope = 1; ADD_FACTION; };