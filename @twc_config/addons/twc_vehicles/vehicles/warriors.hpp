class CUP_B_MCV80_GB_D_SLAT;
class TWC_BaseClass_Warrior: CUP_B_MCV80_GB_D_SLAT {
	class Turrets;
	class AnimationSources;
};

class TWC_BaseClass_Warrior_F: TWC_BaseClass_Warrior {
	class Turrets: Turrets {
		class MainTurret;
	};

	class AnimationSources: AnimationSources {
		class recoil_source;
		class muzzle_rot_ctws;
		class muzzle_hide_ctws;
		class muzzle_rot_coax;
		class muzzle_hide_coax;
		class HideSlat;
		class HideProxy_Desert;
		class HideProxy_Woodland;
	};

	camShakeCoef = 0;

	class CamShake {
		power = 4;
		minSpeed = 5;
		frequency = 20;
		distance = 30;
	};
};

class TWC_Vehicle_FV510_D_SLAT: TWC_BaseClass_Warrior_F {
	scope = 0;
	scopeCurator = 0;
	side = 1;
	faction = "TWC_General";

	displayname = "FV510 D SLAT (EMPTY)";
	editorSubcategory = "TWC_ForceType_Mechanised";

	class TransportItems     { };
	class TransportMagazines { };
	class TransportWeapons   { };
	class TransportBackpacks { };

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {
				"TWC_Weapon_30mm_Rarden_Vehicle",
				"TWC_Weapon_762_GPMG_Vehicle"
			};
			
			magazines[] = {
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_APDS",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"TWC_Magazine_30mm_3rd_HET",
				"CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M"
			};
		};
	};

	class AnimationSources: AnimationSources {
		class recoil_source: recoil_source {
			weapon = "TWC_Weapon_30mm_Rarden_Vehicle";
		};

		class muzzle_rot_ctws: muzzle_rot_ctws {
			weapon = "TWC_Weapon_30mm_Rarden_Vehicle";
		};

		class muzzle_hide_ctws: muzzle_hide_ctws {
			weapon = "TWC_Weapon_30mm_Rarden_Vehicle";
		};

		class muzzle_rot_coax: muzzle_rot_coax {
			weapon = "TWC_Weapon_762_GPMG_Vehicle";
		};

		class muzzle_hide_coax: muzzle_hide_coax {
			weapon = "TWC_Weapon_762_GPMG_Vehicle";
		};

		class HideSlat: HideSlat {
			initPhase = 1;
		};

		class HideProxy_Desert: HideProxy_Desert {
			initPhase = 1;
		};

		class HideProxy_Woodland: HideProxy_Woodland {
			initPhase = 0;
		};
	};
};

class TWC_Vehicle_FV510_D: TWC_Vehicle_FV510_D_SLAT {
	displayname = "FV510 D (EMPTY)";

	class AnimationSources: AnimationSources {
		class HideSlat: HideSlat {
			initPhase = 0;
		};
	};
};

class TWC_Vehicle_FV510_W_SLAT: TWC_Vehicle_FV510_D_SLAT {
	displayname = "FV510 W SLAT (EMPTY)";

	HiddenSelections[] = {
		"camo1",
		"camo01",
		"camo02"
	};

	HiddenSelectionsTextures[] = {
		"CUP\TrackedVehicles\CUP_TrackedVehicles_FV510\Data\warrior_ext_w_co.paa",
		"CUP\TrackedVehicles\CUP_TrackedVehicles_FV510\Data\warrior_ext_w_co.paa",
		"CUP\TrackedVehicles\CUP_TrackedVehicles_MCV80\Data\fv510_1_co.paa"
	};

	class AnimationSources: AnimationSources {
		class HideSlat: HideSlat {
			initPhase = 1;
		};
		
		class HideProxy_Desert: HideProxy_Desert {
			initPhase = 0;
		};

		class HideProxy_Woodland: HideProxy_Woodland {
			initPhase = 1;
		};
	};
};

class TWC_Vehicle_FV510_W: TWC_Vehicle_FV510_W_SLAT {
	displayname = "FV510 W (EMPTY)";

	class AnimationSources: AnimationSources {
		class HideSlat: HideSlat {
			initPhase = 0;
		};
	};
};