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

	class LIB_FLARE_PISTOL;

	class Rifle_Base_F;

	class BBB_BoysATR: Rifle_Base_F {
		class EventHandlers {
			fired = "_this call twc_ww2_weapons_fnc_boys_fire.sqf;";
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
	
	class CSA38_Cannon;
	class CSA38_KWKL45: CSA38_Cannon
	{
		class Player: CSA38_Cannon
		{
			reloadTime = 5.1;
		};
	};
//6 Pounder 
	class fow_w_57mm_6Pdr {
		class Turrets {
			class MainTurret;
		};
	};
	class TWC_Vehicle_WW2_6pounder: fow_w_57mm_6Pdr {
		author = "[TWC] Ross";
		scope = 2;
		scopeCurator = 2;
		typicalCargo[] = {"TWC_Infantry_WW2_UK_Early_Woodland_Rifleman"};
		side = 3;
		displayName = "6 Pounder";
		faction = "TWC_WW2";
		crew = "TWC_Infantry_WW2_UK_Early_Woodland_Rifleman";

		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"TWC_Weapon_57mm_6pounder_Vehicle"};
				magazines[] = {};
				gunnerForceOptics = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best", db-40, 1.0, 50};
				maxHorizontalRotSpeed = 0.5;
			};
		};

		class ace_csw {
			enabled = 1;
			proxyWeapon = "TWC_Weapon_57mm_6pounder_Vehicle";
			magazineLocation = "_target selectionPosition 'NabojniceStart'";
			disassembleWeapon = ""; // What the weapon will disassemble to
			disassembleTurret = ""; // Which tripod will appear when weapon has been disassembled
			ammoLoadTime = 5;
			ammoUnloadTime = 4;
			desiredAmmo = 1; // When the weapon is reloaded it will try and reload to this ammo capacity
			disassembleFunc = ""; // A callback function for when the CSW gets disassembled. Arguments: [tripod, staticWeapon]
		};
	};
	class TWC_Weapon_57mm_6pounder_Vehicle: fow_w_57mm_6Pdr {
		displayname = "6 Pounder";
		reloadTime = 0.5;
		magazineReloadTime = 0.5;
		magazines[] = {
			"TWC_Magazine_57mm_1rnd_HE",
			"TWC_Magazine_57mm_1rnd_APCBC",
			"TWC_Magazine_57mm_1rnd_APCR",
			"TWC_Magazine_57mm_1rnd_APDS",
			"TWC_Magazine_57mm_1rnd_AP"
		};
		ace_overpressure_damage = 1;
	};
};