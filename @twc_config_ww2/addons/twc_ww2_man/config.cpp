class CfgPatches {
	class twc_ww2_man {
		units[] = {};
		weapons[] = {};
		requiredVersion= 0.1;
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
	class SoldierGB: CAManBase { };

	class I_Soldier_base_F: SoldierGB {
		threat[] = { 1, 1, 1};
		camouflage = 6;
		accuracy = 0.2;
		cost = 10;
	};
};

class CfgAISkill {
	aimingAccuracy[] = {0,   0, 1, 0.6};  // {0,0,1,1};   v1.26 defaults
	aimingShake[]    = {0, 0.3, 1, 0.6};  // {0,0,1,1};
	aimingSpeed[]    = {0, 0.5, 1, 0.9};  // {0,0.5,1,1};
	commanding[]     = {0,   0, 1, 0.8};  // {0,0,1,1};
	courage[]        = {0, 0.3, 1,   1};  // {0,0,1,1};
	general[]        = {0,   0, 1,   1};  // {0,0,1,1};
	spotDistance[]   = {0,   1, 1,   1};  // {0,0.2,1,0.4};
	reloadSpeed[]    = {0,   1, 1,   1};
	spotTime[]       = {0, 0.3, 1, 0.8};  // {0,0,1,0.7};
};