class CfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class TWC_Item_Whistle: ACE_ItemCore {
		scope = 2;
		displayName = "Signalling Whistle";
		descriptionShort = "Suitable for grabbing attenton";
		picture = "\twc_whistle\ui\whistle_ca.paa";
		icon = "iconObject_circle";

		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 1;
		};
	};
};