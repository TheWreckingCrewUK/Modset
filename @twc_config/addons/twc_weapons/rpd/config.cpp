class CfgPatches
{
	class twc_rpd
	{
		units[] = {};
		weapons[] = {"twc_rpd"};
		requiredVersion = 1.00;
		requiredAddons[] = {"CAWeapons","CAWeapons_E"};
	};
};
class CfgMagazines
{
	class CUP_30Rnd_762x39_AK47_M;
	class twc_100Rnd_762x39_RPD: CUP_30Rnd_762x39_AK47_M
	{
		scope = 2;
		type = "2*256";
		ammo = "CUP_B_762x39_Ball";
		count = 100;
		initSpeed = 710;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		picture = "\twc_weapons\rpd\m_rpd_ca.paa";
		displayName = "100rnd RPD Magazine";
		magazineReloadTime = 8;
	};
};
class manual;
class close;
class Single;
class FullAuto;
class Mode_SemiAuto;
class Mode_FullAuto;
class cfgWeapons
{
	class CUP_arifle_RPK74;
	class TWC_RPD: CUP_arifle_RPK74
	{
		scope = 2;
		model = "twc_weapons\rpd\rpd.p3d";
		displayName = "RPD";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex = 2;
		aiDispersionCoefY = 14.0;
		aiDispersionCoefX = 14.0;
		dexterity = 1.21;
		picture = "\twc_weapons\rpd\w_rpd_ca.paa";
		selectionFireAnim = "MuzzleFlash";
		reloadMagazineSound[] = {"\twc_weapons\rpd\rpd_reload.wss",1,1,10};
		magazines[] = {"twc_100Rnd_762x39_RPD"};
		magazineReloadTime = 8;
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_AK\Data\Anim\AK.rtm"};
		modes[] = {"FullAuto","manual","close","short","medium"};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"CUP_ak74_Closure_SoundSet","CUP_akm_Shot_SoundSet","CUP_lmg1_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"CUP_ak74_Closure_SoundSet","CUP_akm_ShotSD_SoundSet","CUP_Rifle1_SD_Tail_SoundSet"};
			};
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			dispersion = 0.00125;
			minRange = 0;minRangeProbab = 0.1;
			midRange = 150;midRangeProbab = 0.7;
			maxRange = 300;maxRangeProbab = 0.05;
		};
		class manual: FullAuto
		{
			reloadTime = 0.1;
			dispersion = 0.00125;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 620;
			maxRangeProbab = 0.04;
		};
		class animationsources
		{
			class revolving
			{
				source = "revolving";
				weapon = "rpd";
			};
		};
		class Library
		{
			libTextDesc = "RPD Machinegun";
		};
	};
};
