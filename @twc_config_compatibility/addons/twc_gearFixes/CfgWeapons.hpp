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
	
	class launch_NLAW_F;	
	class ACE_launch_NLAW_ready_F: launch_NLAW_F
	{
		class EventHandlers: EventHandlers {
			fired = "_this call CBA_fnc_firedDisposable;";
		};
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
	
	
	class RifleCore;
	class Rifle:RifleCore
	{
		
	};
	
	class Rifle_Base_F:Rifle
	{
		class eventhandlers;
	};
	
	class Rifle_Long_Base_F:Rifle_Base_F
	{
		class eventhandlers;
	};
	
	
	
	class autocannon_30mm_CTWS: autocannon_Base_F {
	};
	
	class autocannon_40mm_CTWS: autocannon_Base_F
	{
		class HE;
	};
	
	class CUP_Rarden_CTWS_veh: autocannon_40mm_CTWS
	{
		magazines[] = {"twc_3rnd_30mm_AP","twc_3rnd_30mm_HE", "TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_HET"};
		magazineReloadTime = 0.7;
		muzzles[] = {"HE"};
		ReloadTime = 0.6;
		autoReload = 1;
		class HE: HE
		{
			magazines[] = {"twc_3rnd_30mm_AP","twc_3rnd_30mm_HE","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_HET"};
			ReloadTime = 0.6;
			magazineReloadTime = 0.7;
			autoReload = 1;
		};
	};
	
	class CUP_arifle_M16_Base: Rifle_Base_F
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};

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
	
	
	class CUP_launch_RPG7V: Launcher_Base_F
	{
		reloadAction = "RHS_GestureReloadRPG7";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.562341,1,50};
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
	
	class GM6_base_F;
	
	class rhs_weap_M107_Base_F: GM6_base_F
	{
		recoil = "twc_shotgun_1";
		recoilProne = "twc_rifle_762_prone";
		magazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_10Rnd_STD_50BMG_AMAX"};
	};
	class UK3CB_BAF_L115_Base;
	
	class UK3CB_BAF_L115A3: UK3CB_BAF_L115_Base
	{
		recoil = "twc_shotgun_1";
		recoilProne = "twc_mg_prone";
		magazines[] = {"ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_API526_Mag","TWC_5Rnd_338_300gr_HPBT_Mag", "TWC_5Rnd_338_API526_Mag"};
	};
	class twc_l115a3_wd: UK3CB_BAF_L115A3
	{
		scope = 1;
		author = "jayman";
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
	
	

	class twc_l96_w_base: UK3CB_BAF_L115A3 {
		scope = 1;
		displayname = "L96A1";
		magazines[] = {"UK3CB_BAF_762_L42A1_10Rnd", "UK3CB_BAF_762_L42A1_10Rnd_T"};
		class WeaponSlotsInfo {
			class MuzzleSlot {
				class compatibleItems {};
				displayName = "Muzzle";
				iconPicture = "a3\weapons_f\Data\ui\attachment_muzzle";
				iconPinpoint = "Center";
				iconPosition[] = {0,0};
				iconScale = 0;
				linkProxy = "\a3\data_f\proxies\weapon_slots\MUZZLE";
				scope = 0;
			};
			class CowsSlot {
				class compatibleItems {
					CUP_optic_Leupold_VX3 = 1;
					cup_optic_leupoldmk4 = 1;
					cup_optic_leupoldmk4_10x40_lrt_woodland = 1;
					cup_optic_leupoldm3lr = 1;
					cup_optic_sb_3_12x50_pmii = 1;
					cup_optic_an_pvs_4 = 1;
				};
				displayName = "Optics Slot";
				iconPicture = "a3\weapons_f\Data\ui\attachment_top";
				iconPinpoint = "Bottom";
				iconPosition[] = {0,0};
				iconScale = 0;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			mass = 140;
		};
	};

	class twc_l96_d_base: twc_l96_w_base {
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L115\data\awcstock_FDE_co.paa","\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L115\data\AWC_Scope_co.paa","\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L115\data\Magnumbits_ca.paa"};
		picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L115\data\gear_awmFDE_ca.paa";
	};
	
	
	class TWC_Weapon_L96_Woodland: twc_l96_w_base
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_leupoldmk4_10x40_lrt_woodland";
			};
		};
	};
	class TWC_Weapon_L96_Desert: twc_l96_d_base
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_leupoldmk4";
			};
		};
	};
	
	class CUP_arifle_AK_Base: Rifle_Base_F
	{
		class Single;
		class Burst;
		class FullAuto;
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		discretedistanceinitindex = 1;
	};
	
	
	
	class CUP_arifle_AK74: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;		
		};
	};
	
	class CUP_arifle_AK74_GL: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			dispersion = 0.002;		
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AK74M: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AK74M_GL: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AKS_Base: CUP_arifle_AK_Base
	{
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AKS74: CUP_arifle_AKS_Base
	{
		
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AKS74U: CUP_arifle_AKS_Base
	{
		
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	
	class CUP_arifle_RPK74: CUP_arifle_AK74
	{
		
		class Single:Single {
			dispersion = 0.0015;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0025;		
		};
		class Burst:Burst {
			dispersion = 0.002;		
		};
		class Manual: mode_fullauto {
			dispersion = 0.0025;		
		};
		class close: Manual {
			dispersion = 0.002;		
		};
		class far: close {
			dispersion = 0.002;		
		};
		class medium: close {
			dispersion = 0.002;		
		};
		class short: close {
			dispersion = 0.002;		
		};
	};
	
	class CUP_arifle_AKM: CUP_arifle_AK_Base
	{
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	class CUP_arifle_TYPE_56_2: CUP_arifle_AKM
	{
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AK47: CUP_arifle_AK_Base
	{
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AKS: CUP_arifle_AKM
	{
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	
	class CUP_arifle_AKM_GL: CUP_arifle_AKM
	{
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	class CUP_arifle_AKMS_GL: CUP_arifle_AKM_GL
	{
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Single {
			dispersion = 0.002;
		};
		class FullAuto:FullAuto {
			dispersion = 0.0035;	
		};
		class Burst:Burst {
			dispersion = 0.0035;	
		};
	};
	
	
	
	class CUP_sgun_M1014_base: Rifle_Base_F
	{
		recoil = "twc_shotgun_1";
		recoilProne = "twc_rifle_762_prone";
	};
	class CUP_sgun_M1014_vfg: CUP_sgun_M1014_base
	{};
	class TWC_L128A1_Eotech: CUP_sgun_M1014_vfg
	{
		scope = 1;
		displayname = "L128A1 Shotgun";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="UK3CB_BAF_Eotech";
			};
		};
	};
	
	
	class UK3CB_BAF_L1A1: Rifle_Base_F {
		recoil = "twc_rifle_762L";
		recoilProne = "twc_rifle_762L_prone";
	};
	
	class EBR_base_F;
	class srifle_EBR_F:EBR_base_F
	{
		class Single;
	};
	class UK3CB_BAF_L128A1: srifle_EBR_F {
		recoil = "twc_shotgun_1";
		recoilProne = "twc_rifle_762_prone";
	};
	
	class mk20_base_F;
	class arifle_Mk20_F: mk20_base_F
	{
		class FullAuto;
		class Single;
	};
	
	class arifle_Mk20_plain_F: arifle_Mk20_F {
		class FullAuto: Mode_FullAuto {
			
			class StandardSound {
				soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet","RHSUSF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet"};
			};
		};
		class Fullauto_medium: FullAuto {
			class StandardSound {
				soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet","RHSUSF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet"};
			};
		};
		class Single: Mode_SemiAuto {
			class StandardSound {
				soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet","RHSUSF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet"};
			};
		};
		class Single_medium_optics1: Single {
			class StandardSound {
				soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet","RHSUSF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet"};
			};
		};
		class Single_far_optics2: Single_medium_optics1 {
			class StandardSound {
				soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet","RHSUSF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet"};
			};
		};
	};
	
	class UK3CB_BAF_L119_Base: arifle_Mk20_plain_F {
		class FullAuto: FullAuto {
			reloadTime = 0.07;
		};
	};
	class UK3CB_BAF_L85A2: arifle_Mk20_plain_F {
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		reloadAction = "CUP_GestureReloadSA80";
		reloadMagazineSound[] = {"\CUP\Weapons\CUP_Weapons_L85\data\sounds\l85_Reload",1,1,10};
		class Single:Single {
			dispersion = 0.0015;
		};
		class FullAuto:FullAuto {
			dispersion = 0.003;
		};
	};
	
	class UK3CB_BAF_L86A2: UK3CB_BAF_L85A2 {
		recoil = "twc_rifle_556_long";
		recoilProne = "twc_rifle_556_long_prone";
		initSpeed = -1.1;
		class Single:Single {
			dispersion = 0.001;
		};
		class FullAuto:FullAuto {
			dispersion = 0.002;
		};
	};
	
	class UK3CB_BAF_L129A1: srifle_EBR_F {
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Single {
			dispersion = 0.001;
		};
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
		magazines[] = {"UK3CB_BAF_762_100Rnd","UK3CB_BAF_762_100Rnd_Blank","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_200Rnd","UK3CB_BAF_762_200Rnd_Blank","UK3CB_BAF_762_200Rnd_T","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51_m61_ap","rhsusf_50Rnd_762x51_m62_tracer","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m82_blank","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m82_blank","rhsusf_50Rnd_762x51_m993","rhsusf_100Rnd_762x51_m993","TWC_UK3CB_BAF_762_50Rnd","TWC_UK3CB_BAF_762_50Rnd_T"};
		class WeaponSlotsInfo {
			class asdg_OpticRail_UK3CB_BAF_L7A2 { };
		};
		class fullauto: mode_fullauto
		{
			reloadTime = 0.08;
			dispersion = 0.0008;
		};

	};
	
		class UK3CB_BAF_L110_Base:Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 2900;
		ace_overheating_dispersion = 1.1;
		ace_overheating_slowdownFactor = 1.2;
	//	class eventhandlers;
		twc_openbolt = 1;
	};
	class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base
	{
		recoil = "twc_mg_556";
		recoilProne = "twc_mg_556_prone";
		class FullAuto: Mode_FullAuto {
			dispersion = 0.0016;
		};

	};	
	
	//for barrel swapping, put a ACE_SpareBarrel in the player's inventory
	
	
	class CUP_lmg_PKM: Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 3500;
		ace_overheating_dispersion = 1.0;
		ace_overheating_slowdownFactor = 1.5;
		class manual: mode_fullauto
		{
			
		};
		class close: manual
		{
			
		};
		class far: close
		{
			aiRateOfFire = 1;
			burstRangeMax = 7;
		};
		class medium: close
		{
			aiRateOfFire = 1;
			burstRangeMax = 7;
		};
		class short: close
		{
			aiRateOfFire = 1;
			burstRangeMax = 7;
		};
		class far_optic1: close
		{
			aiRateOfFire = 1;
			burstRangeMax = 5;
		};
		class far_optic2: far_optic1
		{
			aiRateOfFire = 1;
			burstRangeMax = 5;
		};
	};