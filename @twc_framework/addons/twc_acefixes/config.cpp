class CfgPatches {
	class twc_acefixes {
		units[]={};
		weapons[]={};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"ace_common",
			"acre_main"
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

class cfgFunctions {
	class twc_acefixes {
		tag = "twc_acefixes";
		class init {
			file = "twc_acefixes\functions";

			class handleParadrop {};
		};
	};
	
	class acre_sys_core {
		tag = "acre_sys_core";
		
		class acre_sys_core {
			class processDirectSpeaker {
				file = "twc_acefixes\functions\fn_processDirectSpeaker.sqf";
			};
		};
	};
	
	class ace_mk6mortar {
		tag = "ace_mk6mortar";
		
		class ace_mk6mortar {
			class mortarInit {
				file = "twc_acefixes\functions\fn_mortarInit.sqf";
			};
		};
	};
	
	class ace_cup_artillery {
		tag = "ace_cup_artillery";
		
		class ace_cup_artillery {
			class mortarInit {
				file = "twc_acefixes\functions\fn_mortarInit.sqf";
			};
		};
	};
};

class Extended_PostInit_EventHandlers {
	class twc_acefixes {
		init = "[] call twc_acefixes_fnc_handleParadrop;";
	};
};