class UK3CB_BAF_L85A2;
class UK3CB_BAF_L86A2;
class UK3CB_BAF_SUSAT_3D;
class UK3CB_BAF_L115A3;
class UK3CB_BAF_L115A3_DE;

class TWC_Weapon_L86A1: UK3CB_BAF_L86A2 {
	displayName = "L86A1";
	ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
	author="Jayman";
};
class TWC_Weapon_L86A1_SUSAT3D: TWC_Weapon_L86A1 {
	class LinkedItems {
		class LinkedItemsOptic {
			slot="asdg_OpticRail_UK3CB_BAF_L85";
			item="UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L85A1: UK3CB_BAF_L85A2 {
	displayName = "L85A1";
	ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
	author="Jayman";
};
class TWC_Weapon_L85A1_SUSAT3D: TWC_Weapon_L85A1 {
	class LinkedItems {
		class LinkedItemsOptic {
			slot="asdg_OpticRail_UK3CB_BAF_L85";
			item="UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L85A1_SUSAT3D_Laser: TWC_Weapon_L85A1_SUSAT3D {
	class LinkedItems {
		class LinkedItemsOptic {
			slot="asdg_OpticRail_UK3CB_BAF_L85";
			item="UK3CB_BAF_SUSAT_3D";
		};

		class LinkedItemsFrontSideRail {
			slot="asdg_FrontSideRail_L85";
			item="UK3CB_BAF_LLM_Flashlight_Black";
		};
	};
};
class TWC_Weapon_L85A2_SUSAT3D: UK3CB_BAF_L85A2 {
	scope = 1;
	author="Saxon";
	class LinkedItems {
		class LinkedItemsOptic {
			slot="asdg_OpticRail_UK3CB_BAF_L85";
			item="UK3CB_BAF_SUSAT_3D";
		};

		class LinkedItemsFrontSideRail {
			slot="asdg_FrontSideRail_L85";
			item="UK3CB_BAF_LLM_Flashlight_Black";
		};
	};
};
class TWC_Weapon_L86A2_SUSAT3D: UK3CB_BAF_L86A2 {
	scope = 1;
	author="Saxon";
	class LinkedItems {
		class LinkedItemsOptic {
			slot="asdg_OpticRail_UK3CB_BAF_L85";
			item="UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L96_Woodland: UK3CB_BAF_L115A3 {
	scope = 1;
	displayname = "L96A1";
	magazines[] = {"UK3CB_BAF_762_L42A1_10Rnd"};
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="CUP_optic_Leupold_VX3";
		};
	};
};
class TWC_Weapon_L96_Desert: UK3CB_BAF_L115A3_DE {
	scope = 1;
	displayname = "L96A1";
	magazines[] = {"UK3CB_BAF_762_L42A1_10Rnd"};
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="CUP_optic_Leupold_VX3";
		};
	};
};

class UK3CB_BAF_U_Smock_DPMW;
class UK3CB_BAF_U_Smock_DPMT;
class UK3CB_BAF_U_Smock_DDPM;
class UK3CB_BAF_U_Smock_Arctic;

class UniformItem;

class TWC_Smock_Woodland: UK3CB_BAF_U_Smock_DPMW {
	scope = 1;
	class ItemInfo: UniformItem {
		containerClass = Supply30;
		mass = 50;
		uniformClass = "UK3CB_BAF_Soldier_Smock_DPMW_Base";
		uniformModel = "-";
	};
};

class TWC_Smock_Temperate: UK3CB_BAF_U_Smock_DPMT {
	scope = 1;
	class ItemInfo: UniformItem {
		containerClass = Supply30;
		mass = 50;
		uniformClass = "UK3CB_BAF_Soldier_Smock_DPMT_Base";
		uniformModel = "-";
	};
};

class TWC_Smock_Desert: UK3CB_BAF_U_Smock_DDPM {
	scope = 1;
	class ItemInfo: UniformItem {
		containerClass = Supply30;
		mass = 50;
		uniformClass = "UK3CB_BAF_Soldier_Smock_DDPM_Base";
		uniformModel = "-";
	};
};

class TWC_Smock_Arctic: UK3CB_BAF_U_Smock_Arctic {
	scope = 1;
	class ItemInfo: UniformItem {
		containerClass = Supply30;
		mass = 50;
		uniformClass = "UK3CB_BAF_Soldier_Smock_Arctic_Base";
		uniformModel = "-";
	};
};