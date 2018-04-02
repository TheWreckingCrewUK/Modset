class CfgWeapons {
	class ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_ItemCore;
	class TWC_Item_Medical_PrittStick: ACE_ItemCore {
		scope = 2;
		displayName = "Entertainment Device";
		descriptionShort = "Suitable for all ages";
		picture = "\twc_medical\UI\airwayclearer.paa";
		icon = "iconObject_circle";

		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 1;
		};
	};
};