class CfgPatches {
	class TWC_gearFixes {
		units[]={};
		weapons[]={};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"uk3cb_baf_weapons_smallarms",
			"UK3CB_BAF_Vehicles"
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

class CfgWeapons {
	class Rifle_Long_Base_F;
	class UK3CB_BAF_L7A2: Rifle_Long_Base_F {
		displayname = "L7A2 GPMG";

		class WeaponSlotsInfo {
			class asdg_OpticRail_UK3CB_BAF_L7A2 { };
		};
	};
	
	class twc_L7A2: UK3CB_BAF_L7A2 {};

	class missiles_titan;
	class UK3CB_BAF_Milan_Launcher: missiles_titan {
		ace_overpressure_angle = 90;
		ace_overpressure_range = 40;
		ace_overpressure_damage = 0.7;
	};
};

