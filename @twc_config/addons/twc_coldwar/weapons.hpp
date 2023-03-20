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
class SP_enfield_l42_mixed_2;
class TWC_Weapon_L42A1_No32: SP_enfield_l42_mixed_2
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "sp_no32";
		};
	};
};
class TWC_Weapon_L14A1;
class twc_l14A1_scoped: TWC_Weapon_L14A1
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
class sp_l4_lmg_walnut: LMG_Zafir_F
{
	magazines[] = {"SP_30Rnd_762_L4","UK3CB_BAF_762_20Rnd","UK3CB_BAF_762_20Rnd_T"};
};