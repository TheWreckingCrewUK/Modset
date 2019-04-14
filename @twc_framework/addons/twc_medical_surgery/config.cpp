class CfgPatches {
	class TWC_Medical_Surgery {
		projectName = "TWC Framework";
		
		requiredAddons[] = {
			"ace_zeus",
			"twc_medical"
		};
		
		requiredVersion = 1.7;
		author = "TheWreckingCrew";
		authors[] = {"Bosenator"};
		url = "http://thewreckingcrew.eu";
		authorUrl = "http://thewreckingcrew.eu";
		
		units[] = {
			"TWC_Module_AssignFieldTent",
			"TWC_Curator_setFieldTent"
		};
		
		weapons[] = {
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
		
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {1,0,0};
	};
};

#include "ACE_Medical_Actions.hpp"
#include "CfgFunctions.hpp"
#include "CfgSounds.hpp"

class Extended_PostInit_EventHandlers {
	class TWC_Medical_Surgery {
		clientInit = "[] call TWC_Medical_Surgery_fnc_clientInit;";
		serverInit = "[] call TWC_Medical_Surgery_fnc_serverInit;";
	};
};