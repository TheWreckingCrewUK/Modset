#include "basicdefines_a3.hpp"
class CfgPatches
{
	class TWC_Sterling
	{
		units[]={};
		weapons[]={"TWC_Sterling_Sub"};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
/// All firemodes, to be sure
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

/// Weapon slots
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

#include "cfgrecoils.hpp" /// specific recoil patterns for this rifle
#include "cfgmagazines.hpp" /// specific magazines for this rifle
#include "cfgammo.hpp" /// specific ammo for this rifle

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;

	class TWC_sterling_base: Rifle_Base_F /// Just basic values common for all testing rifle variants
	{
		magazines[] = {34_rnd_sterling_mag,32_rnd_sten_mag}; /// original custom made magazines and a group of several standardized mags
		reloadAction = "GestureReloadMX"; /// MX hand animation actually fits this rifle well
		magazineReloadSwitchPhase = 0.4; /// part of reload animation when new magazine ammo count should affect "revolving" animation source
		discreteDistanceInitIndex = 0; /// Ironsight zeroing is the lowest value by default

		// Size of recoil sway of the cursor
		maxRecoilSway=0.0125;
        // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
        swayDecaySpeed=1.25;
		/// inertia coefficient of the weapon
		inertia = 0.5;

		/// positive value defines speed of the muzzle independent on the magazine setting, negative value is a coefficient of magazine initSpeed
		initSpeed = -1; /// this means that initSpeed of magazine is used

		class GunParticles : GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE"; 	/// this can be set, but having some common helps a bit
				compatibleItems[] = {"muzzle_snds_L"}; 	     			/// A custom made suppressor for this weapon
				iconPosition[] = {0.0, 0.45};							/// position of the slot icon inside of the weapon icon, relative to top-left corner in {right, down} format
				iconScale = 0.2;										/// scale of icon described in iconPicture
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa"; 	/// icon for selected slot
				iconPinpoint = "Center"; 										/// top, bottom, left, right, center alignment of the icon on snap point
			};
			class CowsSlot: CowsSlot /// default accessories for this slot
			{
				iconPosition[] = {0.5, 0.35};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot /// default accessories for this slot
			{
				iconPosition[] = {0.20, 0.45};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: UnderBarrelSlot /// using test bipod
			{
				iconPosition[] = {0.2, 0.7};
				iconScale = 0.2;
				compatibleItems[] = {"bipod_01_F_blk"};
			};
		};

/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;

		distanceZoomMin = 300;
		distanceZoomMax = 300;
/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////

		descriptionShort = "Sterling Submachinegun"; /// displayed on mouseOver in Inventory
		handAnim[] = {"OFP2_ManSkeleton", "\sterling\data\cwr2_uzi.rtm"}; /// MX hand animation actually fits this rifle well
		dexterity = 1.8;

//caseless ammo//
		caseless[] = {"",1,1,1};  /// no sound of ejected brass
		soundBullet[] = {caseless,1};

		selectionFireAnim = "muzzleFlash"; /// are we able to get rid of all the zaslehs?

		modes[] = {Single, FullAuto, fullauto_medium, single_medium_optics1, single_far_optics2}; /// Includes fire modes for AI

    ////////////////////////////////////////////////////// NO OPTICS ///////////////////////////////////////////////////////////

		class Single: Mode_SemiAuto /// Pew
		{
			sounds[] =
			{
				StandardSound, // default sound
				SilencedSound // silenced sound - weapon with silencer on
			};
			// the new parameter to distinguish muzzle accessories type
			class StandardSound
			{
				// array of sounds (SoundSet names) to be played at the game event (shot)
				// number of SoundSets in array is not limited
				// consider that several ms lag could appear between each SoundSet is played
				// closure (bolt action) sound definition should be part of SoundSet
				soundsetShot[] =
				{
					Sterling_Shot_SoundSet,
					Sterling_Tail_SoundSet
				};
			};
			class SilencedSound
			{
				soundSetShot[] =
				{
					Sterling_silencerShot_SoundSet,
					Sterling_silencerTail_SoundSet
				};
			};

			reloadTime = 0.096; /// means some 625 rounds per minute
			dispersion = 0.00087; /// A bit less than 3 MOA

			recoil = "recoil_single_Sterling"; /// defined in cfgRecoils
			recoilProne = "recoil_single_prone_Sterling"; /// defined in cfgRecoils

			minRange = 2; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 200; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 400; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
		};

		class FullAuto: Mode_FullAuto /// Pew-pew-pew-pew-pew
		{
			sounds[] =
			{
				StandardSound,
				SilencedSound
			};
			class StandardSound
			{
				soundsetShot[] =
				{
					Sterling_Shot_SoundSet,
					Sterling_Tail_SoundSet
				};
			};
			class SilencedSound
			{
				soundSetShot[] =
				{
					Sterling_silencerShot_SoundSet,
					Sterling_silencerTail_SoundSet
				};
			};

			reloadTime = 0.096;
			dispersion = 0.00087;

			recoil = "recoil_auto_Sterling"; /// defined in cfgRecoils
			recoilProne = "recoil_auto_prone_Sterling"; /// defined in cfgRecoils

			minRange = 0; minRangeProbab = 0.9;
			midRange = 15; midRangeProbab = 0.7;
			maxRange = 30; maxRangeProbab = 0.1;

			aiRateOfFire = 0.000001;
		};

		class fullauto_medium: FullAuto /// Pew, pew, pew only for AI
		{
			showToPlayer = 0;
			burst = 3;

			minRange = 2; minRangeProbab = 0.5;
			midRange = 75; midRangeProbab = 0.7;
			maxRange = 150; maxRangeProbab = 0.05;

			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
    //////////////////////////////////////////////////// OPTICS //////////////////////////////////////////////////

		class single_medium_optics1: Single /// Pew for AI with collimator sights
		{
			requiredOpticType = 1;
			showToPlayer = 0;

			minRange = 2; minRangeProbab = 0.2;
			midRange = 450; midRangeProbab = 0.7;
			maxRange = 600; maxRangeProbab = 0.2;

			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};

		class single_far_optics2: single_medium_optics1	/// Pew for AI with better sights
		{
			requiredOpticType = 2;
			showToPlayer = 0;

			minRange = 100; minRangeProbab = 0.1;
			midRange = 500; midRangeProbab = 0.6;
			maxRange = 700; maxRangeProbab = 0.05;

			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		aiDispersionCoefY=6.0; /// AI should have some degree of greater dispersion for initial shoots
		aiDispersionCoefX=4.0; /// AI should have some degree of greater dispersion for initial shoots
		drySound[]={"sterling\sounds\uzi_dry", db-1.0,1.0,10}; /// custom made sounds
		reloadMagazineSound[]={"sterling\sounds\uzi_reload",1.0,1.0,20}; /// custom made sounds
	};

	class TWC_Sterling_Sub: TWC_sterling_base
	{
		scope = 2; /// should be visible and useable in game
		displayName = "Sterling"; /// some name
		model = "\sterling\TWC_Sterling_sub.p3d"; /// path to model

		picture = "\sterling\Data\w_sterling_ca.paa"; /// different accessories have M, S, T instead of X
		UiPicture = "\sterling\Data\w_sterling_ca.paa"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights
		maxZeroing = 200;
		muzzles[] = {this}; /// to be able to switch between bullet muzzle and TGL

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 59.4; /// some rough estimate
		};
	};
};
