class CfgPatches {
	class twc_framework {
		units[] = {
			"twc_ModuleMission",
			"twc_moduelCache",
			"TWC_Module_Ambient_AttackPlane_Gun",
			"TWC_Module_Ambient_AttackPlane_Missile",
			"TWC_Module_Ambient_AttackPlane_GunMissile",
			"TWC_Module_Ambient_AttackPlane_Bomb",
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
			"TWC_Module_AmbientSound",
			"TWC_Module_Speak",
			"twc_moduleSetSpectator",
			"twc_forceUncache",
			"twc_fixNaked",
			"TWC_Module_doStop"
		};
		
		weapons[] = {};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"cba_ai",
			"A3_Modules_F",
			"ace_magazinerepack",
			"TWC_Core",
			"TWC_Faction",
			"TWC_Sounds"
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

#include "Cfg3DEN.hpp"
#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWaypoints.hpp"
#include "CfgWeapons.hpp"