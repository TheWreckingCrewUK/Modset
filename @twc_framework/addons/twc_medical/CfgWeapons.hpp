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

	class ACE_surgicalKit;
	class TWC_Item_Medical_SutureKit_1: ACE_surgicalKit {
		scope = 2;
		author = "Bosenator";
		displayName= "Suture Kit (1 Thread)";
		descriptionShort = "One suture remaining, consumed on use";
		descriptionUse = "One suture remaining, consumed on use";

		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 20;
		};
	};

	#define ADD_SUTURE_KIT(NUMBER) class TWC_Item_Medical_SutureKit_##NUMBER : TWC_Item_Medical_SutureKit_1 { \
		displayName = __EVAL("Suture Kit (" + str NUMBER + " Threads)"); \
	}

	ADD_SUTURE_KIT(2);
	ADD_SUTURE_KIT(3);
	ADD_SUTURE_KIT(4);
	ADD_SUTURE_KIT(5);
	ADD_SUTURE_KIT(6);
	ADD_SUTURE_KIT(7);
	ADD_SUTURE_KIT(8);
	ADD_SUTURE_KIT(9);
	ADD_SUTURE_KIT(10);
	ADD_SUTURE_KIT(11);
	ADD_SUTURE_KIT(12);
	ADD_SUTURE_KIT(13);
	ADD_SUTURE_KIT(14);
	ADD_SUTURE_KIT(15);
	ADD_SUTURE_KIT(16);
	ADD_SUTURE_KIT(17);
	ADD_SUTURE_KIT(18);
	ADD_SUTURE_KIT(19);
	ADD_SUTURE_KIT(20);
};