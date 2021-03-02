class CfgAmmo {
	class GrenadeBase;
	class G_40mm_HE: GrenadeBase {
		hit = 4;
		indirectHit = 2;
		indirectHitRange = 10;
	};
	
	// Reduces bounciness of 40mm smoke
	class SmokeShell;
	class G_40mm_Smoke: SmokeShell {
		simulation = "shotSmoke";
		deflectionSlowDown = 0.2;
	};
	
	// increased intensity for flare
	class FlareBase;
	class F_40mm_White: FlareBase {
		intensity = 1000000; // 10x stronger than default
		timeToLive = 45;
		coefGravity = 0.25;
	};
	
	//L118 Light Gun
	class CUP_Sh_105_HE;
	class CUP_Sh_105_SMOKE;
	class CUP_Sh_105_ILLUM;
	class SmokeShellArty;

	class TWC_Ammo_105mm_HESH: CUP_Sh_105_HE {
		ace_frag_metal = 300;
		ace_frag_charge = 10190;
		ace_frag_gurney_c = 2830;
		ace_frag_gurney_k = 3/5;
		ace_frag_classes[] = {"ACE_frag_tiny","ACE_frag_tiny_HD","ACE_frag_small","ACE_frag_small_HD"};
		ace_frag_skip = 0;
		ace_frag_force = 1;

		hit = 500;
		indirectHitRange = 8;
	};

	class TWC_Ammo_105mm_Smoke_White: CUP_Sh_105_SMOKE {
		submunitionAmmo = "TWC_Ammo_105mm_Smoke_White_Submunition";
	};
	class TWC_Ammo_105mm_Smoke_White_Submunition: SmokeShellArty {
		deflecting = 10;
	};
	class TWC_Ammo_105mm_Smoke_Red: TWC_Ammo_105mm_Smoke_White {
		smokeColor[] = {0.9528,0.0438,0.041,0.8};
		submunitionAmmo = "SmokeShellRed";
	};
	class TWC_Ammo_105mm_Smoke_Orange: TWC_Ammo_105mm_Smoke_White {
		smokeColor[] = {0.9132,0.1763,0.007,0.8};
		submunitionAmmo = "SmokeShellOrange";
	};

	class TWC_Ammo_105mm_Illum: CUP_Sh_105_ILLUM {
		brightness = 4;
		intensity = 250000;
		timeToLive = 120;
	};
	class TWC_Ammo_105mm_Illum_IR: TWC_Ammo_105mm_Illum {
		nvgOnly = 1;
	};
};