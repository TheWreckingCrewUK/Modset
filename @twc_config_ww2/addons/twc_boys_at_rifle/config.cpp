////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.66
//'now' is Mon Jul 09 20:21:29 2018 : 'file' last modified on Mon Jul 09 20:00:32 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class twc_boys_at_rifle : config.bin{
class CfgPatches
{
	class twc_boys_at_rifle
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"twc_boys_at_rifle"};
	};
};
class CfgSoundShaders
{
	class twc_boys_closure_soundshader
	{
		samples[] = {{"twc_boys_at_rifle\sounds\boys_Shift_bolt.wss",1}};
		volume = 0.4466836;
		range = 5;
	};
	class twc_boys_closeShot_soundshader
	{
		samples[] = {{"twc_boys_at_rifle\sounds\Boys_Rifle_shot.wss",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class twc_boys_midShot_soundshader
	{
		samples[] = {{"twc_boys_at_rifle\sounds\Boys_Rifle_shot.wss",1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class twc_boys_distShot_soundshader
	{
		samples[] = {{"twc_boys_at_rifle\sounds\Boys_Rifle_shot.wss",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class twc_boys_tailInterior_SoundShader
	{
		samples[] = {{"twc_boys_at_rifle\sounds\Boys_Rifle_tail.wss",1}};
		volume = "interior";
		range = 500;
		limitation = "false";
	};
	class twc_boys_tailTrees_SoundShader
	{
		samples[] = {{"twc_boys_at_rifle\sounds\Boys_Rifle_tail.wss",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = "true";
	};
	class twc_boys_tailForest_SoundShader
	{
		samples[] = {{"twc_boys_at_rifle\sounds\Boys_Rifle_tail.wss",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = "true";
	};
	class twc_boys_tailMeadows_SoundShader
	{
		samples[] = {{"twc_boys_at_rifle\sounds\Boys_Rifle_tail.wss",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = "true";
	};
	class twc_boys_tailHouses_SoundShader
	{
		samples[] = {{"twc_boys_at_rifle\sounds\Boys_Rifle_tail.wss",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = "true";
	};
};
class CfgSoundSets
{
	class twc_boys_shot_soundset
	{
		soundShaders[] = {"twc_boys_closure_soundshader","twc_boys_closeShot_soundshader","twc_boys_midShot_soundshader","twc_boys_distShot_soundshader"};
		volumeFactor = 4;
		volumeCurve = "CUP_miniCannonSoundCurve";
		sound3DProcessingType = "CUP_Cannon_3DProcessingType";
		distanceFilter = "CUP_rifleTailDistanceFilter";
		spatial = "true";
		doppler = "false";
		loop = "false";
	};
	class twc_boys_tail_soundset
	{
		soundShaders[] = {"twc_boys_tailInterior_SoundShader","twc_boys_tailTrees_SoundShader","twc_boys_tailForest_SoundShader","twc_boys_tailMeadows_SoundShader","twc_boys_tailHouses_SoundShader"};
		soundShadersLimit = 2;
		volumeFactor = 4;
		volumeCurve = "CUP_miniCannonSoundCurve";
		frequencyRandomizerMin = 0.01;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "CUP_Cannon_3DProcessingType";
		distanceFilter = "CUP_rifleTailDistanceFilter";
		spatial = "true";
		doppler = "false";
		loop = "false";
	};
};
class CfgAmmo
{
	class B_127x99_Ball;
	class twc_boys_139x99: B_127x99_Ball
	{
		hit = 60;
		indirectHit = 2;
		indirectHitRange = 1;
		caliber = 3;
	};
};
class CfgMagazines
{
	class CUP_10x_303_M;
	class twc_boys_5rnd_mag: CUP_10x_303_M
	{
		author = "Anschluss";
		displayName = "5 round Boys magazine";
		ammo = "twc_boys_139x99";
		count = 5;
		initSpeed = 884;
		descriptionShort = "Caliber: .55<br/>Rounds: 5<br/>Used in: Boys AT Rifle";
		mass = 15;
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class CUP_srifle_LeeEnfield: Rifle_Base_F
	{
		class Single;
		class WeaponSlotsInfo;
	};
	class twc_boys_at_rifle: CUP_srifle_LeeEnfield
	{
		displayname = "Boys AT Rifle";
		author = "Anschluss";
		model = "twc_boys_at_rifle\twc_boys.p3d";
		magazines[] = {"twc_boys_5rnd_mag"};
		modelOptics = "-";
		selectionFireAnim = "muzzleflash";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\LongRangeRifles\GM6\Data\Anim\GM6.rtm"};
		picture = "\twc_boys_at_rifle\data\boys_ca.paa";
		reloadMagazineSound[] = {"\twc_boys_at_rifle\sounds\Boys_reload.wss",1,1,10};
		discreteDistance[] = {275,450};
		discreteDistanceInitIndex = 0;
		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"twc_boys_shot_soundset","twc_boys_tail_soundset"};
			};
			reloadTime = 4;
			backgroundReload = 2;
			recoil = "recoil_single_dmr";
			recoilProne = "recoil_single_prone_dmr";
		};
		class Library
		{
			libTextDesc = "Boys AT Rifle";
		};
		class EventHandlers
		{
			fired = "_this execVM '\twc_boys_at_rifle\twc_boys_fire.sqf'; _this execVM '\CUP\Weapons\CUP_Weapons_WeaponsCore\script\CUP_BoltActionLeverScript.sqf';";
		};
		aimTransitionSpeed = 0.8;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 360;
			class PointerSlot{};
			class CowsSlot{};
			class MuzzleSlot{};
		};
	};
};
class cfgMods
{
	author = "Anschluss";
	timepacked = "1531166432";
};
//};
