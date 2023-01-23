class CUP_arifle_M4A1_desert;
class cup_lmg_m249_pip1;

class TWC_Weapon_M4_SF: CUP_arifle_M4A1_desert {
	scope = 1;
	class LinkedItems {
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "cup_muzzle_snds_m16";
		};
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "cup_optic_acog";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
	};
};
class TWC_Weapon_Minimi_SF: cup_lmg_m249_pip1 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "muzzle_snds_m";
		};
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "cup_optic_acog_ta01b_rmr_black_pip";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
	};
};