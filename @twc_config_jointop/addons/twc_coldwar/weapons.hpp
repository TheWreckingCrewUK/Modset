class Rifle_Base_F;
class UK3CB_BAF_L1A1: Rifle_Base_F
{
	class WeaponSlotsInfo;
};
class UK3CB_BAF_L1A1_Wood: UK3CB_BAF_L1A1
{
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 95.61;
	};
};
class TWC_L1A1_SUIT: UK3CB_BAF_L1A1_Wood
{
	scope = 1;
	author = "jayman";
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item= "UK3CB_BAF_SUIT";
		};
	};
};
class ukcw_L14A1;
class twc_l14A1_scoped: ukcw_L14A1
{
	scope = 1;
	author="jayman";
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot="CowsSlot";
			item="CUP_optic_MAAWS_Scope";
		};
	};
};
class LMG_Zafir_F;
class sp_l4_lmg: LMG_Zafir_F
{
	magazines[] = {"SP_30Rnd_762_L4","UK3CB_BAF_762_20Rnd","UK3CB_BAF_762_20Rnd_T"};
};
class launch_RPG7_F;
class sp_l1a1_law66: launch_RPG7_F
{
	ACE_UsedTube = "sp_l1a1_law66_used";
	magazines[] = {"SP_law66_round_disposable"};
};
class sp_l1a1_law66_used: sp_l1a1_law66 
{
	scope = 1;
	ACE_isUsedLauncher = 1;
	author = "[TWC] Rik";
	displayName = "Used L1A1 LAW";
	descriptionShort = "Used L1A1 LAW";
	magazines[] = {"ACE_FiredMissileDummy"};
	weaponPoolAvailable = 0;
};

//Uniform Cargo Fixes
class UniformItem;
class SP_UniformBase_Item;
class SP_60PatCombats_DPM_1_Item: SP_UniformBase_Item
{
	class ItemInfo: UniformItem
	{
		containerClass = "Supply40";
	};
};
class SP_60PatCombatsRolled_DPM_1_Item: SP_UniformBase_Item
{
	class ItemInfo: UniformItem
	{
		containerClass = "Supply40";
	};
};
class SP_60PatCombatsRolled_Khaki_1_Item: SP_UniformBase_Item
{
	class ItemInfo: UniformItem
	{
		containerClass = "Supply40";
	};
};
class SP_72Para_DenisonKhaki_1_Item: SP_UniformBase_Item
{
	class ItemInfo: UniformItem
	{
		containerClass = "Supply40";
	};
};
class SP_72Para_DenisonTrops_1_Item: SP_UniformBase_Item
{
	class ItemInfo: UniformItem
	{
		containerClass = "Supply40";
	};
};
class SP_60PatCombatsRolled_OD_1_Item: SP_UniformBase_Item
{
	class ItemInfo: UniformItem
	{
		containerClass = "Supply40";
	};
};
class SP_NBCMk3_HoodUp_Item: SP_UniformBase_Item
{
	class ItemInfo: UniformItem
	{
		containerClass = "Supply40";
	};
};
class SP_NBCMk3_Item: SP_UniformBase_Item
{
	class ItemInfo: UniformItem
	{
		containerClass = "Supply40";
	};
};