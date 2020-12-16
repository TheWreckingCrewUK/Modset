class CfgPatches {
	class TWC_Join {
		weapons[] = { };
		requiredVersion = 0.1;
		units[] = { };
		requiredAddons[] = {"ctab"};
	};
};

class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay {
	class Spotlight {
		class OperationServer {
			text = "TWC Server";
			textIsQuote = 0;
			picture = "twc_join\data\button.paa";
			action = "connectToServer ['alpha.twcrew.eu', 2322, 'h555']";
			actionText = "Join: TWC Operation Server";
			condition = "true";
		};
	};
};