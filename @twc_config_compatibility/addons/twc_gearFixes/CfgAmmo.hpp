class CfgAmmo {
	class GrenadeHand;
	class GrenadeHand_stone: GrenadeHand {
		ace_frag_enabled = 0;
		explosionTime = 0;
		caliber = 0.1;
		cost = 0;
		dangerRadiusHit = 0;
		minimumSafeZone = 0;
		explosionEffectsRadius = 0;
		/*hit = 0.1;
		indirectHit = 0.2;
		indirectHitRange = 0.1;*/
		simulation = "shotShell";
		SoundSetExplosion[] = {};
		soundHit1[] = {};
		soundHit2[] = {};
		soundHit3[] = {};
		soundHit4[] = {};
	};
	
	class BulletBase;
	class B_127x99_Ball: BulletBase {
		class CamShakePlayerFire {
			distance = 1;
			duration = 1;
			frequency = 10;
			power = 30;
		};
	};
	class B_762x51_Ball: BulletBase {
		class CamShakePlayerFire {
			distance = 1;
			duration = 1;
			frequency = 10;
			power = 5;
		};
	};
	
	/** MAKE RPGS MORE VIBRANT :) **/
	class RocketBase;
	class CUP_R_57mm_HE: RocketBase {
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 150;
	};

	class CUP_R_M72A6_AT: RocketBase {
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 50;
	};
};