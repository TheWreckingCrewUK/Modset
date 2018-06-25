class CfgPatches {
	class twc_ww2_enemy {
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.1;
		requiredAddons[] = {
			"CSA38II_characters"
		};
	};
};

class CfgVehicles {
	class B_Soldier_base_F;

	class csa38_CZmanE;
	class CSA38_WH1: csa38_CZmanE {
		magazines[] = {
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_bodaksg84"
		};
		
		respawnMagazines[] = {
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_bodaksg84"
		};
	};
	
	class CSA38_WH22: CSA38_WH1 {
		linkedItems[] = {"Headgear_csa38_M18WH", "V_csa38_equip_GE01"};
		respawnLinkedItems[] = {"Headgear_csa38_M18WH", "V_csa38_equip_GE01"};
	};
};