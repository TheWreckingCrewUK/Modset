class CfgPatches {
	class twc_map {
		units[] = {};
		weapons[] = {};
		author = "Bosenator";
		authorUrl = "www.thewreckingcrew.eu";

		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Data_F_Loadorder",
			"A3_Data_F_Curator_Loadorder",
			"A3_Data_F_Kart_Loadorder",
			"A3_Data_F_Bootcamp_Loadorder",
			"A3_Data_F_Heli_Loadorder",
			"A3_Data_F_Mark_Loadorder",
			"A3_Data_F_Exp_A_Loadorder",
			"A3_Data_F_Exp_B_Loadorder",
			"A3_Data_F_Exp_Loadorder",
			"A3_Data_F_Jets_Loadorder",
			"A3_Data_F_Argo_Loadorder",
			"A3_Data_F_Patrol_Loadorder",
			"A3_Data_F_Orange_Loadorder",
			"A3_Data_F_Tacops_Loadorder",
			"ace_common",
			"ace_map_gestures",
			"ace_markers"
		};
	};
};

#include "CfgFunctions.hpp"
#include "CfgMarkerClasses.hpp"
#include "CfgMarkers.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"

class Extended_PreInit_EventHandlers {
	class twc_map {
		clientInit = "call twc_map_fnc_preInit;";
	};
};

class Extended_PostInit_EventHandlers {
	class twc_map {
		clientInit = "call twc_map_fnc_initPost;";
	};
};

#include "HidePlayer.hpp"