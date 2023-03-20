class CfgPatches {
	class TWC_CTab {
		weapons[] = { };
		requiredVersion = 0.1;
		units[] = { };
		requiredAddons[] = {"ctab"};
	};
};

class cTab_RscPicture;
class cTab_Tablet_dlg {
	class controlsBackground {
		class windowsBG: cTab_RscPicture {
			text = "\twc_ctab\data\background.paa";
		};
	};
};