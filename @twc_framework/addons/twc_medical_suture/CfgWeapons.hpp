class CfgWeapons {
	class ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_ItemCore;

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

	class ACE_fieldDressing: ACE_ItemCore { displayName = "Field Dressing"; };
	class ACE_packingBandage: ACE_ItemCore { displayName = "Packing Bandage"; };
	class ACE_elasticBandage: ACE_ItemCore { displayName = "Elastic Bandage"; };
	class ACE_quikclot: ACE_ItemCore { displayName = "QuikClot"; };

	#define ADD_SUTURE_KIT(NUMBER,SCOPE) class TWC_Item_Medical_SutureKit_##NUMBER : TWC_Item_Medical_SutureKit_1 { \
		scope = SCOPE; \
		displayName = __EVAL("Suture Kit (" + str NUMBER + " Threads)"); \
		descriptionShort = __EVAL(str NUMBER + " sutures remaining, one consumed on use"); \
		descriptionUse = __EVAL(str NUMBER + " sutures remaining, one consumed on use"); \
	}

	ADD_SUTURE_KIT(2,1);
	ADD_SUTURE_KIT(3,1);
	ADD_SUTURE_KIT(4,1);
	ADD_SUTURE_KIT(5,1);
	ADD_SUTURE_KIT(6,1);
	ADD_SUTURE_KIT(7,1);
	ADD_SUTURE_KIT(8,1);
	ADD_SUTURE_KIT(9,1);
	ADD_SUTURE_KIT(10,1);
	ADD_SUTURE_KIT(11,1);
	ADD_SUTURE_KIT(12,1);
	ADD_SUTURE_KIT(13,1);
	ADD_SUTURE_KIT(14,1);
	ADD_SUTURE_KIT(15,1);
	ADD_SUTURE_KIT(16,1);
	ADD_SUTURE_KIT(17,1);
	ADD_SUTURE_KIT(18,1);
	ADD_SUTURE_KIT(19,1);
	ADD_SUTURE_KIT(20,2);
	ADD_SUTURE_KIT(21,1);
	ADD_SUTURE_KIT(22,1);
	ADD_SUTURE_KIT(23,1);
	ADD_SUTURE_KIT(24,1);
	ADD_SUTURE_KIT(25,2);
};