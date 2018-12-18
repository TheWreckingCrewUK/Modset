class CfgPatches
{
	class ukf_ukweps
	{
		weapons[] = {"ukf_law80launcher"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Characters_F"};
	};
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
	class ukf_law80launcher: Launcher_Base_F
	{
		author = "Anschluss";
		scope = 2;
		displayName = "LAW-80 Launcher";
		model = "\law80\law80.p3d";
		picture = "\law80\data\law80.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		modelOptics = "\law80\TWC_2Dscope_LAW80.p3d";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		cursorAim = "\a3\weapons_f\data\clear_empty";
		cursor = "missile";
		cursorSize = 1;
		reloadAction = "ReloadRPG";
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_M136\Data\Anim\m136.rtm"};
		weaponInfoType = "RscWeaponZeroing";
		distanceZoomMin = 50;
		distanceZoomMax = 400;
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
		magazines[] = {"ukf_law80"};
		jsrs_soundeffect = "JSRS2_Distance_Effects_Launcher";

		ACE_UsedTube = "LAW80_used";
		ace_overpressure_angle = 45;
		ace_overpressure_range = 20;
		ace_overpressure_damage = 0.8;
		
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
			modelOptics = "\law80\TWC_2Dscope_LAW80.p3d";

			magazines[] = {"UKF_LAW80_Spotting"};
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

			sounds[] = {"StandardSound"};

			jsrs_soundeffect = ""; //Unknown Value ATM

			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"CUP\Weapons\CUP_Weapons_SMAW\data\sfx\SMAW_s1",8,1,1300};
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
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M136\data\sfx\Reload",1,1,35};
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
			mass = 145;
		};
		inertia = 0.9;
		class ItemInfo
		{
			priority = 3;
		};
	};
	class LAW80_used: ukf_law80launcher
	{
		scope = 1;
		ACE_isUsedLauncher = 1;
		author = "Anschluss";
		displayName = "Used Tube";
		descriptionShort = "$STR_AGM_Disposable_UsedTubeDescription";
		magazines[] = {"ACE_FiredMissileDummy"};
		weaponPoolAvailable = 0;
	};
};
class CfgAmmo
{
	class CUP_R_M136_AT;
	class CUP_R_SMAW_Spotting;
	class ammo_Penetrator_MRAAWS;
	class UKF_LAW80Rocket: CUP_R_M136_AT
	{
		hit = 150;
		warheadName = "TandemHEAT";
		submunitionAmmo = "UKF_LAW80_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		sideAirFriction = 0;
		typicalSpeed = 234;
	};
	class UKF_LAW80_Penetrator: ammo_Penetrator_MRAAWS
	{
		hit = 750;
	};
	class UKF_LAW80_SpottingRound: CUP_R_SMAW_Spotting
	{
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
	class ukf_law80: CUP_M136_M
	{
		scope = 2;
		displayName = "LAW-80 Rocket";
		type = "5 * 256";
		ammo = "UKF_LAW80Rocket";
		picture = "\law80\data\m_LAW80.paa";
		initspeed = 234;
	};
	class UKF_LAW80_Spotting: CUP_SMAW_Spotting
	{
		displayName = "6rnd Spotting Magazine";
		description = "";
		descriptionShort = "";
		ammo = "UKF_LAW80_SpottingRound";
		initspeed = 234;
		count = 6;
	};
};