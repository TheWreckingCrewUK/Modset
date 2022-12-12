class UK3CB_BAF_L85A2_RIS;
class UK3CB_BAF_L110A2RIS;
class UK3CB_BAF_L129A1_Grippod;
class UK3CB_BAF_L85A2_UGL;
class UK3CB_BAF_L85A3;
class UK3CB_BAF_L85A3_UGL;
UK3CB_BAF_L115A3_Ghillie;

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
			item = "UK3CB_BAF_LLM_Flashlight_Black";
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
			item = "UK3CB_BAF_LLM_Flashlight_Black";
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
			item = "UK3CB_BAF_LLM_Flashlight_Black";
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
			item = "UK3CB_BAF_LLM_Flashlight_Black";
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
			item = "UK3CB_BAF_LLM_Flashlight_Black";
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
			item = "UK3CB_BAF_LLM_Flashlight_Black";
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
			item = "UK3CB_BAF_LLM_Flashlight_Black";
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