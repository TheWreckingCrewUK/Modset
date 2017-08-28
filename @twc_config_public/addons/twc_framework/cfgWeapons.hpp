class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class ACE_ItemCore;
	class TWC_Syrette: ACE_ItemCore
	{
		scope = 2;
		displayName = "Morphine Syrette";
		descriptionShort = "Used to combat moderate to severe pain experiences";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 1;
		};
	};
};