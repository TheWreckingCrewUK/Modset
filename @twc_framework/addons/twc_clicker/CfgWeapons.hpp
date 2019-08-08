class CfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class TWC_Item_Clicker_1: ACE_ItemCore {
		scope = 1;
		displayName = "Clicker (Severly Deformed)";
		descriptionShort = "Suitable for grabbing attenton, singular use left";
		picture = "\twc_clicker\ui\clicker_ca.paa";
		icon = "iconObject_circle";

		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 1;
		};
	};
	
	#define ADD_CLICKER(NUMBER) class TWC_Item_Clicker_##NUMBER : TWC_Item_Clicker_1 { \
		displayName = __EVAL("Clicker (" + str NUMBER + " Uses Remaining)"); \
		descriptionShort = __EVAL(str NUMBER + " uses remaining, one consumed on use"); \
		descriptionUse = __EVAL(str NUMBER + " uses remaining, one consumed on use"); \
	}
	
	ADD_CLICKER(2);
	ADD_CLICKER(3);
	ADD_CLICKER(4);
	ADD_CLICKER(5);
	ADD_CLICKER(6);
	ADD_CLICKER(7);
	ADD_CLICKER(8);
	ADD_CLICKER(9);
	ADD_CLICKER(10);
	ADD_CLICKER(11);
	ADD_CLICKER(12);
	ADD_CLICKER(13);
	ADD_CLICKER(14);
	ADD_CLICKER(15);
	ADD_CLICKER(16);
	ADD_CLICKER(17);
	ADD_CLICKER(18);
	ADD_CLICKER(19);
	ADD_CLICKER(20);
	ADD_CLICKER(21);
	ADD_CLICKER(22);
	ADD_CLICKER(23);
	ADD_CLICKER(24);
	
	class TWC_Item_Clicker_25: TWC_Item_Clicker_1 {
		scope = 2;
		displayName = "Clicker (25 Uses)";
		descriptionShort = "25 uses remaining, one consumed on use";
		descriptionUse = "25 uses remaining, one consumed on use";
	};
};