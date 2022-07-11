class CfgWeapons {
	class ACE_personalAidKit;
	class TWC_Item_Medical_SurgicalMasks_1: ACE_personalAidKit {
		scope = 1;
		author = "Bosenator";
		displayName = "Surgical Masks (1 Mask)";
		descriptionShort = "One surgical mask remaining, consumed on use";
		descriptionUse = "One surgical mask remaining, consumed on use";
		picture = "\twc_medical_surgery\ui\surgical_mask.paa";
		icon = "iconObject_circle";
	};
	
	#define ADD_SURGICAL_MASK(NUMBER) class TWC_Item_Medical_SurgicalMasks_##NUMBER : TWC_Item_Medical_SurgicalMasks_1 { \
		displayName = __EVAL("Surgical Masks (" + str NUMBER + " Masks)"); \
		descriptionShort = __EVAL(str NUMBER + " surgical masks remaining, one consumed on use"); \
		descriptionUse = __EVAL(str NUMBER + " surgical masks, one consumed on use"); \
	}
	
	ADD_SURGICAL_MASK(2);
	ADD_SURGICAL_MASK(3);
	ADD_SURGICAL_MASK(4);
	ADD_SURGICAL_MASK(5);
	ADD_SURGICAL_MASK(6);
	ADD_SURGICAL_MASK(7);
	ADD_SURGICAL_MASK(8);
	ADD_SURGICAL_MASK(9);
	ADD_SURGICAL_MASK(10);
	ADD_SURGICAL_MASK(11);
	ADD_SURGICAL_MASK(12);
	ADD_SURGICAL_MASK(13);
	ADD_SURGICAL_MASK(14);
	ADD_SURGICAL_MASK(15);
	ADD_SURGICAL_MASK(16);
	ADD_SURGICAL_MASK(17);
	ADD_SURGICAL_MASK(18);
	ADD_SURGICAL_MASK(19);
	
	class TWC_Item_Medical_SurgicalMasks_20: TWC_Item_Medical_SurgicalMasks_1 {
		scope = 2;
		displayName = "Surgical Masks (20 Masks)";
		descriptionShort = "20 surgical masks remaining, one consumed on use";
		descriptionUse = "20 surgical masks remaining, one consumed on use";
	};
};