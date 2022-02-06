class CfgPatches {
	class twc_medical_core {
		requiredAddons[] = {
			"ace_medical",
			"ace_medical_gui",
			"TWC_Core",
			"twc_framework"
		};

		requiredVersion = 1.7;
		version = "1";
		versionStr = "1";
		author = "Bosenator";
		authorUrl = "http://thewreckingcrew.eu";

		units[] = {
			"TWC_Module_Medical",
			"TWC_Curator_fullHealUnit",
			"TWC_Curator_killUnit",
			"TWC_Curator_resuscitateUnit",
			"TWC_Curator_inspectUnit"
		};

		weapons[] = { };
	};
};

/* class Extended_PreInit_EventHandlers {
	class TWC_Medical_PreInitEH {
		init = "_this call twc_medical_fnc_settings;";
	};
}; */

class Extended_PostInit_EventHandlers {
	class TWC_Medical_PostInitEH {
		clientInit = "_this call twc_medical_fnc_init;";
		serverInit = "_this call twc_medical_fnc_serverInit;";
	};
};

#include "ACE_Medical_Injuries.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
#include "CfgFunctions.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"