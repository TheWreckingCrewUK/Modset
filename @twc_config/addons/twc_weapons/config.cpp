class CfgPatches {
	class twc_weapons {
		units[]= { };
		weapons[]= { };
		requiredVersion=0.1;
		
		requiredAddons[]= {
			"A3_Weapons_F",
			"uk3cb_baf_weapons",
			"uk3cb_baf_equipment",
			"cba_xeh",
			"ace_medical",
			"twc_disposable",
			"twc_faction"
		};

		version="1";
		projectName="TWC";
		author="jayman";
	};
};

class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class TWC_AssembleTent {
					displayname = "Assemble Field Tent";
					condition = "(secondaryWeapon player) == 'twc_fieldTent'";
					statement = "[player,'AinvPknlMstpSnonWnonDr_medicUp0S',0,false] call ace_common_fnc_doAnimation;[120, [], {[player] spawn twc_weapons_fnc_assembleFieldTent;}, {}, 'Creating Forward Base...'] call ace_common_fnc_progressBar;";
					showDisabled = 0;
					priority = 1;
					icon="";
				};
				class TWC_Convert_50_To_100 {
					displayname = "Link 50 Rnd Belts Together";
					condition = "'TWC_UK3CB_BAF_762_50Rnd' in (magazines player) || 'TWC_UK3CB_BAF_762_50Rnd_T' in (magazines player)";
					statement = "[player,'AinvPknlMstpSnonWnonDr_medicUp0S',0,false] call ace_common_fnc_doAnimation;[5, [], {[player] spawn twc_weapons_fnc_convert50To100;}, {}, 'Converting Belts... Check Floor When done'] call ace_common_fnc_progressBar;";
					showDisabled = 0;
					priority = 1;
					icon="";
				};
				class TWC_Convert_100_To_50{
					displayname = "Convert 100Rnd Belts to 50s";
					condition = "'UK3CB_BAF_762_100Rnd' in (magazines player) || 'UK3CB_BAF_762_100Rnd_T' in (magazines player)";
					statement = "[player,'AinvPknlMstpSnonWnonDr_medicUp0S',0,false] call ace_common_fnc_doAnimation;[5, [], {[player] spawn twc_weapons_fnc_convert100To50;}, {}, 'Converting Belts... Check Floor When done'] call ace_common_fnc_progressBar;";
					showDisabled = 0;
					priority = 1;
					icon="";
				};
			};
		};
	};

	//L118 Light Gun
	class CUP_M119_base {
		class Turrets {
			class MainTurret;
		};
	};
	class TWC_Vehicle_Generic_L118: CUP_M119_base {
		author = "[TWC] Rik";
		scope = 2;
		scopeCurator = 2;
		typicalCargo[] = {"TWC_Infantry_Modern_Regular_Woodland_Artillery_Crew"};
		side = 1;
		displayName = "L118";
		faction = "TWC_General";
		artilleryScanner = 1;
		crew = "TWC_Infantry_Modern_Regular_Woodland_Artillery_Crew";
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_M119_US.jpg";

		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"TWC_Weapon_105mm_L118_Vehicle"};
				magazines[] = {};
				gunnerForceOptics = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best", db-40, 1.0, 50};
				maxHorizontalRotSpeed = 0.5;
			};
		};

		class ace_csw {
			enabled = 1;
			proxyWeapon = "TWC_Weapon_105mm_L118_Vehicle";
			magazineLocation = "_target selectionPosition 'NabojniceStart'";
			disassembleWeapon = ""; // What the weapon will disassemble to
			disassembleTurret = ""; // Which tripod will appear when weapon has been disassembled
			ammoLoadTime = 8;
			ammoUnloadTime = 6;
			desiredAmmo = 1; // When the weapon is reloaded it will try and reload to this ammo capacity
			disassembleFunc = ""; // A callback function for when the CSW gets disassembled. Arguments: [tripod, staticWeapon]
		};
	};
};

class CfgFunctions {
	class TWC_Weapons {
		class Functions {
			file="twc_weapons\functions";
			class assembleFieldTent {};
			class disassembleFieldTent {};
			class convert50To100 {};
			class convert100To50 {};
		};
	};
};

class Mode_SemiAuto;

class CfgWeapons {
	class Launcher;
	class Launcher_Base_F: Launcher {
		class WeaponsSlotsInfo;
	};

	class twc_fieldTent: Launcher_Base_F {
		author="jayman";
		_generalMacro="Launch_NLAW_F";
		scope=2;
		displayname="Field Tent";
		model = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Static\uk3cb_static_tripod_bag_equipped.p3d";
		picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Static\data\gear_L16_tripod_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[]={};

		class weaponSlotsInfo: WeaponsSlotsInfo {
			mass=220;
		};
	};
	
	
	
	class Rifle_Base_F;
	class CUP_glaunch_Base: Rifle_Base_F {
		aiDispersionCoefX = 30;
		aiDispersionCoefY = 31;
		
		class Single: Mode_SemiAuto {
			aiRateOfFire = 2.5;
			aiDispersionCoefX = 30;
			aiDispersionCoefY = 31;
		};
	};
	
	//L118 Light Gun
	class CUP_Vcannon_M119_veh;
	class TWC_Weapon_105mm_L118_Vehicle: CUP_Vcannon_M119_veh {
		displayname = "L118";
		reloadTime = 0.5;
		magazineReloadTime = 0.5;
		magazines[] = {
			"TWC_Magazine_105mm_1rnd_HE",
			"TWC_Magazine_105mm_1rnd_HESH",
			"TWC_Magazine_105mm_1rnd_Smoke_White",
			"TWC_Magazine_105mm_1rnd_Smoke_Red",
			"TWC_Magazine_105mm_1rnd_Smoke_Orange",
			"TWC_Magazine_105mm_1rnd_Illum",
			"TWC_Magazine_105mm_1rnd_Illum_IR"
		};
		ace_overpressure_damage = 0;
	};
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineGroups.hpp"