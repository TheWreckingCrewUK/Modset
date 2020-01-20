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
		scope = 1;
		author = "Bosenator";
		displayName= "Suture Kit (1 Thread)";
		descriptionShort = "One suture remaining, consumed on use";
		descriptionUse = "One suture remaining, consumed on use";

		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 20;
		};
	};

	class ACE_fieldDressing: ACE_ItemCore {
		displayName = "Field Dressing";
		//descriptionShort = "A medium bandage with a medium chance of coming loose.";
		//descriptionUse = "A medium bandage with a medium chance of coming loose.";
	};
	
	class ACE_morphine: ACE_ItemCore
	{};
	
	class ACE_Painkillers: ACE_morphine
	{
		displayName = "painkillers";
	};
	
	class ACE_packingBandage: ACE_ItemCore {
		displayName = "Packing Bandage";
		//descriptionShort = "A decent bandage with a low chance of coming loose.";
		//descriptionUse = "A decent bandage with a low chance of coming loose.";
	};
	
	class ACE_elasticBandage: ACE_ItemCore { displayName = "Elastic Bandage"; };
	class ACE_quikclot: ACE_ItemCore { displayName = "QuikClot"; };

	#define ADD_SUTURE_KIT(NUMBER) class TWC_Item_Medical_SutureKit_##NUMBER : TWC_Item_Medical_SutureKit_1 { \
		displayName = __EVAL("Suture Kit (" + str NUMBER + " Threads)"); \
		descriptionShort = __EVAL(str NUMBER + " sutures remaining, one consumed on use"); \
		descriptionUse = __EVAL(str NUMBER + " sutures remaining, one consumed on use"); \
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
	ADD_SUTURE_KIT(21);
	ADD_SUTURE_KIT(22);
	ADD_SUTURE_KIT(23);
	ADD_SUTURE_KIT(24);
	
	class TWC_Item_Medical_SutureKit_25: TWC_Item_Medical_SutureKit_1 {
		scope = 2;
		displayName = "Suture Kit (25 Threads)";
		descriptionShort = "25 sutures remaining, one consumed on use";
		descriptionUse = "25 sutures remaining, one consumed on use";
	};
};