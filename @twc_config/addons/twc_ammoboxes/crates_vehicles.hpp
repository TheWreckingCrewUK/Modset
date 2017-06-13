/* // Vehicles
"TWC_AmmoBox_Vehicle_Warrior",
"TWC_AmmoBox_Vehicle_Milan",
"TWC_AmmoBox_Vehicle_L134",          // GMG
"TWC_AmmoBox_Vehicle_L111",          // HMG
"TWC_AmmoBox_Vehicle_L7A2",          // GPMG */

class TWC_AmmoBox_Vehicle_Warrior: TWC_AmmoBox_Vehicle {
	set_scope(2);
	displayName = "Warrior (Immobile)";
	
	class TransportItems {
		item_nc(TWC_30mm_HE_item, 250);
		item_nc(TWC_30mm_AP_item, 250);
	};
};

class TWC_AmmoBox_Vehicle_Milan: TWC_AmmoBox_Vehicle {
	set_scope(2);
	displayName = "Milan - 3CB (Immobile)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_1Rnd_Milan, 20);
	};
};

class TWC_AmmoBox_Vehicle_L134: TWC_AmmoBox_Vehicle {
	set_scope(2);
	displayName = "L134 - GMG 3CB (Immobile)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_32Rnd_40mm_G_Box, 30);
	};
};

class TWC_AmmoBox_Vehicle_L111: TWC_AmmoBox_Vehicle {
	set_scope(2);
	displayName = "L111 - HMG 3CB (Immobile)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_127_100Rnd, 30);
	};
};

class TWC_AmmoBox_Vehicle_L7A2: TWC_AmmoBox_Vehicle {
	set_scope(2);
	displayName = "L7A2 - GPMG 3CB (Immobile)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_762_200Rnd_T, 10);
		maga_nc(UK3CB_BAF_762_200Rnd, 60);
	};
};

// Implementation of TWC_Vehicle_Ammo_ColdWar, unsure as to the purpose of it
class TWC_AmmoBox_Vehicle_Generic: TWC_AmmoBox_Vehicle {
	set_scope(2);
	displayName = "Generic Vehicle Resupply (Draggable)";

	transportAmmo        = 100000;
	supplyRadius         = 10;
	ace_dragging_canDrag = 1;
};
