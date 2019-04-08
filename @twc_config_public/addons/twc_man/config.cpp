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
		camouflage = 6;
		accuracy = 0.2;
		cost = 10;
	};
};

/*
 * Overwrites ACE AI in order to make the AI more skilled
 */
class CfgAISkill {
	aimingAccuracy[] = {0,   0.1,   1, 0.45};
	aimingShake[]    = {0,   0.3, 1, 0.6};
	aimingSpeed[]    = {0,   0,   1, 0.3};
	commanding[]     = {0, 0.3,   1, 0.7};
	courage[]        = {0, 0.5,   1,   1};
	general[]        = {0,   0,   1, 0.9};
	spotDistance[]   = {0,   1,   1,   1};
	reloadSpeed[]   = {0,   1,   1,   1};
	spotTime[]       = {0, 0.5,   1,   1};
};