class CfgPatches {
	class TWC_Fixes {
		units[]={};
		weapons[]={};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"ace_common"
		};

		author[] = {};
		authorUrl = "";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
	};
};

class CfgFunctions {
	class twc_acefixes {
		tag = "twc_fixes";
		class init {
			file = "twc_fixes\functions";

			class serverInit {};
			class helicopterInit {};
		};
	};

	class ace_mk6mortar {
		tag = "ace_mk6mortar";
		
		class ace_mk6mortar {
			class mortarInit {
				file = "twc_fixes\functions\fn_mortarInit.sqf";
			};
		};
	};
	
	class ace_cup_artillery {
		tag = "ace_cup_artillery";
		
		class ace_cup_artillery {
			class mortarInit {
				file = "twc_fixes\functions\fn_mortarInit.sqf";
			};
		};
	};
};

class Extended_PostInit_EventHandlers {
	class TWC_Fixes {
		serverInit = "[] call twc_fixes_fnc_serverInit;";
	};
};

class Extended_InitPost_EventHandlers {
	class Helicopter {
		class TWC_Fixes_EH {
			init = "_this call twc_fixes_fnc_helicopterInit;";
		};
	};
};