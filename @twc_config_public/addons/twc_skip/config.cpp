class CfgPatches {
	class twc_skip {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.8;

		requiredAddons[] = {
			"cba_main"
		};

		author[] = {};
		authorUrl = "";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
	};
};

class CfgFunctions {
	class twc_skip {
		class init {
			file = "twc_skip\functions";
			
			class clientHandler {};
			class voteHandler {};
			class checkResults {};
		};
	};
};

class CfgDebriefing {
	class Skipped {
		title = "Cowards Withdraw";
		subtitle = "You mutinied and fled. How sad.";
		description = "Complete and utter embarrassment as troops flee battlefield.";
		pictureBackground = "";
		picture = "KIA";
		pictureColor[] = {0.6, 0.1, 0.2, 1};
	};
}

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class twc_skip_InitPos_eh {
			clientInit = "[_this] call twc_skip_fnc_clientHandler;";
		};
	};
};

class Extended_PostInit_EventHandlers {
	class twc_skip_InitPos_eh {
		serverInit = "call twc_skip_fnc_voteHandler;";
	};
};