/* // Vehicles
"TWC_AmmoBox_Vehicle_Warrior",
"TWC_AmmoBox_Vehicle_Milan",
"TWC_AmmoBox_Vehicle_L134",          // GMG
"TWC_AmmoBox_Vehicle_L111",          // HMG
"TWC_AmmoBox_Vehicle_L7A2",          // GPMG */

class TWC_AmmoBox_Vehicle_Warrior: TWC_AmmoBox_Vehicle {
	scope = 2;
	scopeCurator = 2;
	displayName = "Warrior (Immobile)";
	
	class TransportItems {
		item_nc(TWC_30mm_HE_item, 250);
		item_nc(TWC_30mm_AP_item, 250);
	};
};
class TWC_AmmoBox_Vehicle_Milan: TWC_AmmoBox_Vehicle {
	scope = 2;
	scopeCurator = 2;
	displayName = "Milan - 3CB (Immobile)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_1Rnd_Milan, 20);
	};
};

class TWC_AmmoBox_Vehicle_L134: TWC_AmmoBox_Vehicle {
	scope = 2;
	scopeCurator = 2;
	displayName = "L134 - GMG 3CB (Immobile)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_32Rnd_40mm_G_Box, 30);
	};
};

class TWC_AmmoBox_Vehicle_L111: TWC_AmmoBox_Vehicle {
	scope = 2;
	scopeCurator = 2;
	displayName = "L111 - HMG 3CB (Immobile)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_127_100Rnd, 30);
	};
};

class TWC_AmmoBox_Vehicle_L7A2: TWC_AmmoBox_Vehicle {
	scope = 2;
	scopeCurator = 2;
	displayName = "L7A2 - GPMG 3CB (Immobile)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_762_200Rnd_T, 10);
		maga_nc(UK3CB_BAF_762_200Rnd, 60);
	};
};

// Implementation of TWC_Vehicle_Ammo_ColdWar, unsure as to the purpose of it
class TWC_AmmoBox_Vehicle_Generic: TWC_AmmoBox_Vehicle {
	scope = 2;
	scopeCurator = 2;
	displayName = "Generic Vehicle Resupply (Draggable)";

	transportAmmo        = 100000;
	supplyRadius         = 10;
	ace_dragging_canDrag = 1;
};

class TWC_AmmoBox_Vehicle_Generic_Loadable: TWC_AmmoBox_Vehicle {
	scope = 2;
	scopeCurator = 2;
	displayName = "Generic Vehicle Resupply (Loadable)";
	model = "\A3\Supplies_F_Exp\Ammoboxes\Equipment_Box_F.p3d";
	hiddenSelections[] = {"camo","camo_signs"};
	hiddenSelectionsTextures[] = {"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_co.paa","\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_ca.paa"};

	ace_rearm_defaultSupply = 600;
	ace_cargo_size = 2;
	ace_cargo_canLoad = 0;
	transportAmmo        = 0;
	supplyRadius         = 0;
	ace_dragging_canDrag = 1;
};
