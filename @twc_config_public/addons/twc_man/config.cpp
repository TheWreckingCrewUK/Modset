class CfgPatches {
	class twc_man {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F",
			"ace_common",
			"ace_ai"
		};
	};
};

class CfgVehicles {
	class Land;
	class Man: Land { };
	class CAManBase: Man { };
	class SoldierWB: CAManBase { };
	
	class B_Soldier_base_F: SoldierWB {
		threat[] = { 1, 1, 1};
		camouflage = 4;
		accuracy = 0.2;
		cost = 10;
	};
};

/*
 * Overwrites ACE AI in order to make the AI more skilled
 */
class CfgAISkill {
	aimingAccuracy[] = {0,0, 1, 0.6};
	aimingShake[]    = {0,0, 1, 0.6};
	aimingSpeed[]    = {0,0, 1, 0.7};
	commanding[]     = {0,0, 1, 0.8};
	courage[]        = {0,0, 1, 1};
	//endurance[]      = {0,0, 1, 0.7};
	general[]        = {0,0, 1, 0.9};
	// apparently breaks rapid firing in single fire mode for players
	//reloadSpeed[]    = {0,0, 1,0.8};
	spotDistance[]   = {0,0, 1, 1};
	spotTime[]       = {0,0, 1, 0.7};
};