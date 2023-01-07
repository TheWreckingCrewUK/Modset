class UK3CB_BAF_L85A2_RIS;
class UK3CB_BAF_L110A2RIS;
class UK3CB_BAF_L129A1_Grippod;
class UK3CB_BAF_L85A2_UGL;
class UK3CB_BAF_L85A3;
class UK3CB_BAF_L85A3_UGL;
class UK3CB_BAF_L115A3_Ghillie;
class UK3CB_BAF_L119A1_RIS;
class UK3CB_BAF_L119A1_UKUGL;
class arifle_SPAR_01_blk_f;
class arifle_SPAR_03_blk_f;
class arifle_SPAR_01_GL_blk_F;
class UK3CB_BAF_L105A2;
class UK3CB_BAF_L110A3;

class TWC_Weapon_L85A2_RIS_ELCAN3D: UK3CB_BAF_L85A2_RIS {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "RKSL_optic_LDS";
		};
		class LinkedItemsFrontSideRail
		{
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsUnder
		{
			item = "UK3CB_underbarrel_acc_grippod";
			slot = "UnderBarrelSlot";
		};
	};
};
class TWC_Weapon_L85A3_LDS: UK3CB_BAF_L85A3 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "RKSL_optic_LDS";
		};
		class LinkedItemsFrontSideRail
		{
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsUnder
		{
			item = "UK3CB_underbarrel_acc_grippod";
			slot = "UnderBarrelSlot";
		};
	};
};
class TWC_Weapon_L110A2_ELCAN3D: UK3CB_BAF_L110A2RIS {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "RKSL_optic_LDS";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
	};
};
class TWC_Weapon_L129A1_Grippod_TA648: UK3CB_BAF_L129A1_Grippod {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "UK3CB_BAF_TA648_308";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsBipod {
			slot = "UnderBarrelSlot";
			item = "UK3CB_underbarrel_acc_fgrip_bipod";
		};
	};
};
class TWC_Weapon_L85A2_UGL_ELCAN3D: UK3CB_BAF_L85A2_UGL {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "RKSL_optic_LDS";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
	};
};
class TWC_Weapon_L85A3_UGL_LDS: UK3CB_BAF_L85A3_UGL {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "RKSL_optic_LDS";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
	};
};
class TWC_Weapon_L129A1_Spotter: UK3CB_BAF_L129A1_Grippod {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "rksl_optic_pmii_312_pip";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsBipod {
			slot = "UnderBarrelSlot";
			item = "UK3CB_underbarrel_acc_bipod";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "UK3CB_BAF_Silencer_L115A3";
		};
	};
};
class TWC_Weapon_L115A3_Regular_Sniper: UK3CB_BAF_L115A3_Ghillie {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "rksl_optic_pmii_525_pip";
		};
		class LinkedItemsBipod {
			slot = "UnderBarrelSlot";
			item = "UK3CB_underbarrel_acc_bipod";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "uk3cb_baf_silencer_l115a3";
		};
	};
};
class TWC_Weapon_C8_SF: arifle_SPAR_01_blk_F {
	displayName = "C8";
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "cup_optic_acog_ta01b_rmr_black_pip";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "CUP_muzzle_snds_G36_black";
		};
	};
};
class TWC_Weapon_C8_SF_GL: arifle_SPAR_01_GL_blk_F {
	displayName = "C8 GL";
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "cup_optic_acog_ta01b_rmr_black_pip";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "CUP_muzzle_snds_G36_black";
		};
	};
};
class TWC_Weapon_HK417_SF: arifle_SPAR_03_blk_f {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "rksl_optic_pmii_312";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsBipod {
			slot = "UnderBarrelSlot";
			item = "cup_bipod_vltor_modpod_black";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "cup_muzzle_snds_socom762rc";
		};
	};
};
class TWC_Weapon_L105A2_SF: UK3CB_BAF_L105A2 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "UK3CB_BAF_Silencer_L105A1";
		};
	};
};
class TWC_Weapon_L110A3_SF: UK3CB_BAF_L110A3 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "UK3CB_BAF_Silencer_L110";
		};
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "cup_optic_acog_ta01b_rmr_black_pip";
		};
	};
};