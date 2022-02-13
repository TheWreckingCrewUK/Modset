class CfgPatches {
	class twc_medical_suture {
		requiredAddons[] = {
			"ace_medical",
			"ace_medical_gui",
			"ace_medical_engine",
			"twc_medical_core"
		};

		requiredVersion = 1.7;
		version = "1";
		versionStr = "1";
		author = "Bosenator";
		authorUrl = "http://thewreckingcrew.eu";

		units[] = { };

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
			"TWC_Item_Medical_SutureKit_25"
		};
	};
};

#include "ACE_Medical_Treatment_Actions.hpp"
#include "CfgFunctions.hpp"
#include "CfgSounds.hpp"
#include "CfgWeapons.hpp"