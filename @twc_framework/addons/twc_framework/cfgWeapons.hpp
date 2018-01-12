class cfgWeapons
{
	class ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_ItemCore;
	class TWC_Syrette: ACE_ItemCore
	{
		scope = 2;
		displayName = "Morphine Syrette";
		descriptionShort = "Used to combat moderate to severe pain experiences";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
};