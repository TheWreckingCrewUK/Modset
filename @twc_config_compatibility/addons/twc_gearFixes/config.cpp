class CfgPatches {
	class TWC_gearFixes {
		units[]={
			"twc_B_AAA_System_01_F",
			"twc_B_AAA_System_01_F_S"
		};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"a3_weapons_f",
			"cup_airvehicles_av8b",
			"CUP_Creatures_Military_USArmy",
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds",
			"CUP_Weapons_VehicleWeapons"
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

#include "CfgAmmo.hpp"

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
		
	};
	
	class launch_NLAW_F: Launcher_Base_F {
		ace_overpressure_angle = 30;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 0.7;
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
	
	class Default;
	class CannonCore: Default
	{
	};
	
	class autocannon_Base_F: CannonCore
	{
		
		
		class HE;
	};
	class Rifle_Base_F;
	class Rifle_Long_Base_F:Rifle_Base_F
	{
	};
	
	class UK3CB_BAF_L7A2: Rifle_Long_Base_F {
		displayname = "L7A2 GPMG";
		class WeaponSlotsInfo {
			class asdg_OpticRail_UK3CB_BAF_L7A2 { };
		};
	};
	class autocannon_30mm_CTWS: autocannon_Base_F {
	};
	
	class autocannon_40mm_CTWS: autocannon_Base_F
	{
		class HE;
	};
	
	class CUP_Rarden_CTWS_veh: autocannon_40mm_CTWS
	{
		magazines[] = {"twc_3rnd_30mm_AP","twc_3rnd_30mm_HE"};
		magazineReloadTime = 1;
		muzzles[] = {"HE"};
		ReloadTime = 0.3;
		autoReload = 0;
		class HE: HE
		{
			magazines[] = {"twc_3rnd_30mm_AP","twc_3rnd_30mm_HE"};
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
	
	class twc_L7A2: UK3CB_BAF_L7A2 {};

	class missiles_titan;
	class UK3CB_BAF_Milan_Launcher: missiles_titan {
		ace_overpressure_angle = 90;
		ace_overpressure_range = 40;
		ace_overpressure_damage = 0.7;
	};

	//Dual Muzzle Setups for OPFOR vehicles to make them fire HE.
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
	class CUP_Vacannon_2A28: CUP_Vacannon_D10
	{
		muzzles[] = {"TWC_Muzzle_AP","TWC_Muzzle_HE"};
		class TWC_Muzzle_AP: CUP_Vacannon_D10
		{
			scope = 1;
			canLock=1;
			author = "$STR_CUP_AUTHOR_STRING";
			displayName = "2A28 Grom";
			magazines[] = {CUP_PG15V};
			reloadTime = 5;
			magazineReloadTime = 7;
			autoReload = 0;
			ballisticsComputer = 2;
			weaponLockSystem = 0;
			showaimcursorinternal = 0;
			cursor = "EmptyCursor";
			cursoraim = "EmptyCursor";
			cursoraimon = "EmptyCursor";
			minRange=5;
			minRangeProbab=0.89999998;
			midRange=700;
			midRangeProbab=1;
			maxRange=1300;
			maxRangeProbab=0.40000001;
			class player;
		};
		class TWC_Muzzle_HE: CUP_Vacannon_D10
		{
			scope = 1;
			canLock=1;
			author = "$STR_CUP_AUTHOR_STRING";
			displayName = "2A28 Grom";
			magazines[] = {CUP_OG15V};
			reloadTime = 5;
			magazineReloadTime = 7;
			autoReload = 0;
			ballisticsComputer = 2;
			weaponLockSystem = 0;
			showaimcursorinternal = 0;
			cursor = "EmptyCursor";
			cursoraim = "EmptyCursor";
			cursoraimon = "EmptyCursor";
			minRange=5;
			minRangeProbab=0.89999998;
			midRange=700;
			midRangeProbab=1;
			maxRange=1300;
			maxRangeProbab=0.40000001;
			class player;
		};
		class player;
	};
	class CUP_Vacannon_SPG9_veh: CUP_Vacannon_2A28
	{
		muzzles[] = {"TWC_Muzzle_AP","TWC_Muzzle_HE"};
		class TWC_Muzzle_AP: CUP_Vacannon_2A28
		{
			author = "$STR_CUP_AUTHOR_STRING";
			displayName = "SPG-9";
			magazines[] = {"CUP_16Rnd_PG9_AT_M"};
			reloadTime = 8;
			magazineReloadTime = 8;
			showaimcursorinternal = 1;
			reloadSound[] = {"\CUP\Weapons\CUP_Weapons_SMAW\data\sfx\reload.wss",10,1,20};
			reloadMagazineSound[] = {"\CUP\Weapons\CUP_Weapons_SMAW\data\sfx\reload.wss",10,1,20};
			class player: player
			{
				class StandardSound
				{
					weaponSoundEffect = "DefaultRifle";
					begin1[] = {"\CUP\Weapons\CUP_Weapons_StaticWeapons\Sounds\spg9_1.wss","db20",1,1200};
					soundBegin[] = {"begin1",1};
				};
			};
			class GunParticles {
				class FirstEffect {
					effectName = "RocketBackEffectsRPGNT";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
		};
		class TWC_Muzzle_HE: CUP_Vacannon_2A28
		{
			author = "$STR_CUP_AUTHOR_STRING";
			displayName = "SPG-9";
			magazines[] = {"CUP_16Rnd_OG9_HE_M"};
			reloadTime = 8;
			magazineReloadTime = 8;
			showaimcursorinternal = 1;
			reloadSound[] = {"\CUP\Weapons\CUP_Weapons_SMAW\data\sfx\reload.wss",10,1,20};
			reloadMagazineSound[] = {"\CUP\Weapons\CUP_Weapons_SMAW\data\sfx\reload.wss",10,1,20};
			class player: player
			{
				class StandardSound
				{
					weaponSoundEffect = "DefaultRifle";
					begin1[] = {"\CUP\Weapons\CUP_Weapons_StaticWeapons\Sounds\spg9_1.wss","db20",1,1200};
					soundBegin[] = {"begin1",1};
				};
			};
			class GunParticles {
				class FirstEffect {
					effectName = "RocketBackEffectsRPGNT";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
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

	//Configuring various plane weapons for use with the Ambient Attack Plane module.
	class RocketPods;
	class Mk82BombLauncher;
	class CUP_Vblauncher_Mk82_veh: RocketPods
	{
		cursorAim = "bomb";
	};
	class CUP_Vblauncher_KAB250_veh: RocketPods
	{
		cursorAim = "bomb";
	};
	class CUP_Vblauncher_GBU12_veh: RocketPods
	{
		cursorAim = "bomb";
	};

	class CUP_Vmlauncher_CRV7_veh: RocketPods
	{
		cursorAim = "missile";
	};
	class CUP_Vmlauncher_FFAR_veh: RocketPods
	{
		cursorAim = "missile";
	};
};

class CfgVehicles {
	
	
	
	
	
	
	
	#include "Helicopters.hpp"
	
	
	
	
	
	#include "acre_apcs.hpp"
	#include "acre_boats.hpp"
	#include "acre_cars.hpp"
	#include "acre_helicopters.hpp"
	#include "acre_planes.hpp"
	#include "acre_tanks.hpp"
};

class cfgMagazines
{
	
	
	class UK3CB_BAF_1Rnd_81mm_Mo_Shells;
	class UK3CB_BAF_1Rnd_81mm_Mo_AB_Shells;
	class UK3CB_BAF_1Rnd_81mm_Mo_Flare_White;
	class UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White;
	
	class UK3CB_BAF_1Rnd_60mm_Mo_Shells: UK3CB_BAF_1Rnd_81mm_Mo_Shells {
		mass = 20;
	};
	class UK3CB_BAF_1Rnd_60mm_Mo_AB_Shells: UK3CB_BAF_1Rnd_81mm_Mo_Flare_White {
		mass = 20;
	};
	class UK3CB_BAF_1Rnd_60mm_Mo_Flare_White: UK3CB_BAF_1Rnd_81mm_Mo_Flare_White {
		mass = 15;
	};
	class UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White: UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White {
		mass = 15;
	};
	class UK3CB_BAF_1Rnd_60mm_Mo_WPSmoke_White: UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White {
		mass = 15;
	};
};
