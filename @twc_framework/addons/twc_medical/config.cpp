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
			"TWC_Module_Medical"
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
			"TWC_Item_Medical_SutureKit_20"
		};
	};
};

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class twc_medicalInitPos_eh {
			clientInit = "[twc_medical_fnc_extendedVitalLoop, [(_this select 0)], 10] call CBA_fnc_waitAndExecute;";
		};
	};
};

#include "ui\menu.hpp"
#include "CfgFunctions.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "ACE_Medical_Actions.hpp"
#include "ACE_Medical_Advanced.hpp"