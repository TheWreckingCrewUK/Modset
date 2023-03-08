class UK3CB_BAF_L85A2;
class UK3CB_BAF_L86A2;
class UK3CB_BAF_SUSAT_3D;
class UK3CB_BAF_L135A1;
class UK3CB_BAF_L85A2_UGL_HWS;
class UK3CB_BAF_L110A2RIS;
class UK3CB_BAF_L22;
class UK3CB_BAF_L22A2;
class UK3CB_BAF_L115A3;

class TWC_Weapon_L86A1: UK3CB_BAF_L86A2 {
	displayName = "L86A1";
	ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
	author="Jayman";
};
class TWC_Weapon_L86A1_SUSAT3D: TWC_Weapon_L86A1 {
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
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
			slot="CowsSlot";
			item="UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L85A1_SUSAT3D_Laser: TWC_Weapon_L85A1_SUSAT3D {
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="UK3CB_BAF_SUSAT_3D";
		};
		class LinkedItemsFrontSideRail {
			slot="PointerSlot";
			item="cup_acc_llm_black";
		};
	};
};
class TWC_Weapon_L22A1_SUSAT: UK3CB_BAF_L22 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L22A2_SUSAT: UK3CB_BAF_L22A2 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L85A2_SUSAT3D: UK3CB_BAF_L85A2 {
	scope = 1;
	author="Saxon";
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L86A2_SUSAT3D: UK3CB_BAF_L86A2 {
	scope = 1;
	author="Saxon";
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L135A1: UK3CB_BAF_L135A1
{
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="RKSL_optic_PMII_525";
		};
	};	
};
class TWC_Weapon_L85A2_UGL_HWS_SUSAT3D: UK3CB_BAF_L85A2_UGL_HWS {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L110A2_SUSAT3D: UK3CB_BAF_L110A2RIS {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item="UK3CB_BAF_SUSAT_3D";
		};

	};
};
class TWC_L96_W_Base: UK3CB_BAF_L115A3 {
	scope = 1;
	displayname = "L96A1";
	magazines[] = {"UK3CB_BAF_762_L42A1_10Rnd", "UK3CB_BAF_762_L42A1_10Rnd_T"};
	class WeaponSlotsInfo {
		class MuzzleSlot {
			class compatibleItems {};
			displayName = "Muzzle";
			iconPicture = "a3\weapons_f\Data\ui\attachment_muzzle";
			iconPinpoint = "Center";
			iconPosition[] = {0,0};
			iconScale = 0;
			linkProxy = "\a3\data_f\proxies\weapon_slots\MUZZLE";
			scope = 0;
		};
		class CowsSlot {
			class compatibleItems {
				CUP_optic_Leupold_VX3 = 1;
				cup_optic_leupoldmk4 = 1;
				cup_optic_leupoldmk4_10x40_lrt_woodland = 1;
				cup_optic_leupoldm3lr = 1;
				cup_optic_sb_3_12x50_pmii = 1;
				cup_optic_an_pvs_4 = 1;
			};
			displayName = "Optics Slot";
			iconPicture = "a3\weapons_f\Data\ui\attachment_top";
			iconPinpoint = "Bottom";
			iconPosition[] = {0,0};
			iconScale = 0;
			linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			scope = 0;
		};
		mass = 140;
	};
};

class TWC_L96_D_base: TWC_L96_W_Base {
	hiddenSelections[] = {"camo","camo2","camo3"};
	hiddenSelectionsTextures[] = {"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L115\data\awcstock_FDE_co.paa","\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L115\data\AWC_Scope_co.paa","\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L115\data\Magnumbits_ca.paa"};
	picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L115\data\gear_awmFDE_ca.paa";
};

class TWC_Weapon_L96_Woodland: TWC_L96_W_Base {
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="cup_optic_leupoldmk4_10x40_lrt_woodland";
		};
	};
};
class TWC_Weapon_L96_Desert: twc_l96_D_Base {
	class LinkedItems {
		class LinkedItemsOptic {
			slot="CowsSlot";
			item="cup_optic_leupoldmk4";
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
		containerClass = Supply40;
		mass = 50;
		uniformClass = "UK3CB_BAF_Soldier_Smock_DPMW_Base";
		uniformModel = "-";
	};
};

class TWC_Smock_Temperate: UK3CB_BAF_U_Smock_DPMT {
	scope = 1;
	class ItemInfo: UniformItem {
		containerClass = Supply40;
		mass = 50;
		uniformClass = "UK3CB_BAF_Soldier_Smock_DPMT_Base";
		uniformModel = "-";
	};
};

class TWC_Smock_Desert: UK3CB_BAF_U_Smock_DDPM {
	scope = 1;
	class ItemInfo: UniformItem {
		containerClass = Supply40;
		mass = 50;
		uniformClass = "UK3CB_BAF_Soldier_Smock_DDPM_Base";
		uniformModel = "-";
	};
};

class TWC_Smock_Arctic: UK3CB_BAF_U_Smock_Arctic {
	scope = 1;
	class ItemInfo: UniformItem {
		containerClass = Supply40;
		mass = 50;
		uniformClass = "UK3CB_BAF_Soldier_Smock_Arctic_Base";
		uniformModel = "-";
	};
};
