/*
	"TWC_AmmoBox_Training_Medical_Base",
*/

class TWC_AmmoBox_Training_Medical_Base: TWC_AmmoBox_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "Medical Supplies (Immobile)";
	
	editorSubcategory = "TWC_Training";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, 100);
		ADD_ITEM(ACE_elasticBandage, 100);
		ADD_ITEM(ACE_quikclot, 100);
		ADD_ITEM(ACE_packingBandage, 100);
		
		ADD_ITEM(ACE_atropine, 25);
		ADD_ITEM(ACE_adenosine, 25);
		ADD_ITEM(ACE_morphine, 25);
		ADD_ITEM(ACE_epinephrine, 25);
		
		ADD_ITEM(ACE_salineIV_500, 50);
		ADD_ITEM(ACE_salineIV_250, 25);
		ADD_ITEM(ACE_tourniquet, 50);
		ADD_ITEM(ACE_splint,25);
		ADD_ITEM(ACE_bodyBag, 50);
		
		ADD_ITEM(ACE_personalAidKit, 25);
		ADD_ITEM(TWC_Item_Medical_SutureKit_25, 25);
	};
};