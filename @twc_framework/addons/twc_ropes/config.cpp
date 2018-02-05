class CfgPatches {
	class TWC_Ropes {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.8;

		requiredAddons[] = {
			"cba_main",
			"ace_interaction"
		};

		author[] = {};
		authorUrl = "";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
	};
};

class Extended_InitPost_EventHandlers {
	class Helicopter_F {
		class TWC_Ropes_InitPos_eh {
			init = "";
		};
	};
};

class CfgFunctions {
	class TWC_Ropes {
		class Functions {
			file = "twc_ropes\functions";
			class init {};
		};
	};
};