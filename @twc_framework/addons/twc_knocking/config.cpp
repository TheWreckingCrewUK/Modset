class CfgPatches {
	class TWC_Knocking {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_interaction"};
		author[] = {""};
		authorUrl = "";
	};
};

class CfgFunctions {
	class TWC {
		class Knock_Functions {
			file = "\twc_knocking\functions";
			class init{postInit = 1;};
		};
	};
};


class CfgVehicles {
	class LandVehicle;
	class Tank: LandVehicle {
	class ACE_Actions {
			class ACE_MainActions {
				class TWC_knock {
					displayName = "Knock";
					condition = "vehicle player == player";
					statement = "_this call TWC_fnc_knockOnTank;";
					showDisabled = 0;
					priority = 1;
					distance = 4.5;
					icon = "\twc_knocking\ui\knock.paa";
				};
			};
		};
	};
};

class CfgSounds {
	sounds[] = {TWC_sound_knockMetal};

	class TWC_sound_knockMetal {
		name = "TWC_sound_knockMetal";
		sound[] = {"\twc_knocking\sounds\knockMetal.ogg", 2, 1};
		titles[] = {};
	};

	class TWC_sound_knockMetalInside {
		name = "TWC_sound_knockMetalInside";
		sound[] = {"\twc_knocking\sounds\knockMetal.ogg", 2, 1};
		titles[] = {};
	};
};

