class CfgPatches {
	class TWC_gearFixes {
		units[]={
			"twc_B_AAA_System_01_F",
			"twc_B_AAA_System_01_F_S"
		};
		weapons[]={"CUP_launch_RPG7V"};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"a3_weapons_f",
			"cup_airvehicles_av8b",
			"uk3cb_baf_weapons_smallarms",
			"UK3CB_BAF_Vehicles",
			"cup_wheeledvehicles_mastiff",
			"cup_trackedvehicles_mcv80",
			"uk3cb_baf_vehicles_landrover",
			"uk3cb_baf_vehicles_coyote_jackal",
			"UK3CB_BAF_Equipment_Backpacks",
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds"
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

class CfgMagazines {
	class 6Rnd_30mm_L21A1_APDS;
	class 3Rnd_30mm_L21A1_APDS: 6Rnd_30mm_L21A1_APDS
	{
		count = 3;
	};
	class 6Rnd_30mm_L21A1_HE;
	class 3Rnd_30mm_L21A1_HE: 6Rnd_30mm_L21A1_HE
	{
		count = 3;
	};
};

class CfgAmmo {
	class GrenadeHand;
	class GrenadeHand_stone: GrenadeHand
	{
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
	
	
	class RocketBase;
	class CUP_R_OG7_AT: RocketBase
	{
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",3,0.7,500};
	};
	class CUP_R_PG7V_AT: RocketBase
	{
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",3,0.7,500};
	};
	class CUP_R_PG7VL_AT: RocketBase
	{
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",3,0.7,500};
	};
	class CUP_R_PG7VM_AT: RocketBase
	{
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",3,0.7,500};
	};
	class CUP_R_PG7VR_AT: RocketBase
	{
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",3,0.7,500};
	};
	class CUP_R_RPG18_AT: RocketBase
	{
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",2,0.9,500};
	};
	class CUP_R_TBG7V_AT: RocketBase
	{
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",3,0.7,500};
	};
	
	class IRStrobeBase;
	class B_IRstrobe: IRStrobeBase
	{
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
	class ACE_338_Ball_API526: B_338_Ball
	{
		caliber = 6;
		penetrationDirDistribution = 0.05;
	};
	class BulletBase;
	class B_127x99_Ball: BulletBase
	{
		class CamShakePlayerFire {
			distance = 1;
			duration = 1;
			frequency = 10;
			power = 30;
		};
	};
};

class mode_fullauto;
class CfgWeapons {
	//TWC Night Vision
	class CUP_NVG_PVS7;
	class UK3CB_BAF_HMNVS;
	class twc_nightvision_gen2: CUP_NVG_PVS7
	{
		scope = 1;
		modelOptics = "";
		author = "[TWC] Rik";
		descriptionShort = "";
		displayName = "AN/PVS-5";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa"; // Edge mask for different tube configurations. Three types: mono, bino and quad.
		ace_nightvision_bluRadius = 0.13; // Edge blur radius.
		ace_nightvision_eyeCups = 1; // Does have eyecups.
		ace_nightvision_generation = 2; // Generation 2. Affects image quality.
	};
	class twc_nightvision_gen3: UK3CB_BAF_HMNVS
	{
		scope = 1;
		modelOptics = "";
		author = "[TWC] Rik";
		descriptionShort = "";
		displayName = "HMNVS";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_4096.paa"; // Edge mask for different tube configurations. Three types: mono, bino and quad.
		ace_nightvision_bluRadius = 0.15; // Edge blur radius.
		ace_nightvision_eyeCups = 0; // Does have eyecups.
		ace_nightvision_generation = 3; // Generation 3. Affects image quality.
	};
	
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class EventHandlers;
	};
	
	class CUP_launch_RPG7V: Launcher_Base_F
	{
		class EventHandlers: EventHandlers {
			fired = "_mult = 1; if (!isserver) then {_mult = 0.5};_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (((random 24) - 12) * _mult), (velocity _bullet select 1) + (((random 24) - 12) * _mult), 	(velocity _bullet select 2) + (((random 4) - 2) * _mult)];";
		};
		scope=2;
		aiDispersionCoefX=1.03;
		aiDispersionCoefY=1.05;
		dispersion = 0.02;
		minrange=50;
		minrangeprobab=0.4;
		midrange=600;
		midrangeprobab=0.3;
		maxrange=1000;
		maxrangeprobab=0.9;

		magazines[] = {"CUP_PG7V_M", "CUP_PG7VM_M", "CUP_PG7VL_M", "CUP_PG7VR_M", "CUP_OG7_M", "CUP_TBG7V_M", "twc_og7_c_m"};
		};
		
		
	class Rifle_Short_Base_F;
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		class FullAuto;
	};
	class SP_smg_sterling: SMG_02_base_F
	{
		class FullAuto: FullAuto
		{
			Burst = 1;
		};
	};
	
		
	class UK3CB_BAF_L115A3;
	class twc_l115a3_wd: UK3CB_BAF_L115A3
	{
		scope = 1;
		author = "jayman";
		magazines[] = {"ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_API526_Mag"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "asdg_OpticRail_UK3CB_BAF_L115";
				item = "RKSL_optic_PMII_525";
			};
			class LinkedItemsMuzzle
			{
				slot = "asdg_MuzzleSlot_UK3CB_BAF_L115";
				item= "UK3CB_BAF_Silencer_L115A3";
			};
		};
	};
	class UK3CB_BAF_L115A3_Ghillie;
	class twc_l115a3_gh: UK3CB_BAF_L115A3_Ghillie
	{
		scope = 1;
		author = "jayman";
		magazines[] = {"ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_API526_Mag"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "asdg_OpticRail_UK3CB_BAF_L115";
				item = "RKSL_optic_PMII_525";
			};
			class LinkedItemsMuzzle
			{
				slot = "asdg_muzzleslot_UK3CB_BAF_L115";
				item= "UK3CB_BAF_Silencer_L115A3";
			};
		};
	};
		
	
	class Rifle_Base_F;
	class UK3CB_BAF_L1A1: Rifle_Base_F {
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
	};
	
	class srifle_EBR_F;
	class UK3CB_BAF_L128A1: srifle_EBR_F {
		recoil = "twc_shotgun_1";
		recoilProne = "twc_rifle_762_prone";
	};
	
	class arifle_Mk20_plain_F;
	class UK3CB_BAF_L85A2: arifle_Mk20_plain_F {
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		reloadAction = "CUP_GestureReloadSA80";
		reloadMagazineSound[] = {"\CUP\Weapons\CUP_Weapons_L85\data\sounds\l85_Reload",1,1,10};
	};
	
	
	class UK3CB_BAF_L86A2: UK3CB_BAF_L85A2 {
		recoil = "twc_rifle_556_long";
		recoilProne = "twc_rifle_556_long_prone";
	};
	
	class Rifle_Long_Base_F:Rifle_Base_F
	{
		class eventhandlers;
	};
	//for barrel swapping, put a ACE_SpareBarrel in the player's inventory
	class UK3CB_BAF_L7A2: Rifle_Long_Base_F {
		displayname = "L7A2 GPMG";
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_dispersion = 1.1;
		ace_overheating_slowdownFactor = 1.5;
		recoil = "twc_mg_762";
		recoilProne = "twc_mg_prone";
		twc_openbolt = 1;
		class WeaponSlotsInfo {
			class asdg_OpticRail_UK3CB_BAF_L7A2 { };
		};
		class fullauto: mode_fullauto
		{
			reloadTime = 0.08;
		};
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.3) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 24) - 12, (velocity _bullet select 1) + (random 24) - 12, 	(velocity _bullet select 2) + (random 4) - 2];};twc_gpmglastfired = time;";
		};
	};
	
	class CUP_lmg_PKM: Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 3500;
		ace_overheating_dispersion = 1.0;
		ace_overheating_slowdownFactor = 1.5;
		
	};
	
	class rhs_pkp_base: Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 3500;
		ace_overheating_dispersion = 1.0;
		ace_overheating_slowdownFactor = 1.5;
	};
	
	class rhs_weap_saw_base: Rifle_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 2900;
		ace_overheating_dispersion = 1.1;
		ace_overheating_slowdownFactor = 1.2;
	};
	//rhs m240, because it's called m249 in config which would be confusing
	class LMG_Mk200_F: Rifle_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_dispersion = 1.1;
		ace_overheating_slowdownFactor = 1.5;
	};
	
	class MGunCore;
	class MGun: MGunCore
	{
		class eventhandlers;
		class mode_fullauto;
		class manual;
	};
	class LMG_RCWS: MGun {
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.3) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 16) - 8, (velocity _bullet select 1) + (random 16) - 8, 	(velocity _bullet select 2) + (random 8) - 4];};twc_gpmglastfired = time;";
		};
	};
	class GMG_F: MGun {
		reloadtime = 0.22;
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.6) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 10) - 5, (velocity _bullet select 1) + (random 10) - 5,  (velocity _bullet select 2) + (random 20) - 10];} else {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 8) - 4, (velocity _bullet select 1) + (random 8) - 4,  (velocity _bullet select 2) + (random 6) - 3];};twc_gpmglastfired = time;[_this select 6] call twc_fnc_aps;";
		};
	};
	class Default;
	class CannonCore: Default
	{
		class eventhandlers;
	};
	class autocannon_Base_F: CannonCore
	{
		class eventhandlers;
		class HE;
	};
	class autocannon_30mm_CTWS: autocannon_Base_F {
	};
	class L21A1_RARDEN: autocannon_Base_F {
		magazines[] = {"3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_HE"};
		magazineReloadTime = 1;
		ReloadTime = 0.3;
		autoReload = 0;
	};
	
	class autocannon_40mm_CTWS: autocannon_Base_F
	{
		class HE;
		class EventHandlers;
	};
	
	class CUP_Rarden_CTWS_veh: autocannon_40mm_CTWS
	{
		magazines[] = {"3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_HE"};
		magazineReloadTime = 1;
		muzzles[] = {"HE"};
		ReloadTime = 0.3;
		autoReload = 0;
		class HE: HE
		{
			magazines[] = {"3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_HE"};
			magazineReloadTime = 1;
			ReloadTime = 0.3;
			autoReload = 0;
		};
	};
	/*
	class weapon_Cannon_Phalanx: CannonCore
	{
		class manual: CannonCore {
			soundContinuous = 1;
			soundBurst = 0;
			class StandardSound {
			begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_01_burst",5.62341,1,1500,[25704,32159]};
			soundBegin[] = {"begin1",1};
			};
		};
	};
	*/
	
	class gatling_30mm_base: CannonCore
	{
		class EventHandlers;
		class Mode_FullAuto;
		class manual;
	};
	
	class UK3CB_gatling_30mm_base: gatling_30mm_base
	{
		modes[] = {"Burst50","close","short","medium","far"};
		class Burst10;
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.6) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 14) - 7, (velocity _bullet select 1) + (random 14) - 7, 	(velocity _bullet select 2) + (random 10) - 5];};twc_gpmglastfired = time;";
		};
	};
	
	class UK3CB_BAF_CannonM230: UK3CB_gatling_30mm_base
	{
		class Burst20:Burst10
		{
			dispersion=0.012;
		};
	};
	
	class CUP_Vacannon_M230_veh: CannonCore
	{
		class manual: CannonCore
		{
			dispersion=0.012;
		};
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.6) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 14) - 7, (velocity _bullet select 1) + (random 14) - 7, 	(velocity _bullet select 2) + (random 10) - 5];};twc_gpmglastfired = time;";
		};
	};
	
	class twc_L7A2: UK3CB_BAF_L7A2 {};

	class UK3CB_BAF_L110_Base:Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 2900;
		ace_overheating_dispersion = 1.1;
		ace_overheating_slowdownFactor = 1.2;
		class eventhandlers;
		twc_openbolt = 1;
	};
	class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base
	{
		recoil = "twc_mg_556";
		recoilProne = "twc_mg_556_prone";
		class FullAuto;
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_minimilastfired') then {twc_minimilastfired = 0}; if (time > twc_minimilastfired + 0.3) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 24) - 12, (velocity _bullet select 1) + (random 24) - 12, 	(velocity _bullet select 2) + (random 4) - 2];};twc_minimilastfired = time;";
		};
	};

	class missiles_titan;
	class UK3CB_BAF_Milan_Launcher: missiles_titan {
		ace_overpressure_angle = 90;
		ace_overpressure_range = 40;
		ace_overpressure_damage = 0.7;
	};

	class cannon_125mm;
	class CUP_Vacannon_D10: cannon_125mm
	{
		muzzles[] = {"TWC_Muzzle_AP","TWC_Muzzle_HE"};
		class TWC_Muzzle_AP: cannon_125mm
		{
			displayName = "D-10T 100mm AP";
			descriptionShort = "AP";
			magazines[] = {CUP_20Rnd_100mmHEAT_D10};
			
			nameSound="cannon";
			cursor = "EmptyCursor";
			cursorAim = "cannon";
			cursorSize = 1;
			class StandardSound
			{
				soundSetShot[] = {"CUP_autocannon_Shot_SoundSet","CUP_autocannon_Tail_SoundSet"};
			};
			minRange=10;minRangeProbab=0.7;
			midRange=1800;midRangeProbab=0.7;
			maxRange=3000;maxRangeProbab=0.1;
			reloadTime = 8;
			magazineReloadTime = 8;
			autoReload = 1;
			canLock = 0;
			ballisticsComputer = 2;
		};
		class TWC_Muzzle_HE: cannon_125mm
		{
			displayName = "D-10T 100mm HE";
			descriptionShort = "HE";
			magazines[] = {CUP_15Rnd_100mmHEFRAG_D10};

			nameSound="cannon";
			cursor = "EmptyCursor";
			cursorAim = "cannon";
			cursorSize = 1;
			class StandardSound
			{
				soundSetShot[] = {"CUP_autocannon_Shot_SoundSet","CUP_autocannon_Tail_SoundSet"};
			};
			minRange=10;minRangeProbab=0.7;
			midRange=1800;midRangeProbab=0.7;
			maxRange=3000;maxRangeProbab=0.1;
			reloadTime = 8;
			magazineReloadTime = 8;
			autoReload = 1;
			canLock = 0;
			ballisticsComputer = 2;
		};
	};
	class CUP_Vacannon_D5_T34: cannon_125mm
	{
		muzzles[] = {"TWC_Muzzle_AP","TWC_Muzzle_HE"};
		class TWC_Muzzle_AP: cannon_125mm
		{
			displayName = "D-5T 85mm AP";
			nameSound="cannon";
			cursor = "EmptyCursor";
			cursorAim = "cannon";
			cursorSize = 1;
			class StandardSound
			{
				soundSetShot[] = {"CUP_autocannon_Shot_SoundSet","CUP_autocannon_Tail_SoundSet"};
			};
			magazines[] = {CUP_40Rnd_85mmHEAT_D5};
			minRange=10;minRangeProbab=0.7;
			midRange=1800;midRangeProbab=0.7;
			maxRange=3000;maxRangeProbab=0.1;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			canLock = 0;
			ballisticsComputer = 2;
		};
		class TWC_Muzzle_HE: cannon_125mm
		{
			displayName = "D-5T 85mm AP";
			nameSound="cannon";
			cursor = "EmptyCursor";
			cursorAim = "cannon";
			cursorSize = 1;
			class StandardSound
			{
				soundSetShot[] = {"CUP_autocannon_Shot_SoundSet","CUP_autocannon_Tail_SoundSet"};
			};
			magazines[] = {CUP_20Rnd_85mmHEFRAG_D5};
			minRange=10;minRangeProbab=0.7;
			midRange=1800;midRangeProbab=0.7;
			maxRange=3000;maxRangeProbab=0.1;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			canLock = 0;
			ballisticsComputer = 2;
		};
	};
	class CUP_Vcannon_2A46_Txx: cannon_125mm
	{
		muzzles[] = {"TWC_Muzzle_APFSDS","TWC_Muzzle_HE","TWC_Muzzle_AT"};
		class TWC_Muzzle_APFSDS: cannon_125mm
		{
			displayName = "2A46 Cannon 125mm APFSDS";
			magazines[] = {"CUP_22Rnd_2A46_APFSDS_T_M"};
			canLock=0;
			reloadTime = 8;
			magazineReloadTime = 8;
			autoReload = 0;
			ballisticsComputer = 16;
			weaponLockSystem = 0;
			showaimcursorinternal = 0;
			cursor = "EmptyCursor";
			cursoraim = "EmptyCursor";
			cursoraimon = "EmptyCursor";
			reloadsound[] = {"CUP\Weapons\CUP_Weapons_VehicleWeapons\2A46\data\sound\Reload_Cannon", 13.16228, 1, 10};
		};
		class TWC_Muzzle_HE: cannon_125mm
		{
			displayName = "2A46 Cannon 125mm HE";
			magazines[] = {"CUP_12Rnd_2A46_HE_T_M","CUP_17Rnd_2A46_HE_T_M"};
			canLock=0;
			reloadTime = 8;
			magazineReloadTime = 8;
			autoReload = 0;
			ballisticsComputer = 16;
			weaponLockSystem = 0;
			showaimcursorinternal = 0;
			cursor = "EmptyCursor";
			cursoraim = "EmptyCursor";
			cursoraimon = "EmptyCursor";
			reloadsound[] = {"CUP\Weapons\CUP_Weapons_VehicleWeapons\2A46\data\sound\Reload_Cannon", 13.16228, 1, 10};
		};
		class TWC_Muzzle_AT: cannon_125mm
		{
			displayName = "2A46 Cannon 125mm AT";
			magazines[] = {"CUP_5Rnd_AT11_M"};
			canLock=0;
			reloadTime = 8;
			magazineReloadTime = 8;
			autoReload = 0;
			ballisticsComputer = 16;
			weaponLockSystem = 0;
			showaimcursorinternal = 0;
			cursor = "EmptyCursor";
			cursoraim = "EmptyCursor";
			cursoraimon = "EmptyCursor";
			reloadsound[] = {"CUP\Weapons\CUP_Weapons_VehicleWeapons\2A46\data\sound\Reload_Cannon", 13.16228, 1, 10};
		};
	};
};

class cfgRecoils
{
	class twc_rifle_556
	{
		muzzleOuter[]	= { 0.1,  0.2,  0.02,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.02, 0.04 }; //min/max force
		permanent	= 0.3; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.1; //muzzle jump
	};
	class twc_rifle_556_prone
	{
		muzzleOuter[]	= { 0.05,  0.2,  0.02,  0.1 };
		kickBack[]	= { 0.02, 0.04 };
		permanent	= 0.3;
		temporary	= 0.1;
	};
	
	class twc_rifle_556_long
	{
		muzzleOuter[]	= { 0.07,  0.15,  0.02,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.02, 0.04 }; //min/max force
		permanent	= 0.25; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.1; //muzzle jump
	};
	class twc_rifle_556_long_prone
	{
		muzzleOuter[]	= { 0.05,  0.1,  0.02,  0.1 };
		kickBack[]	= { 0.04, 0.06 };
		permanent	= 0.25;
		temporary	= 0.1;
	};
	
	class twc_mg_556
	{
		muzzleOuter[]	= { 0.07,  0.15,  0.02,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.03, 0.05 }; //min/max force
		permanent	= 0.1; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.07; //muzzle jump
	};
	class twc_mg_556_prone
	{
		muzzleOuter[]	= { 0.05,  0.1,  0.02,  0.02 };
		kickBack[]	= { 0.04, 0.06 };
		permanent	= 0.1;
		temporary	= 0.3;
	};
	
	class twc_rifle_762
	{
		muzzleOuter[]	= { 0.1,  0.5,  0.02,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.05, 0.06 }; //min/max force
		permanent	= 0.4; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.05; //muzzle jump
	};
	class twc_rifle_762_prone
	{
		muzzleOuter[]	= { 0.05,  0.2,  0.02,  0.1 };
		kickBack[]	= { 0.05, 0.07 };
		permanent	= 0.4;
		temporary	= 0.05;
	};
	
 class twc_mg_762
	{
		muzzleOuter[]	= { 0.1,  0.15,  0.03,  0.1 };
		kickBack[]	= { 0.04, 0.06 };
		permanent	= 0.4;
		temporary	= 0.1;
	};
	
 class twc_mg_prone
	{
		muzzleOuter[]	= { 0.1,  0.1,  0.5,  0.45 };
		kickBack[]	= { 0.02, 0.04 };
		permanent	= 0.1;
		temporary	= 0.5;
	};
	
	class twc_shotgun_1
	{
		muzzleOuter[]	= { 0.1,  0.5,  0.1,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.06, 0.09 }; //min/max force
		permanent	= 1.5; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.2; //muzzle jump
	};
};

class CfgVehicles {
	
	class B_AAA_System_01_F;
	class twc_B_AAA_System_01_F: B_AAA_System_01_F
	{
		shadow = 0;
		hiddenSelectionsTextures[] = {"",""};
		displayname = "TWC Base Target";
	};
	class twc_B_AAA_System_01_F_S: B_AAA_System_01_F
	{
		shadow = 0;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {""};
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		displayname = "TWC Base Target (Small)";
	};
	
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A;
	class TWC_BAF_B_Bergen_OLI_Rifleman_XL_A: UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A
	{
		displayname = "Bergen XL (Olive)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_us.rvmat"};
	};
	
	class Tank;
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	
	class CUP_MCV80_Base : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {"3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M"};
			};
		};
	};
	
	class ukcw_cvrt_Scim_base : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {"3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_APDS","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","3Rnd_30mm_L21A1_HE","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M"};
			};
		};
	};
	class Helicopter_Base_H;
	class CUP_CH47F_base: Helicopter_Base_H
	{
		backRotorForceCoef = 0.9;
		cyclicForwardForceCoef = 1.5;
		cyclicAsideForceCoef = 1.3;
		bodyFrictionCoef = 1.4;
		armorStructural = 20;
	};

//handling modifications
	class Car;
	class Car_F: Car{
		class turrets;
		class Wheels {
			class LF {};
		};
	};
	
	class UK3CB_BAF_Jackal_Base_D : Car_F {
		class turrets: turrets
		{
			class mainturret;
		};
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 100;
		turnCoef = 1.8;
		frontBias = 0.8;
		rearBias = 0.8;
		centreBias = 0.8;
		maxSpeed = 150;
		enginePower = 185;
		armor = 310;
		class Wheels:Wheels {
			class LF:LF {
				springDamperRate = 22000;
				springStrength = 80000;
				maxCompression = 0.3;
				maxBrakeTorque = 7000;
				maxHandBrakeTorque = 11000;
				frictionVsSlipGraph[] = {{ 0.0, 0.75 }, { 0.3, 0.7 }, { 1.0, 0.65 }};
			};
		};
		
	};
	class UK3CB_BAF_Coyote_L111A1_Base_D: UK3CB_BAF_Jackal_Base_D
	{
		class Turrets: Turrets
		{
			class L111A1_MainTurret: MainTurret {
				class viewoptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initElev = 0;
					initFov = 0.1;
					maxAngleX = 30;
					maxAngleY = 100;
					maxElev = 40;
					maxFov = 0.1;
					minAngleX = -30;
					minAngleY = -100;
					minElev = -25;
					minFov = 0.1;
					visionMode[] = {"Normal"};
				};
			};
		};
	};
	class UK3CB_BAF_Jackal2_L111A1_Base_D: UK3CB_BAF_Coyote_L111A1_Base_D {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 1.8;
	};
	
	
	class UK3CB_BAF_Coyote_Passenger_L111A1_D: UK3CB_BAF_Coyote_L111A1_Base_D {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 1.8;
	};
	class UK3CB_BAF_Coyote_L134A1_Base_D;
	class UK3CB_BAF_Jackal2_L134A1_Base_D: UK3CB_BAF_Coyote_L134A1_Base_D {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 1.8;
	};
		
	class UK3CB_BAF_Coyote_Passenger_L134A1_D: UK3CB_BAF_Coyote_L134A1_Base_D {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 1.8;
	};
	
			
	
	class UK3CB_BAF_LandRover_Base: Car_F {
		

		antiRollbarForceCoef = 4.0;
		antiRollbarForceLimit = 3;
		differentialType = "all_limited";
		frontRearSplit = 0.9;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.5;
		class Turrets;
		class Wheels:Wheels {
			class LF:LF {
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				frictionVsSlipGraph[] = {{ 0.0, 0.8 }, { 0.3, 0.6 }, { 1.0, 0.5 }};
				latStiffX = 15;
				latStiffY = 20;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 3250;
				maxCompression = 0.25;
				maxDroop = 0.1;
				maxHandBrakeTorque = 0;
				moi = 6;
				side = "left";
				springDamperRate = 4500;
				springStrength = 36000;
				sprungMass = 525;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = 0.285;
				};
				class LR: LF {
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				frictionVsSlipGraph[] = {{ 0.0, 1.2 }, { 0.5, 1 }, { 1.0, 0.6 }};
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 2950;
				maxDroop = 0.1;
				maxHandBrakeTorque = 9000;
				moi = 6;
				side = "left";
				sprungMass = 525;
				steering = 0;
				suspForceAppPointOffset = "wheel_1_2_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_2_axis";
				width = 0.285;
				};
				class RF: LF {
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 3250;
				maxDroop = 0.1;
				maxHandBrakeTorque = 0;
				moi = 6;
				side = "right";
				steering = 1;
				suspForceAppPointOffset = "wheel_2_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_2_1_axis";
				width = 0.285;
				};
				class RR: LR {
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 2950;
				maxDroop = 0.1;
				maxHandBrakeTorque = 9000;
				moi = 6;
				side = "right";
				steering = 0;
				suspForceAppPointOffset = "wheel_2_2_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_2_2_axis";
				width = 0.285;
				};
			};
		
	};
	class Wheeled_APC_F : Car_F
	{
		class eventhandlers;
		class Wheels {
			class LF {};
		};
	};
	class CUP_Mastiff_Base : Wheeled_APC_F
	{
		antiRollbarForceCoef = 60;
		antiRollbarForceLimit = 40;
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 100;
		terrainCoef = 5.0;
		turncoef = 2.0;
		armor = 700;
		clutchStrength = 150;
		differentialType = "all_open";


		class Wheels:wheels {
			class LF:LF {
				boneName = "wheel_1_1";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 80;
				MOI = 85;
				dampingRate = 0.1;
				dampingRateInAir = 2;
				dampingRateDamaged = 2;
				dampingRateDestroyed = 800;
				maxBrakeTorque = 4500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.4;
				//MaxDroop = 0.2;
				sprungMass = 4250;
				springStrength = 75000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
			};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.4; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 2.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 2.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
             
           turnDecreaseConst  = 2.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.2; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	   
		class EventHandlers: EventHandlers {
			init = "_car = (_this select 0); _car setCenterOfMass [-0.00687825,-0.814309,1.7]";
			
		};
	};
	
	class CUP_Wolfhound_Base : Wheeled_APC_F
	{
		antiRollbarForceCoef = 60;
		antiRollbarForceLimit = 40;
		antiRollbarSpeedMin = 30;
		antiRollbarSpeedMax = 100;
		terrainCoef = 5.0;
		turncoef = 2.0;
		armor = 700;
		clutchStrength = 150;
		differentialType = "all_open";


		class Wheels:wheels {
			class LF:LF {
				boneName = "wheel_1_1";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 80;
				MOI = 85;
				dampingRate = 0.1;
				dampingRateInAir = 2;
				dampingRateDamaged = 2;
				dampingRateDestroyed = 800;
				maxBrakeTorque = 4500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.4;
				//MaxDroop = 0.2;
				sprungMass = 4250;
				springStrength = 25000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
			};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.4; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 2.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 2.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
             
           turnDecreaseConst  = 2.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.2; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	   
		class EventHandlers: EventHandlers {
			init = "_car = (_this select 0); _car setCenterOfMass [-0.00687825,-0.814309,1.5]";
			
		};
	};
	
	
	class UK3CB_BAF_LandRover_WMIK_Base:UK3CB_BAF_LandRover_Base
	{
		class Turrets: Turrets
		{
			class mainturret;
		};
	};
	
	class UK3CB_BAF_LandRover_WMIK_HMG_Base: UK3CB_BAF_LandRover_WMIK_Base
	{
		class Turrets: Turrets
		{
			class HMG_Turret: MainTurret {
				class viewoptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initElev = 0;
					initFov = 0.1;
					maxAngleX = 30;
					maxAngleY = 100;
					maxElev = 40;
					maxFov = 0.1;
					minAngleX = -30;
					minAngleY = -100;
					minElev = -25;
					minFov = 0.1;
					visionMode[] = {"Normal"};
				};
			};
		};
	};
	
	#include "acre_apcs.hpp"
	#include "acre_boats.hpp"
	#include "acre_cars.hpp"
	#include "acre_helicopters.hpp"
	#include "acre_planes.hpp"
	#include "acre_tanks.hpp"
};

