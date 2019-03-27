/*
	"TWC_AmmoBox_Training_Medical_Base",
*/

class TWC_AmmoBox_Training_Medical_Base: TWC_AmmoBox_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "Medical Supplies (Immobile)";
	
	editorSubcategory = "TWC_Training";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 100);
		item_nc(ACE_elasticBandage, 100);
		item_nc(ACE_quikclot, 100);
		item_nc(ACE_packingBandage, 100);
		
		item_nc(ACE_atropine, 25);
		item_nc(ACE_adenosine, 25);
		item_nc(ACE_morphine, 25);
		item_nc(ACE_epinephrine, 25);
		
		item_nc(ACE_salineIV_500, 50);
		item_nc(ACE_salineIV_250, 25);
		item_nc(ACE_tourniquet, 50);
		item_nc(ACE_bodyBag, 50);
		
		item_nc(ACE_personalAidKit, 25);
		item_nc(TWC_Item_Medical_SutureKit_25, 25);
	};
};