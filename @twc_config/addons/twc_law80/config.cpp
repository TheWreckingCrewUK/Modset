class CfgPatches
{
	class twc_law80
	{
		units[] = {};
		weapons[] = {"twc_law80"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CBA_DisposableLaunchers {
	twc_LAW80[] = {"twc_law80_loaded","twc_law80_used"};
};

class Mode_SemiAuto{};
class Mode_Burst: Mode_SemiAuto{};
class Mode_FullAuto: Mode_SemiAuto{};
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class twc_law80: Launcher_Base_F
	{
		author = "[TWC] Bosenator & [TWC] Rik";
		scope = 1;
		scopeArsenal = 1;
		displayName = "LAW-80 Launcher";
		model = "\twc_law80\twc_law80.p3d";
		picture = "\twc_law80\data\law80.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		modelOptics = "\twc_law80\2Dscope_LAW80.p3d";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		cursorAim = "\a3\weapons_f\data\clear_empty";
		cursor = "missile";
		cursorSize = 1;
		reloadAction = "ReloadRPG";
		handAnim[] = {"OFP2_ManSkeleton","\twc_law80\law80_anim.rtm"};
		magazineReloadTime = 0.1;
		distanceZoomMin = 100;
		distanceZoomMax = 500;
		opticsZoomInit = 0.35;
		opticsZoomMax = 0.35;
		opticsZoomMin = 0.35;
		discreteDistance[] = {};
		discreteDistanceCameraPoint[] = {};
		memoryPointCamera = "eye";
		cameraDir = "look";
		discreteDistanceInitIndex = 0;
		magazines[] = {"twc_law80_magazine"};
		jsrs_soundeffect = "JSRS2_Distance_Effects_Launcher";

		baseWeapon = "twc_law80_loaded";
		ace_overpressure_angle = 45;
		ace_overpressure_range = 20;
		ace_overpressure_damage = 0.8;
		
		class EventHandlers {
			fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
		};
		
		class GunParticles {
			class effect1 {
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};

		muzzles[] = {"this", "LAW80_spottingRifle"};
		class LAW80_spottingRifle: Launcher_Base_F
		{
			modelOptics = "\twc_law80\2Dscope_LAW80.p3d";

			magazines[] = {"twc_law80_magazine_spotting"};
			displayName = "Spotting Rifle";
			displayNameShort = "Spotting Rifle";
			descriptionShort = "9mm Spotting Rifle";

			useActionTitle = "Spotting Rifle";
			dispersion = 0;
			recoil = "recoil_single_law";
			reloadAction = "CUP_smaw_spottingReload";
			reloadTime = 0.3;
			muzzlePos="usti spotting"; //might not work
			muzzleEnd="konec spotting"; //might not work
			
			discreteDistance[] = {}; //{100, 200, 300, 400, 500};
			discreteDistanceCameraPoint[] = {}; //{"eye_1", "eye_2", "eye_3", "eye_4", "eye_5"};
			discreteDistanceInitIndex = 0;
			cameraDir = "look";
			distanceZoomMin = 100;
			distanceZoomMax = 500;
			opticsZoomInit = 0.35;
			opticsZoomMax = 0.35;
			opticsZoomMin = 0.35;

			sounds[] = {"StandardSound"};

			jsrs_soundeffect = ""; //Unknown Value ATM

			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"CUP\Weapons\CUP_Weapons_SMAW\data\sfx\SMAW_spotting_s1",2,1,1300};
				soundBegin[] = {"begin1",1};
			};

			// do ACE entries in a config really hurt?
			ace_overpressure_angle = 0;
			ace_overpressure_range = 0;
			ace_overpressure_damage = 0;
		};

		sounds[] = {"StandardSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"CUP\Weapons\CUP_Weapons_M136\data\sfx\RPG_s1",2,1,1400};
			begin2[] = {"CUP\Weapons\CUP_Weapons_M136\data\sfx\RPG_s2",2,1,1400};
			begin3[] = {"CUP\Weapons\CUP_Weapons_M136\data\sfx\RPG_s3",2,1,1400};
			begin4[] = {"CUP\Weapons\CUP_Weapons_M136\data\sfx\RPG_s4",2,1,1400};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		};
		drySound[] = {"CUP\Weapons\CUP_Weapons_M136\data\sfx\Dry",1,1,35};
		reloadMagazineSound[] = {"",1,1};
		soundFly[] = {"CUP\Weapons\CUP_Weapons_M136\data\sfx\Fly",0.31622776,1.5,900};
		recoil = "recoil_single_law";
		value = 20;
		canLock = 0;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 500;
		minRange = 10;
		midRange = 200;
		maxRange = 300;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 119;
		};
		inertia = 0.9;
		class ItemInfo
		{
			priority = 3;
		};
	};
	class twc_law80_loaded: twc_law80 {
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "twc_law80_loaded";

		magazines[] = {"CBA_FakeLauncherMagazine"};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 220;
		};
	};
	class twc_law80_used: twc_law80
	{
		scope = 1;
		scopeArsenal = 1;
		displayName = "Used Tube";
		descriptionShort = "Used LAW80";
		baseWeapon = "twc_law80_used";
		magazines[] = {"CBA_FakeLauncherMagazine"};
		weaponPoolAvailable = 0;
	};
};
class CfgAmmo
{
	class CUP_R_M136_AT;
	class CUP_R_SMAW_Spotting;
	class ammo_Penetrator_MRAAWS;
	class twc_law80Rocket: CUP_R_M136_AT
	{
		hit = 150;
		model = "twc_law80\twc_law80_round.p3d";
		warheadName = "TandemHEAT";
		submunitionAmmo = "twc_law80_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		sideAirFriction = 0;
		typicalSpeed = 234;
		initSpeed = 234;
	};
	class twc_law80_Penetrator: ammo_Penetrator_MRAAWS
	{
		hit = 750;
	};
	class twc_law80_SpottingRound: CUP_R_SMAW_Spotting
	{
		ACE_caliber = 9.042;
		thrust = 0;
		thrusttime = 0;
		airfriction = 0;
		sideAirFriction = 0;
		typicalSpeed = 234;
	};
};
class CfgMagazines
{
	class CUP_M136_M;
	class CUP_SMAW_Spotting;
	class twc_law80_magazine: CUP_M136_M
	{
		scope = 2;
		displayName = "LAW-80 Rocket";
		type = "5 * 256";
		ammo = "twc_law80Rocket";
		initspeed = 234;
		modelSpecialIsProxy = 1;
		modelSpecial = "twc_law80\twc_law80_round.p3d";
		model = "twc_law80\twc_law80_round.p3d";
		mass = 101;
	};
	class twc_law80_magazine_spotting: CUP_SMAW_Spotting
	{
		displayName = "6rnd Spotting Magazine";
		description = "";
		descriptionShort = "";
		ammo = "twc_law80_SpottingRound";
		initspeed = 234;
		count = 5;
		ace_overpressure_angle = 0;
		ace_overpressure_range = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 99;
	};
};