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
	
	class B_30mm_APFSDS_Tracer_Red;
	class B_30mm_HE_Tracer_Red;
	
	class TWC_Ammo_30mm_APDS: B_30mm_APFSDS_Tracer_Red {
		hit = 200;
		calliber = 7;
		typicalSpeed = 1100;
	};
	
	class TWC_Ammo_30mm_HET: B_30mm_HE_Tracer_Red {
		typicalSpeed = 1000;
	};
	
	class CUP_R_OG7_AT: RocketBase {
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",3,0.7,500};
	};
	
	class CUP_R_PG7V_AT: RocketBase {
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",3,0.7,500};
	};
	
	class CUP_R_PG7VL_AT: RocketBase {
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",3,0.7,500};
	};
	
	class CUP_R_PG7VM_AT: RocketBase {
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",3,0.7,500};
	};
	
	class CUP_R_PG7VR_AT: RocketBase {
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",3,0.7,500};
	};
	
	class CUP_R_RPG18_AT: RocketBase {
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",2,0.9,500};
	};
	
	class CUP_R_TBG7V_AT: RocketBase {
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",3,0.7,500};
	};
	
	class Chemlight_base;
	class ACE_G_Chemlight_IR: Chemlight_base {
		timeToLive = 150000;
	};
	
	class Chemlight_Blue: Chemlight_base {
		timeToLive = 150000;
	};
	
	class Chemlight_Red: Chemlight_base {
		timeToLive = 150000;
	};
	
	class Chemlight_Green: Chemlight_base {
		timeToLive = 150000;
	};
	
	class Chemlight_Yellow: Chemlight_base {
		timeToLive = 150000;
	};
	
	//don't bother with hitMan, something else is affecting it
	class B_338_Ball;
	class ACE_338_Ball_API526: B_338_Ball {
		hit = 25;
		caliber = 6;
		penetrationDirDistribution = 0.05;
		explosive = 0.1;
		indirectHit = 2;
		indirectHitRange = 0.1;
	};
	
	class ace_338_ball: B_338_Ball {
		hit = 25;
	};
	class BulletBase;
	class B_127x99_Ball: BulletBase {
		class CamShakePlayerFire {
			distance = 1;
			duration = 1;
			frequency = 10;
			power = 30;
		};
		
		ACE_muzzleVelocityVariationSD = 3;
	};
	
	class B_762x51_Ball: BulletBase {
		class CamShakePlayerFire {
			distance = 1;
			duration = 1;
			frequency = 10;
			power = 5;
		};
		
		ACE_muzzleVelocityVariationSD = 1;
	};
};