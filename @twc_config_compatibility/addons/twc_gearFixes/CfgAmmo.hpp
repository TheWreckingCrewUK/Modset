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
	
	/*
	class FlareBase;
	class F_40mm_White: FlareBase
	{
		brightness  = 75;
		intensity = 1000000;
		coefgravity = 0.13;
		timeToLive = 140;
	};
	*/
	class RocketBase;
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
	
	class IRStrobeBase;
	class B_IRstrobe: IRStrobeBase {
		timeToLive=150000;
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
	
	class B_338_Ball;
	class ACE_338_Ball_API526: B_338_Ball {
		caliber = 6;
		penetrationDirDistribution = 0.05;
		explosionEffects = "twc_APIbullet_effect";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.1;
		indirectHit = 2;
		indirectHitRange = 0.1;
		
		class HitEffects {
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "twc_APIbullet_effect";
			hitWood = "twc_APIbullet_effect";
			hitMetal = "twc_APIbullet_effect";
			hitMetalPlate = "twc_APIbullet_effect";
			hitBuilding = "twc_APIbullet_effect";
			hitPlastic = "twc_APIbullet_effect";
			hitRubber = "twc_APIbullet_effect";
			hitConcrete = "twc_APIbullet_effect";
			hitMan = "twc_APIbullet_effect_man";
			hitGroundSoft = "twc_APIbullet_effect";
			hitGroundHard = "twc_APIbullet_effect";
			hitWater = "ImpactEffectsWater";
		};
	};
	class ace_338_ball: B_338_Ball {
		hit = 25;
		
		class HitEffects {
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "twc_127_hiteffect_grey";
			hitWood = "twc_127_hiteffect_grey";
			hitMetal = "twc_127_hiteffect_grey";
			hitMetalPlate = "twc_127_hiteffect_grey";
			hitBuilding = "twc_127_hiteffect_grey";
			hitPlastic = "twc_127_hiteffect_grey";
			hitRubber = "twc_127_hiteffect_grey";
			hitConcrete = "twc_127_hiteffect_grey";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "twc_127_hiteffect_grey";
			hitGroundHard = "twc_127_hiteffect_grey";
			hitWater = "ImpactEffectsWater";
		};
	};
	
	class BulletBase;
	class CUP_B_23mm_AA: BulletBase
	{
		model = "z\ace\addons\tracers\ace_TracerGreen2.p3d";
		timeToLive = 30;
	};
	class B_127x99_Ball: BulletBase {
		class CamShakePlayerFire {
			distance = 1;
			duration = 1;
			frequency = 10;
			power = 30;
		};
		ACE_muzzleVelocityVariationSD = 3;
		class HitEffects {
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "twc_127_hiteffect_grey";
			hitWood = "twc_127_hiteffect_grey";
			hitMetal = "twc_127_hiteffect_grey";
			hitMetalPlate = "twc_127_hiteffect_grey";
			hitBuilding = "twc_127_hiteffect_grey";
			hitPlastic = "twc_127_hiteffect_grey";
			hitRubber = "twc_127_hiteffect_grey";
			hitConcrete = "twc_127_hiteffect_grey";
			//hitMan = "twc_APIbullet_effect_man";
			hitGroundSoft = "twc_127_hiteffect_grey";
			hitGroundHard = "twc_127_hiteffect_grey";
			hitWater = "ImpactEffectsWater";
		};
	};
	
	class B_556x45_Ball;
	class rhs_ammo_556x45_M855A1_Ball: B_556x45_Ball {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
	};
	
	class rhs_ammo_556x45_M855A1_Ball_Red: rhs_ammo_556x45_M855A1_Ball {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
	};
	
	class B_556x45_Ball_Tracer_Red: B_556x45_Ball {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
	};
	
	class UK3CB_BAF_556_Ball_Tracer_Red: B_556x45_Ball_Tracer_Red {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
	};
	
	class UK3CB_BAF_556_Ball: B_556x45_Ball {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
	};
	
	class B_762x51_Ball;
	class UK3CB_BAF_762_Ball_L42A1_Tracer_Red: B_762x51_Ball {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
	};
	
	class UK3CB_BAF_762_Ball_L42A1: B_762x51_Ball {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
	};
	
	class B_762x51_Tracer_Red: B_762x51_Ball {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
	};
	
	class UK3CB_BAF_762_Ball: B_762x51_Ball {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
	};

	class UK3CB_BAF_762_Ball_Tracer_Red: B_762x51_Tracer_Red {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
	};

	/** MAKE RPGS MORE VIBRANT :) **/
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