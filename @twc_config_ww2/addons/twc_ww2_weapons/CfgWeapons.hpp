class CfgWeapons {
	class GrenadeLauncher;
	
	class Throw: GrenadeLauncher {
		muzzles[] += {"twc_no82_muzzle"};
		class ThrowMuzzle: GrenadeLauncher {};
		
		class twc_no82_muzzle: ThrowMuzzle {
			magazines[] = {"twc_no82"};
		};
	};

	class CBA_MiscItem_ItemInfo;
	class ACE_ItemCore;
	
	class twc_looseAmmoBox_303: ACE_ItemCore {
		scope = 2;
		displayName = "Box of Loose .303";
		descriptionShort = "Self Interact to convert to Enfield Clips";
		
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 228;
		};
	};

	class TWC_EmptyBrenMag: ACE_ItemCore {
		scope = 2;
		displayName = "30Rnd 303 Bren";
		descriptionShort = "Used in Conjuction with Loose Ammo to Form Bren Mags";
		picture = "\fow\fow_weapons\bren\data\ui\m_bren_ca.paa";
		
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 6.6;
		};
	};

	class fow_w_bren;
	class LIB_FLARE_PISTOL;
	class bnae_mk1_t_virtual;

	class Rifle;
	class Rifle_Base_F: Rifle {
		class EventHandlers;
	};

	class BBB_BoysATR: Rifle_Base_F {
		class EventHandlers: EventHandlers {
			class twc_ww2_weapons {
				fired = "_this execVM '\twc_ww2_weapons\scripts\twc_boys_fire.sqf';";
			};
		};
	};

	class TWC_Bren: fow_w_bren {
		class WeaponSlotsInfo {
			displayName = "Bren Gun";
			mass = 200;
			allowedSlots[] = {901};
		};
	};

	class twc_mk1t: bnae_mk1_t_virtual {
		scope = 1;
		author = "Anschluss";
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item= "bnae_scope_v3_virtual";
			};
		};
	};

	class TWC_No1Mk3SignalGun: LIB_FLARE_PISTOL {
		displayName = "No. 1 Mk III Signal Pistol";

		magazines[] = {
			"TWC_Magazine_SignalFlare_Green",
			"TWC_Magazine_SignalFlare_Red",
			"TWC_Magazine_SignalFlare_Yellow",
			"TWC_Magazine_SignalFlare_Blue",
			
			"TWC_Magazine_SignalSmoke_Green",
			"TWC_Magazine_SignalSmoke_Red",
			"TWC_Magazine_SignalSmoke_Yellow",
			"TWC_Magazine_SignalSmoke_Blue"
		};
	};

	class LIB_MG34_Tripod;
	class LIB_MG42_Tripod;
	class LIB_Maxim_M30;
	class LIB_M1919A4_tripod;
	class fow_w_type92;
	class fow_w_mg42_mounted;
	class fow_w_vickers_mounted;
	class fow_w_m1919a4_static;
	class CSA38_ZB53mg;
	class CSA38_TKVZ24mg;
	class csa38_ZB26mg;
	class csa38_MG34MG;
	
	class twc_dummyweapon_csa38_MG34MG: csa38_MG34MG {
		magazines[] = {"twc_dummymag_machinegun"};
	};

	class twc_dummyweapon_LIB_MG34_Tripod: LIB_MG34_Tripod {
		magazines[] = {"twc_dummymag_machinegun"};
	};

	class twc_dummyweapon_LIB_MG42_Tripod: LIB_MG42_Tripod {
		magazines[] = {"twc_dummymag_machinegun"};
	};

	class twc_dummyweapon_LIB_Maxim_M30: LIB_Maxim_M30 {
		magazines[] = {"twc_dummymag_machinegun"};
	};

	class twc_dummyweapon_LIB_M1919A4_tripod: LIB_M1919A4_tripod {
		magazines[] = {"twc_dummymag_machinegun"};
	};

	class twc_dummyweapon_fow_w_type92: fow_w_type92 {
		magazines[] = {"twc_dummymag_heavy"};
	};

	class twc_dummyweapon_fow_w_mg42_mounted: fow_w_mg42_mounted {
		magazines[] = {"twc_dummymag_machinegun"};
	};

	class twc_dummyweapon_fow_w_vickers_mounted: fow_w_vickers_mounted {
		magazines[] = {"twc_dummymag_machinegun"};
	};

	class twc_dummyweapon_fow_w_m1919a4_static: fow_w_m1919a4_static {
		magazines[] = {"twc_dummymag_machinegun"};
	};

	class twc_dummyweapon_CSA38_ZB53mg: CSA38_ZB53mg {
		magazines[] = {"twc_dummymag_machinegun"};
	};

	class twc_dummyweapon_CSA38_TKVZ24mg: CSA38_TKVZ24mg {
		magazines[] = {"twc_dummymag_machinegun"};
	};

	class twc_dummyweapon_csa38_ZB26mg: csa38_ZB26mg {
		magazines[] = {"twc_dummymag_machinegun"};
	};
};