class Rifle;
class UK3CB_BAF_L1A1: Rifle
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

class CUP_arifle_RPK74;
class ukcw_l4: CUP_arifle_RPK74
{
	magazines[] = {"ukcw_30Rnd_762x51_STANAG","CUP_20Rnd_762x51_FNFAL_M","UK3CB_BAF_762_20Rnd"};
};