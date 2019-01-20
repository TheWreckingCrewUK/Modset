class CfgPatches {
	class twc_framework {
		units[] = {
			"twc_ModuleMission",
			"twc_moduelHC",
			"twc_moduelCache",
			"twc_modulegunwalkzeus",
			"twc_modulemortarwalkzeus",
			"TWC_Module_CommandMessage",
			"TWC_Module_StationaryUnits",
			"TWC_Module_MovableUnits",
			"TWC_Module_ArtillerySpotter",
			"TWC_Module_ArtilleryPieces",
			"TWC_Module_DisableCaching",
			"TWC_Module_VirtualArtillery",
			"TWC_Module_IntelHint",
			"TWC_Module_IntelHintWithVariable",
			"TWC_Module_TriggerUncache",
			"TWC_Module_SetUrbanUnitsCache",
			"TWC_Module_ACEInteract",
			"TWC_Module_AmbientSound"
		};
		
		weapons[] = {};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"cba_ai",
			"A3_Modules_F",
			"ace_magazinerepack",
			"TWC_Core"
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
	
	class twc_cache_modules: NO_CATEGORY {
		displayName = "TWC - Cache Modules";
	};
};

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class twc_moduleInitPos_eh {
			init = "[(_this select 0)] execVM 'twc_framework\init.sqf';";
		};
		
		class twc_functionInit {
			init = "_this call twc_fnc_init;";
		};
		
		class twc_AIItemCheckInit {
			init = "_this call twc_fnc_confiscateBadItems;";
		};
	};
};

#include "cfgAmmo.hpp"
#include "cfgFunctions.hpp"
#include "cfgMagazines.hpp"
#include "cfgVehicles.hpp"
#include "cfgWaypoints.hpp"
#include "cfgWeapons.hpp"