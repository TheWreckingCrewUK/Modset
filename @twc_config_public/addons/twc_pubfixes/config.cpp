class CfgPatches {
	class twc_objects {
		units[]= {
		};
		
		weapons[]={"CUP_launch_RPG7V"};
		requiredVersion = 0.1;
		
		requiredAddons[] = {
			"ace_medical",
			"ace_medical_menu",
			"TWC_Core",
			"twc_framework",
			"twc_medical",
			"a3_weapons_f",
			"cup_airvehicles_av8b",
			"uk3cb_baf_weapons_smallarms",
			"UK3CB_BAF_Vehicles",
			"uk3cb_baf_vehicles_landrover",
			"uk3cb_baf_vehicles_coyote_jackal",
			"cup_wheeledvehicles_mastiff",
			"cup_trackedvehicles_mcv80",
			"UK3CB_BAF_Equipment_Backpacks",
			"CUP_Creatures_Military_USArmy",
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds",
			"cup_weapons_ak",
			"CUP_Weapons_M1014",
			"CUP_Weapons_VehicleWeapons"
		};
	};
};

//#include "CfgAmmo.hpp"
//#include "CfgWeapons.hpp"
#include "qol.hpp"
//#include "CfgVehicles.hpp"
//#include "CfgMagazines.hpp"
//#include "ACE_Medical_Actions.hpp"
//#include "ACE_Medical_Advanced.hpp"





class Extended_InitPost_EventHandlers {
	class CAManBase {
		class twc_pubmoduleInitPos_eh {
			init = "[(_this select 0)] execVM 'twc_pubfixes\init.sqf';";
		};
	};
};


