class CUP_Vlmg_L94A1_Coax;
class autocannon_30mm;
class ACE_ItemCore;
class InventoryItem_Base_F;

class TWC_GPMG: CUP_Vlmg_L94A1_Coax {
	displayname = "L94A1";
};

class TWC_Rarden: autocannon_30mm {
	displayname = "L21A1 Rarden";
	magazineReloadTime = 1.2;

	magazines[] = {
		"TWC_Magazine_30mm_3rd_APDS",
		"TWC_Magazine_30mm_3rd_HET"
	};
};

// Items, so they come up in the inventory for the reload system
class TWC_Item_30mm_3rd_HET: ACE_ItemCore {
	scope = 2;
	picture = "twc_vehicles\ui\30mmHE.paa";
	displayName = "L13A1 30mm 3rd HE-T";
	descriptionShort = "Used in the FV510 Warrior";
	descriptionUse = "";
	
	class ItemInfo: InventoryItem_Base_F {
		mass = 30;
	};
};

class TWC_Item_30mm_3rd_APDS: ACE_ItemCore {
	scope = 2;
	picture = "twc_vehicles\ui\30mmAP.paa";
	displayName = "L14A1 30mm 3rd APDS";
	descriptionShort = "Used in the FV510 Warrior";
	descriptionUse = "";
	
	class ItemInfo: InventoryItem_Base_F {
		mass = 30;
	};
};