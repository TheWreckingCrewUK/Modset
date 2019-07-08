class CfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class TWC_Item_Clicker: ACE_ItemCore {
		scope = 2;
		displayName = "Clicker";
		descriptionShort = "Suitable for grabbing attenton";
		picture = "\twc_clicker\ui\clicker_ca.paa";
		icon = "iconObject_circle";

		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 1;
		};
	};
};