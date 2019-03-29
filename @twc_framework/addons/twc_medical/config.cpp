class CfgPatches {
	class twc_medical {
		requiredAddons[] = {
			"ace_medical",
			"ace_medical_menu",
			"twc_framework"
		};

		requiredVersion = 1.7;
		version = "1";
		versionStr = "1";
		author = "Bosenator";
		authorUrl = "http://thewreckingcrew.eu";

		units[] = {
			"TWC_Module_Medical",
			"TWC_Module_AssignFieldTent",
			"TWC_Curator_fullHealUnit",
			"TWC_Curator_killUnit",
			"TWC_Curator_resuscitateUnit",
			"TWC_Curator_inspectUnit",
			"TWC_Curator_logUnit",
			"TWC_Curator_setFieldTent"
		};

		weapons[] = {
			"TWC_Item_Medical_SutureKit_1",
			"TWC_Item_Medical_SutureKit_2",
			"TWC_Item_Medical_SutureKit_3",
			"TWC_Item_Medical_SutureKit_4",
			"TWC_Item_Medical_SutureKit_5",
			"TWC_Item_Medical_SutureKit_6",
			"TWC_Item_Medical_SutureKit_7",
			"TWC_Item_Medical_SutureKit_8",
			"TWC_Item_Medical_SutureKit_9",
			"TWC_Item_Medical_SutureKit_10",
			"TWC_Item_Medical_SutureKit_11",
			"TWC_Item_Medical_SutureKit_12",
			"TWC_Item_Medical_SutureKit_13",
			"TWC_Item_Medical_SutureKit_14",
			"TWC_Item_Medical_SutureKit_15",
			"TWC_Item_Medical_SutureKit_16",
			"TWC_Item_Medical_SutureKit_17",
			"TWC_Item_Medical_SutureKit_18",
			"TWC_Item_Medical_SutureKit_19",
			"TWC_Item_Medical_SutureKit_20",
			"TWC_Item_Medical_SutureKit_21",
			"TWC_Item_Medical_SutureKit_22",
			"TWC_Item_Medical_SutureKit_23",
			"TWC_Item_Medical_SutureKit_24",
			"TWC_Item_Medical_SutureKit_25",
			"TWC_Item_Medical_SurgicalMasks_1",
			"TWC_Item_Medical_SurgicalMasks_2",
			"TWC_Item_Medical_SurgicalMasks_3",
			"TWC_Item_Medical_SurgicalMasks_4",
			"TWC_Item_Medical_SurgicalMasks_5",
			"TWC_Item_Medical_SurgicalMasks_6",
			"TWC_Item_Medical_SurgicalMasks_7",
			"TWC_Item_Medical_SurgicalMasks_8",
			"TWC_Item_Medical_SurgicalMasks_9",
			"TWC_Item_Medical_SurgicalMasks_10",
			"TWC_Item_Medical_SurgicalMasks_11",
			"TWC_Item_Medical_SurgicalMasks_12",
			"TWC_Item_Medical_SurgicalMasks_13",
			"TWC_Item_Medical_SurgicalMasks_14",
			"TWC_Item_Medical_SurgicalMasks_15",
			"TWC_Item_Medical_SurgicalMasks_16",
			"TWC_Item_Medical_SurgicalMasks_17",
			"TWC_Item_Medical_SurgicalMasks_18",
			"TWC_Item_Medical_SurgicalMasks_19",
			"TWC_Item_Medical_SurgicalMasks_20"
		};
	};
};

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class twc_medicalInitPos_eh {
			clientInit = "if (local (_this select 0)) then { [twc_medical_fnc_extendedVitalLoop, [(_this select 0)], 10] call CBA_fnc_waitAndExecute; };";
		};
	};
};

class Extended_PostInit_EventHandlers {
	class TWC_Medical {
		clientInit = "[] call twc_medical_fnc_init;";
		serverInit = "[] call twc_medical_fnc_serverInit;";
	};
};

#include "ui\menu.hpp"
#include "CfgEden.hpp"
#include "CfgFunctions.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "ACE_Medical_Actions.hpp"
#include "ACE_Medical_Advanced.hpp"