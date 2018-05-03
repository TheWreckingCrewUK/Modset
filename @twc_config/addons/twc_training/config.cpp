class CfgPatches {
	class twc_training_units {
		weapons[] = { };
		requiredVersion = 0.1;

		units[] = {
			"TWC_Units_Training_Trainer",
			"TWC_Units_Training_Medical_Trainer"
			"TWC_Units_Training_Medical_Trainee"
		};

		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma",
			"TWC_Faction",
			"twc_weapons"
		};
	};
};

class EventHandlers;
#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"