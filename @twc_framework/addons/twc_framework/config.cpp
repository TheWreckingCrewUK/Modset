class CfgPatches {
	class twc_framework {
		units[] = {
			"twc_ModuleMission",
			"twc_moduelHC",
			"twc_moduelCache",
			"twc_moduleHealPlayer",
			"twc_moduleKillPlayer",
			"twc_moduleSetSpectator",
			"twc_moduleMedicalInfo",
			"TWC_Module_CommandMessage",
			"TWC_Module_StationaryUnits",
			"TWC_Module_MovableUnits",
			"TWC_Module_ArtillerySpotter",
			"TWC_Module_ArtilleryPieces",
			"TWC_Module_DisableCaching",
			"TWC_Module_VirtualArtillery",
			"TWC_Module_IntelHint",
			"TWC_Module_IntelHintWithVariable"
		};
		
		weapons[] = {};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"cba_ai",
			"A3_Modules_F",
			"ace_magazinerepack"
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

class cfgFactionClasses {
	class NO_CATEGORY;

	class twc_missionSetup: NO_CATEGORY {
		displayName = "TWC - Mission Prep (Mgmt Use Mainly)";
	};

	class twc_zeus: NO_CATEGORY {
		displayName = "TWC - Zeus";
	};
	
	class twc_mission_framework: NO_CATEGORY {
		displayName = "TWC - Mission Framework";
	};
};

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class twc_moduleInitPos_eh {
			init = "[(_this select 0)] execVM 'twc_framework\init.sqf';";
		};
		
		class twc_functionInit {
			init = "[(_this select 0)] call twc_fnc_init;";
		};
		
		class twc_AIItemCheckInit {
			init = "[(_this select 0)] call twc_fnc_confiscateBadItems;";
		};
	};
};

#include "cfgAmmo.hpp"
#include "cfgMagazines.hpp"
#include "cfgWeapons.hpp"
#include "cfgVehicles.hpp"
#include "cfgFunctions.hpp"
#include "cfgWaypoints.hpp"