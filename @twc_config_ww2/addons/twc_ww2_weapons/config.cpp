class CfgPatches {
	class twc_weapons_ww2 {
		units[] = {
			"TWC_Operation_WW2_Ammobox"
		};

		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"cup_weapons_ammoboxes",
			"ww2_assets_c_vehicles_ammoparameters_c",
			"fow_weapons",
			"fow_weapons_c",
			"BBB_BoysATR"
		};

		version="1";
		projectName="TWC";
		author="jayman";
	};
};
	//6 Pounder 
	class fow_w_6Pounder {
		class Turrets {
			class MainTurret;
		};
	};
	class TWC_Vehicle_WW2_6pounder: fow_w_6Pounder {
		author = "[TWC] Ross";
		scope = 2;
		scopeCurator = 2;
		typicalCargo[] = {"TWC_Infantry_WW2_UK_Early_Woodland_Rifleman"};
		side = 3;
		displayName = "6 Pounder";
		faction = "TWC_WW2";
		crew = "TWC_Infantry_WW2_UK_Early_Woodland_Rifleman";

		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"TWC_Weapon_57mm_6pounder_Vehicle"};
				magazines[] = {};
				gunnerForceOptics = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best", db-40, 1.0, 50};
				maxHorizontalRotSpeed = 0.5;
			};
		};

		class ace_csw {
			enabled = 1;
			proxyWeapon = "TWC_Weapon_57mm_6pounder_Vehicle";
			magazineLocation = "_target selectionPosition 'NabojniceStart'";
			disassembleWeapon = ""; // What the weapon will disassemble to
			disassembleTurret = ""; // Which tripod will appear when weapon has been disassembled
			ammoLoadTime = 5;
			ammoUnloadTime = 4;
			desiredAmmo = 1; // When the weapon is reloaded it will try and reload to this ammo capacity
			disassembleFunc = ""; // A callback function for when the CSW gets disassembled. Arguments: [tripod, staticWeapon]
		};
	};
	class TWC_Weapon_57mm_6pounder_Vehicle: fow_w_6Pounder {
		displayname = "6 Pounder";
		reloadTime = 0.5;
		magazineReloadTime = 0.5;
		magazines[] = {
			"TWC_Magazine_57mm_1rnd_HE",
			"TWC_Magazine_57mm_1rnd_APCBC",
			"TWC_Magazine_57mm_1rnd_APCR",
			"TWC_Magazine_57mm_1rnd_APDS",
			"TWC_Magazine_57mm_1rnd_AP"
		};
		ace_overpressure_damage = 1;
	};

#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgFunctions.hpp"