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
	class TWC_EmptyBrenMag: ACE_ItemCore
	{
		scope = 2;
		displayName = "Empty Bren Mag";
		descriptionShort = "Used in Conjuction with Loose Ammo to Form Bren Mags";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 6.6;
		};
	};
	class CUP_Vhmg_M2_static;
	class CUP_Vhmg_DSHKM_veh;
	class CUP_Vhmg_KORD_veh;

	class twc_dummyweapon_CUP_Vhmg_M2_static: CUP_Vhmg_M2_static
	{
		magazines[] = {"twc_dummymag_heavy"};
	};
	class twc_dummyweapon_CUP_Vhmg_DSHKM_veh: CUP_Vhmg_DSHKM_veh
	{
		magazines[] = {"twc_dummymag_heavy"};
	};
	class twc_dummyweapon_CUP_Vhmg_KORD_veh: CUP_Vhmg_KORD_veh
	{
		magazines[] = {"twc_dummymag_heavy"};
	};
};