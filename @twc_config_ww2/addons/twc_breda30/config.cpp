class CfgPatches
{
	class twc_breda30
	{
		author = "Anschluss";
		units[] = {};
		weapons[] = {"twc_breda30"};
		requiredversion = 1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR", "CUP_Weapons_AK"};
	};
};
class CfgSoundShaders
{
	class twc_Breda30_closure_soundshader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\M240\closure_1",1}};
		volume = 0.4466836;
		range = 5;
	};
	class twc_Breda30_closeShot_soundshader
	{
		samples[] = {{"twc_breda30\sounds\breda_shot.wss",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class twc_Breda30_midShot_soundshader
	{
		samples[] = {{"twc_breda30\sounds\breda_shot.wss",1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class twc_Breda30_distShot_soundshader
	{
		samples[] = {{"twc_breda30\sounds\breda_shot.wss",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class twc_Breda30_tailInterior_SoundShader
	{
		samples[] = {{"twc_breda30\sounds\breda_tail.wss",1}};
		volume = "interior";
		range = 500;
		limitation = "false";
	};
	class twc_Breda30_tailTrees_SoundShader
	{
		samples[] = {{"twc_breda30\sounds\breda_tail.wss",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = "true";
	};
	class twc_Breda30_tailForest_SoundShader
	{
		samples[] = {{"twc_breda30\sounds\breda_tail.wss",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = "true";
	};
	class twc_Breda30_tailMeadows_SoundShader
	{
		samples[] = {{"twc_breda30\sounds\breda_tail.wss",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = "true";
	};
	class twc_Breda30_tailHouses_SoundShader
	{
		samples[] = {{"twc_breda30\sounds\breda_tail.wss",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = "true";
	};
};
class CfgSoundSets
{
	class twc_Breda30_shot_soundset
	{
		soundShaders[] = {"twc_Breda30_closure_soundshader","twc_Breda30_closeShot_soundshader","twc_Breda30_midShot_soundshader","twc_Breda30_distShot_soundshader"};
		volumeFactor = 2.5;
		volumeCurve = "CUP_rifleSoundCurve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "CUP_defaultDistanceFilter";
		spatial = "true";
		doppler = "false";
		loop = "false";
	};
	class twc_Breda30_tail_soundset
	{
		soundShaders[] = {"twc_Breda30_tailInterior_SoundShader","twc_Breda30_tailTrees_SoundShader","twc_Breda30_tailForest_SoundShader","twc_Breda30_tailMeadows_SoundShader","twc_Breda30_tailHouses_SoundShader"};
		soundShadersLimit = 2;
		volumeFactor = 2.5;
		volumeCurve = "CUP_rifleSoundCurve";
		frequencyRandomizerMin = 0.01;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "CUP_defaultDistanceFilter";
		spatial = "true";
		doppler = "false";
		loop = "false";
	};
};
class CfgAmmo
{
	class B_65x39_Caseless;
	class twc_65x52_carcano: B_65x39_Caseless
	{
		hit=10;
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class twc_20rnd_65x52_carcano: 30Rnd_556x45_Stanag
	{
		ammo = "twc_65x52_carcano";
		count = 20;
		descriptionshort = "Caliber: 6.5×53mm<br />Rounds: 20<br />Used in: Breda 30";
		displayname = "20rnd 6.5×57mm";
		picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_M24_CA.paa";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class CUP_arifle_AK74;
	class CUP_arifle_RPK74: CUP_arifle_AK74
	{
		class FullAuto;
		class Single;
	};
	class twc_breda30: CUP_arifle_RPK74
	{
		author = "Anschluss";
		scope = 2;
		model = "\twc_breda30\twc_breda30.p3d";
		picture = "";
		magazines[] = {"twc_20rnd_65x52_carcano"};
		displayname = "Breda 30";
		ace_overheating_mrbs = 80;
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_AK\Data\Anim\AK.rtm"};
		reloadMagazineSound[] = {"mas_ww2_army\weapon\sounds\breda_reload.wss",1,1,10};
		selectionFireAnim = "muzzleFlash";
		class FullAuto: FullAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"twc_Breda30_shot_soundset","twc_Breda30_tail_soundset"};
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
			soundContinuous = 0;
			soundBurst = false;
			minRange = 0;minRangeProbab = 0.3;
			midRange = 5;midRangeProbab = 0.58;
			maxRange = 10;maxRangeProbab = 0.04;
			showToPlayer = true;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;minRangeProbab = 0.05;
			midRange = 20;midRangeProbab = 0.58;
			maxRange = 50;maxRangeProbab = 0.04;
			showToPlayer = false;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 300;
			minRange = 50;minRangeProbab = 0.05;
			midRange = 200;midRangeProbab = 0.58;
			maxRange = 400;maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 600;
			minRange = 200;minRangeProbab = 0.05;
			midRange = 400;midRangeProbab = 0.58;
			maxRange = 600;maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 16;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 1000;
			minRange = 400;minRangeProbab = 0.05;
			midRange = 600;midRangeProbab = 0.4;
			maxRange = 800;maxRangeProbab = 0.01;
		};
		class Single: Single
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"twc_Breda30_shot_soundset","twc_Breda30_tail_soundset"};
			};
			reloadTime = 0.1;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.00125; // 0.0025
			aiRateOfFireDistance = 650;
			minRange = 400;minRangeProbab = 0;// only player
			midRange = 600;midRangeProbab = 0;
			maxRange = 800;maxRangeProbab = 0;
		};
		class Library {
			libTextDesc = "The Breda 30 is the standard Machine Gun of the Italian Army.";
		};
		descriptionShort = "Breda 30 MG, 6.5x52mm.";
		class WeaponSlotsInfo
		{
			mass = 101.4;
		};	
	};
};