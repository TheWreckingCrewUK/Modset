class CfgPatches {
	class twc_ai {
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
		camouflage = 7;
		accuracy = 0.2;
		cost = 10;
	};
};

class CfgAISkill {
	aimingAccuracy[] = {0,   0, 1, 0.6};
	aimingShake[]    = {0,   0, 1, 0.6};
	aimingSpeed[]    = {0, 0.3, 1, 0.7};
	commanding[]     = {0,   0, 1, 0.8};
	courage[]        = {0, 0.3, 1,   1};
	general[]        = {0,   0, 1,   1};
	reloadSpeed[]    = {0,   1, 1,   1};
	spotDistance[]   = {0,   1, 1,   1};
	spotTime[]       = {0, 0.3, 1, 0.8};
};

#include "CfgBrains.hpp"
#include "CfgWeapons.hpp"