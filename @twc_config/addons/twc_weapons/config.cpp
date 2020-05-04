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
			"twc_disposable"
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
			};
		};
	};
};

class CfgFunctions {
	class TWC_Weapons {
		class Functions {
			file="twc_weapons\functions";
			class assembleFieldTent {};
			class disassembleFieldTent {};
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

	class UK3CB_BAF_L115A3;
	class UK3CB_BAF_L115A3_DE;
	class twc_l96_w: UK3CB_BAF_L115A3 {
		scope = 1;
		displayname = "L96A1";
		magazines[] = {"UK3CB_BAF_762_L42A1_10Rnd"};

		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="CUP_optic_Leupold_VX3";
			};
		};
	};

	class twc_l96_d: UK3CB_BAF_L115A3_DE {
		scope = 1;
		displayname = "L96A1";
		magazines[] = {"UK3CB_BAF_762_L42A1_10Rnd"};
		
		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="CUP_optic_Leupold_VX3";
			};
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
};

#include "CfgAmmo.hpp"