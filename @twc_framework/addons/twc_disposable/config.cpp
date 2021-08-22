class CfgPatches {
	class twc_disposable {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.7;
		requiredAddons[] = {"cba_xeh"};
		author[] = {"thewreckingcrew.eu"};
		authorUrl = "thewreckingcrew.eu";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
	};
};

class CfgFunctions {
	class twc_disposable {
		tag = "twc_disposable";
		
		class init {
			file = "twc_disposable\functions";
			
			class addDisposableHandler {};
		};
	};
};

/* class Extended_FiredBIS_EventHandlers {
	class CAManBase {
		class twc_disposable_fired {
			clientFiredBIS = "_this call twc_disposable_fnc_addDisposablehandler;";
		};
	};
}; */

class CfgWeapons {
	class Launcher;
	class Launcher_Base_F: Launcher {
		class EventHandlers {
			fired = "_this call twc_disposable_fnc_addDisposablehandler";
		};
	};
};