#define _ARMA_

class CfgPatches
{
	class ukf_ukweps
	{
		weapons[] = {"ukf_law80launcher"};
		requiredVersion = 1;
		requiredAddons[] = {};
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
		modelOptics = "\CUP\Weapons\CUP_Weapons_Metis_AT_13\CUP_2Dscope_Metis.p3d";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		cursorAim = "\a3\weapons_f\data\clear_empty";
		cursor = "missile";
		cursorSize = 1;
		reloadAction = "ReloadRPG";
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_M136\Data\Anim\m136.rtm"};
		maxZeroing = 400;
		weaponInfoType = "RscWeaponZeroing";
		distanceZoomMin = 50;
		distanceZoomMax = 400;
		discreteDistance[] = {50,100,150,200,250,300,350,400};
		discreteDistanceInitIndex = 0;
		magazines[] = {"CUP_M136_M"};
		jsrs_soundeffect = "JSRS2_Distance_Effects_Launcher";
		AGM_Backblast_Angle = 45;
		AGM_Backblast_Range = 100;
		AGM_Backblast_Damage = 0.7;
		ACE_UsedTube = "LAW80_used";
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
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
	class UKF_LAW80Rocket: CUP_R_M136_AT{};
};
class CfgMagazines
{
	class CUP_M136_M;
	class ukf_law80: CUP_M136_M
	{
		scope = 2;
		displayName = "LAW-80 Rocket";
		type = "5 * 		256";
		ammo = "UKF_LAW80Rocket";
		picture = "\law80\data\m_LAW80.paa";
	};
};
class cfgMods
{
	author = "[TWC] Rik";
	timepacked = "1485305193";
};
//};
