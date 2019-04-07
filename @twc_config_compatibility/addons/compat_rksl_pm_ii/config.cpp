class CfgPatches {
	class twc_compat_rksl_pm_ii {
		name = "Compat RKSL PM II";
		units[] = {};
		weapons[] = {};
		requiredVersion = "1.8";
		requiredAddons[] = {"RKSL_PMII", "RKSL_PMII_525"};
		author = "ACE 3";
		authors[] = {"Ruthberg", "Dedmen"};
		url = "http://thewreckingcrew.eu";
		version = "1.0.0.0";
		versionStr = "1.0.0.0";
		versionAr[] = {1,0,0,0};
	};
};

class CfgWeapons {
	class ItemCore;
	class InventoryOpticsItem_Base_F;

	class RKSL_optic_PMII_312: ItemCore {
		ACE_ScopeHeightAboveRail = 4.2235;
		ACE_ScopeAdjust_Vertical[] = { -1, 12 };
		ACE_ScopeAdjust_Horizontal[] = { -6, 6 };
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F {
			class OpticsModes {
				class Snip {
					discreteDistance[] = { 100 };
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};

	class RKSL_optic_PMII_312_sunshade: ItemCore {
		ACE_ScopeHeightAboveRail = 4.2235;
		ACE_ScopeAdjust_Vertical[] = { -1, 12 };
		ACE_ScopeAdjust_Horizontal[] = { -6, 6 };
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F {
			class OpticsModes {
				class Snip {
					discreteDistance[] = { 100 };
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};

	class RKSL_optic_PMII_525: ItemCore {
		ACE_ScopeHeightAboveRail = 4.2235;
		ACE_ScopeAdjust_Vertical[] = { 0, 26 };
		ACE_ScopeAdjust_Horizontal[] = { -6, 6 };
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F {
			class OpticsModes {
				class Snip {
					discreteDistance[] = { 100 };
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
};