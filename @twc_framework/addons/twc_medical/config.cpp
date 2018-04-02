class CfgPatches {
	class twc_medical {
		requiredAddons[] = {
			"ace_medical",
			"twc_framework"
		};

		requiredVersion = 1.7;
		version = "1";
		versionStr = "1";
		author = "Bosenator";
		authorUrl = "http://thewreckingcrew.eu";
		
		units[] = {
			"TWC_Module_Medical"
		};
		
		weapons[] = {};
	};
};

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class twc_medicalInitPos_eh {
			clientInit = "[twc_medical_fnc_extendedVitalLoop, [(_this select 0)], 10] call CBA_fnc_waitAndExecute;";
		};
	};
};

#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "ACE_Medical_Actions.hpp"
#include "ACE_Medical_Advanced.hpp"