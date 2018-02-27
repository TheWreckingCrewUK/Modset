class CfgPatches {
	class TWC_acefixes {
		units[]={};
		weapons[]={};
		requiredVersion = 1.7;
		requiredAddons[] = {"ace_common"};
		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

class cfgFunctions {
	class TWC_acefixes {
		class Functions {
			tag = "twc_acefixes";
			file = "twc_acefixes\functions";

			class handleParadrop {};
		};
	};
};

class Extended_PostInit_EventHandlers {
	class TWC_acefixes {
		serverInit = "twc_acefixes_fnc_handleParadrop;";
	};
};