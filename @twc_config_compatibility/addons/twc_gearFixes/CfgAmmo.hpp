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
	/* don't do this, the object detaches from players after a set time because of something unknown and it causes the strobe to float in the air and sometimes hurt people. chemlights stay on people without issue
	class IRStrobeBase;
	class B_IRstrobe: IRStrobeBase {
		timeToLive=150000;
	};
	*/
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
			hitGroundSoft = "twc_127_hiteffect_grey";
			hitGroundHard = "twc_127_hiteffect_grey";
			hitWater = "ImpactEffectsWater";
		};
	};
	
	class BulletBase;
	
	class USAF_PGU_25_HEI: BulletBase
	{
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
	};
	class USAF_40mm_HE: BulletBase
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet","Explosion_Debris_SoundSet"};
	};
	class USAF_40mm_SABOT: USAF_40mm_HE
	{
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet","Explosion_Debris_SoundSet"};
	};
	class USAF_105_HEPD: BulletBase
	{
		SoundSetExplosion[] = {"Shell155mm_Exp_SoundSet","Shell155mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
	};
	class USAF_105_SABOT: USAF_105_HEPD
	{
		SoundSetExplosion[] = {"Shell155mm_Exp_SoundSet","Shell155mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
	};
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
			hitGroundSoft = "twc_127_hiteffect_grey";
			hitGroundHard = "twc_127_hiteffect_grey";
			hitWater = "ImpactEffectsWater";
		};
	};
	class B_762x51_Ball: BulletBase {
		class CamShakePlayerFire {
			distance = 1;
			duration = 1;
			frequency = 10;
			power = 5;
		};
		ACE_muzzleVelocityVariationSD = 1;
		class HitEffects {
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "twc_762_hiteffect_grey";
			hitWood = "twc_762_hiteffect_grey";
			hitMetal = "twc_762_hiteffect_grey";
			hitMetalPlate = "twc_762_hiteffect_grey";
			hitBuilding = "twc_762_hiteffect_grey";
			hitPlastic = "twc_762_hiteffect_grey";
			hitRubber = "twc_762_hiteffect_grey";
			hitConcrete = "twc_762_hiteffect_grey";
			hitGroundSoft = "twc_762_hiteffect_grey";
			hitGroundHard = "twc_762_hiteffect_grey";
			hitWater = "ImpactEffectsWater";
		};
	};
	class rhs_ammo_762x51_M80_Ball: BulletBase {
		class CamShakePlayerFire {
			distance = 1;
			duration = 1;
			frequency = 10;
			power = 5;
		};
		ACE_muzzleVelocityVariationSD = 1;
		class HitEffects {
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "twc_762_hiteffect_grey";
			hitWood = "twc_762_hiteffect_grey";
			hitMetal = "twc_762_hiteffect_grey";
			hitMetalPlate = "twc_762_hiteffect_grey";
			hitBuilding = "twc_762_hiteffect_grey";
			hitPlastic = "twc_762_hiteffect_grey";
			hitRubber = "twc_762_hiteffect_grey";
			hitConcrete = "twc_762_hiteffect_grey";
			hitGroundSoft = "twc_762_hiteffect_grey";
			hitGroundHard = "twc_762_hiteffect_grey";
			hitWater = "ImpactEffectsWater";
		};
	};
	
	class B_556x45_Ball:BulletBase
	{
		ACE_barrelLengths[] = {152,254,354,391.16,419.1,449.58,480.06,508,635};
		ACE_muzzleVelocities[] = {595,758.6,855.8,878,892,906,915,922,981.7};
	};
	class rhs_ammo_556x45_M855A1_Ball: B_556x45_Ball {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
		ACE_barrelLengths[] = {152,254,354,391.16,419.1,449.58,480.06,508,635};
		ACE_muzzleVelocities[] = {595,758.6,855.8,878,892,906,915,922,981.7};
	};
	
	class rhs_ammo_556x45_M855A1_Ball_Red: rhs_ammo_556x45_M855A1_Ball {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
		ACE_barrelLengths[] = {152,254,354,391.16,419.1,449.58,480.06,508,635};
		ACE_muzzleVelocities[] = {595,758.6,855.8,878,892,906,915,922,981.7};
	};
	
	class B_556x45_Ball_Tracer_Red: B_556x45_Ball {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
		ACE_barrelLengths[] = {152,254,354,391.16,419.1,449.58,480.06,508,635};
		ACE_muzzleVelocities[] = {595,758.6,855.8,878,892,906,915,922,981.7};
	};
	
	class UK3CB_BAF_556_Ball_Tracer_Red: B_556x45_Ball_Tracer_Red {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
		ACE_barrelLengths[] = {152,254,354,391.16,419.1,449.58,480.06,508,635};
		ACE_muzzleVelocities[] = {595,758.6,855.8,878,892,906,915,922,981.7};
	};
	
	class UK3CB_BAF_556_Ball: B_556x45_Ball {
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
		ACE_barrelLengths[] = {152,254,354,391.16,419.1,449.58,480.06,508,635};
		ACE_muzzleVelocities[] = {595,758.6,855.8,878,892,906,915,922,981.7};
	};
	
	
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
	
};