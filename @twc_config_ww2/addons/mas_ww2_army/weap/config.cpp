class CfgPatches
{
	class mas_ww2_weapons
	{
		author = "massi & authors in credits";
		requiredaddons[] = {"A3_Weapons_F","A3_Weapons_F_Rifles_MX","A3_Weapons_F_EBR","A3_Weapons_F_LongRangeRifles_GM6","A3_Weapons_F_Machineguns_M200","mas_ww2_army"};
		requiredversion = 1.56;
		units[] = {"Box_mas_ww2_B_Wps_F","Box_mas_ww2_O_ita_Wps_F","Box_mas_ww2_O_jap_Wps_F","Box_mas_ww2_I_Wps_F","Box_mas_ww2_Buk_Wps_F","Box_mas_ww2_O_Wps_F"};
		weapons[] = {"muzzle_mas_ww2_snds_sten","hgun_mas_ww2_acp_F","hgun_mas_ww2_bhp_F","hgun_mas_ww2_tt33_F","hgun_mas_ww2_lug_F","hgun_mas_ww2_m34_F","hgun_mas_ww2_nambu_F","LMG_mas_ww2_mg3_F","LMG_mas_ww2_bar_F","arifle_mas_ww2_mp40","arifle_mas_ww2_mp40_o","arifle_mas_ww2_mp44","arifle_mas_ww2_mb38","arifle_mas_ww2_t100","arifle_mas_ww2_ppsh","arifle_mas_ww2_sten","arifle_mas_ww2_sten_sd","arifle_mas_ww2_tommy","arifle_mas_ww2_m1","arifle_mas_ww2_m1g","arifle_mas_ww2_lee","arifle_mas_ww2_lee_l","arifle_mas_ww2_mos","arifle_mas_ww2_mos_l","arifle_mas_ww2_kar98","arifle_mas_ww2_m91","arifle_mas_ww2_m91_l","arifle_mas_ww2_kar98_l","arifle_mas_ww2_ari","arifle_mas_ww2_ari_l","mas_ww2_launch_pzf60_F","mas_ww2_launch_m1_F"};
		magazines[] = {"30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp44","30Rnd_mas_ww2_t100","30Rnd_mas_ww2_sten","30Rnd_mas_ww2_sten_sd","30Rnd_mas_ww2_tommy","15Rnd_mas_ww2_m1","8Rnd_mas_ww2_m1","5Rnd_mas_ww2_lee","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_ari","100Rnd_mas_ww2_mg3","71Rnd_mas_ww2_ppsh","20Rnd_mas_ww2_bar","mas_ww2_pzf60","mas_ww2_m1bazooka"};
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
	class Rifle;
	class Rifle_Base_F;
	class WeaponSlotsInfo;
	class GunParticles;
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class arifle_MX_F;
	class hgun_P07_F;
	class muzzle_snds_H;
	class muzzle_mas_ww2_snds_sten: muzzle_snds_H
	{
		author = "massi & authors in credits";
		_generalMacro = "muzzle_mas_ww2_snds_sten";
		displayName = "Sound Supp Sten";
		model = "\mas_ww2_army\weap\mas_aksupp";
		picture = "\mas_ww2_army\UI\gear_aksupp_ca.paa";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 5;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.4;
				audibleFire = 0.3;
				visibleFireTime = 0.4;
				audibleFireTime = 0.4;
				cost = 1;
				typicalSpeed = 1;
				airFriction = 1;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			soundTypeIndex = 1;
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class hgun_mas_ww2_m34_F: hgun_P07_F
	{
		author = "massi & authors in credits";
		_generalMacro = "hgun_mas_ww2_m34_F";
		displayname = "Beretta M34";
		model = "\mas_ww2_army\weap\mas_m34";
		picture = "\mas_ww2_army\UI\gear_m34_x_ca.paa";
		magazines[] = {"16Rnd_9x21_Mag"};
		descriptionshort = "Pistol<br />Caliber: 9x19 mm";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class Library
		{
			libtextdesc = "The Pistol Beretta M34 was a 9mm pistol used in WW2 by Italian armed forces.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture = "\mas_ww2_army\ui\attachment_top2.paa";
				iconPosition[] = {0.5,0.2};
				iconPinpoint = "Bottom";
				compatibleItems[] = {};
				iconScale = 0.2;
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture = "\mas_ww2_army\ui\attachment_muzzle.paa";
				iconPosition[] = {0.2,0.3};
				iconPinpoint = "Center";
				compatibleItems[] = {"muzzle_snds_L"};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture = "\mas_ww2_army\ui\attachment_side.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.4,0.3};
				compatibleitems[] = {};
				iconScale = 0.2;
			};
		};
	};
	class arifle_mas_ww2_mp40: arifle_MX_F
	{
		author = "massi & authors in credits";
		_generalMacro = "arifle_mas_ww2_mp40";
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		displayname = "MP-40(Closed Stock)";
		model = "\mas_ww2_army\weap\mas_mp40";
		reloadAction = "GestureReloadSMG_02";
		magazines[] = {"30Rnd_mas_ww2_mp40"};
		picture = "\mas_ww2_army\ui\gear_mp40_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 9x19 mm";
		class Library
		{
			libtextdesc = "The MP 40 was a submachine gun developed in Germany and used extensively by the Axis powers during World War II. Designed in 1938 by Heinrich Vollmer with inspiration from its predecessor the MP 38, it was heavily used by infantrymen, paratroopers, platoon and squad leaders on the Eastern and Western Front. Its advanced and modern features made it a favorite among soldiers and popular in countries from various parts of the world after the war. From 1940 to 1945, an estimated 1,1 million were produced by Erma Werke.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture = "\mas_ww2_army\ui\attachment_muzzle.paa";
				iconPosition[] = {0,0.4};
				iconPinpoint = "Center";
				compatibleItems[] = {};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture = "\mas_ww2_army\ui\attachment_top2.paa";
				iconPosition[] = {0.5,0.3};
				iconPinpoint = "Bottom";
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture = "\mas_ww2_army\ui\attachment_side.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.2,0.4};
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPicture = "\mas_ww2_army\ui\attachment_bipod.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.2,0.8};
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			mass = 100;
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_01",0.398107,1.2,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ww2_army\sounds\rahim_shot_1",3.98107,1,2000};
				begin2[] = {"\mas_ww2_army\sounds\rahim_shot_2",3.98107,1,2000};
				begin3[] = {"\mas_ww2_army\sounds\rahim_shot_3",3.98107,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_interior",1.9952624,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.12;
			dispersion = 0.00116;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_01",0.398107,1.2,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ww2_army\sounds\rahim_shot_1",3.98107,1,2000};
				begin2[] = {"\mas_ww2_army\sounds\rahim_shot_2",3.98107,1,2000};
				begin3[] = {"\mas_ww2_army\sounds\rahim_shot_3",3.98107,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_interior",1,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.12;
			dispersion = 0.00116;
			recoil = "recoil_auto_ebr";
			recoilProne = "recoil_auto_prone_ebr";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
	};
	class arifle_mas_ww2_mb38: arifle_mas_ww2_mp40
	{
		author = "massi & authors in credits";
		_generalMacro = "arifle_mas_ww2_mb38";
		displayname = "Beretta MAB38";
		model = "\mas_ww2_army\weap\mas_mb38";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_LeeEnfield\Data\Anim\LeeEnfield.rtm"};
		magazines[] = {"30Rnd_mas_ww2_mp40"};
		picture = "\mas_ww2_army\ui\gear_mb38_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 9x19 mm";
		class Library
		{
			libtextdesc = "The Beretta MAB38 submachine guns chambered in 9×19mm and used extensively by Italian armed forces in WW2.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture = "\mas_ww2_army\ui\attachment_muzzle.paa";
				iconPosition[] = {0,0.4};
				iconPinpoint = "Center";
				compatibleItems[] = {"muzzle_mas_ww2_snds_sten"};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture = "\mas_ww2_army\ui\attachment_top2.paa";
				iconPosition[] = {0.5,0.3};
				iconPinpoint = "Bottom";
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture = "\mas_ww2_army\ui\attachment_side.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.2,0.4};
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPicture = "\mas_ww2_army\ui\attachment_bipod.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.2,0.8};
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			mass = 100;
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_01",0.398107,1.2,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ww2_army\sounds\rahim_shot_1",3.98107,1,2000};
				begin2[] = {"\mas_ww2_army\sounds\rahim_shot_2",3.98107,1,2000};
				begin3[] = {"\mas_ww2_army\sounds\rahim_shot_3",3.98107,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_interior",1.9952624,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.12;
			dispersion = 0.00116;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_01",0.398107,1.2,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ww2_army\sounds\rahim_shot_1",3.98107,1,2000};
				begin2[] = {"\mas_ww2_army\sounds\rahim_shot_2",3.98107,1,2000};
				begin3[] = {"\mas_ww2_army\sounds\rahim_shot_3",3.98107,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_interior",1,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.12;
			dispersion = 0.00116;
			recoil = "recoil_auto_ebr";
			recoilProne = "recoil_auto_prone_ebr";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
	};
	class arifle_mas_ww2_sten: arifle_mas_ww2_mp40
	{
		author = "massi & authors in credits";
		_generalMacro = "arifle_mas_ww2_sten";
		displayname = "Sten MK-II";
		model = "\mas_ww2_army\weap\mas_sten";
		reloadAction = "GestureReloadSMG_02";
		handanim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_LeeEnfield\Data\Anim\LeeEnfield.rtm"};
		magazines[] = {"30Rnd_mas_ww2_sten","30Rnd_mas_ww2_sten_sd"};
		picture = "\mas_ww2_army\ui\gear_sten_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: 9x19 mm";
		class Library
		{
			libtextdesc = "The STEN or Sten gun was a family of British submachine guns chambered in 9×19mm and used extensively by British and Commonwealth forces throughout World War II and the Korean War. They were notable for having a simple design and very low production cost making them effective insurgency weapons for resistance groups.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture = "\mas_ww2_army\ui\attachment_muzzle.paa";
				iconPosition[] = {0,0.4};
				iconPinpoint = "Center";
				compatibleItems[] = {"muzzle_mas_ww2_snds_sten"};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture = "\mas_ww2_army\ui\attachment_top2.paa";
				iconPosition[] = {0.5,0.3};
				iconPinpoint = "Bottom";
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture = "\mas_ww2_army\ui\attachment_side.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.2,0.4};
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPicture = "\mas_ww2_army\ui\attachment_bipod.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.2,0.8};
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			mass = 100;
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_01",0.398107,1.2,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ww2_army\sounds\hk417_s1",3.98107,1,2000};
				begin2[] = {"\mas_ww2_army\sounds\hk417_s2",3.98107,1,2000};
				begin3[] = {"\mas_ww2_army\sounds\hk417_s3",3.98107,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_interior",1.9952624,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.12;
			dispersion = 0.00116;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_01",0.398107,1.2,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ww2_army\sounds\hk417_s1",3.98107,1,2000};
				begin2[] = {"\mas_ww2_army\sounds\hk417_s2",3.98107,1,2000};
				begin3[] = {"\mas_ww2_army\sounds\hk417_s3",3.98107,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_interior",1,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.12;
			dispersion = 0.00116;
			recoil = "recoil_auto_ebr";
			recoilProne = "recoil_auto_prone_ebr";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
	};
	class arifle_mas_ww2_m1: arifle_mas_ww2_sten
	{
		author = "massi & authors in credits";
		_generalMacro = "arifle_mas_ww2_m1";
		displayname = "M1 Carabine";
		model = "\mas_ww2_army\weap\mas_m1";
		reloadAction = "GestureReloadSMG_02";
		magazines[] = {"15Rnd_mas_ww2_m1","8Rnd_mas_ww2_m1"};
		picture = "\mas_ww2_army\ui\gear_m1_x_ca.paa";
		descriptionshort = "Assault Rifle<br />Caliber: .30cal";
		class Library
		{
			libtextdesc = "The M1 carbine formally the United States Carbine, Caliber 30, M1 is a lightweight 30 caliber semiautomatic carbine that became a standard firearm for the US military during World War II, the Korean War and the Vietnam War, and was produced in several variants. Easy to use,it was widely used by US and foreign military, paramilitary and police forces, and has also been a popular civilian firearm.";
		};
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture = "\mas_ww2_army\ui\attachment_muzzle.paa";
				iconPosition[] = {0,0.4};
				iconPinpoint = "Center";
				compatibleItems[] = {};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture = "\mas_ww2_army\ui\attachment_top2.paa";
				iconPosition[] = {0.5,0.3};
				iconPinpoint = "Bottom";
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture = "\mas_ww2_army\ui\attachment_side.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.2,0.4};
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPicture = "\mas_ww2_army\ui\attachment_bipod.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.2,0.8};
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			mass = 100;
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_01",0.398107,1.2,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ww2_army\sounds\HK416_s1",3.98107,1,2000};
				begin2[] = {"\mas_ww2_army\sounds\HK416_s2",3.98107,1,2000};
				begin3[] = {"\mas_ww2_army\sounds\HK416_s3",3.98107,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_interior",1.9952624,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.12;
			dispersion = 0.00116;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
	};
	class arifle_mas_ww2_lee: arifle_mas_ww2_m1
	{
		author = "massi & authors in credits";
		_generalMacro = "arifle_mas_ww2_lee";
		displayname = "Lee-Enfield No4";
		model = "\mas_ww2_army\weap\mas_LeeEnfield_old";
		reloadAction = "GestureReloadLRR";
		handanim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_LeeEnfield\Data\Anim\LeeEnfield.rtm"};
		magazines[] = {"5Rnd_mas_ww2_lee"};
		picture = "\mas_ww2_army\ui\gear_lee_x_ca.paa";
		descriptionshort = "Rifle<br />Caliber: 7.62x51 mm";
		maxZeroing = 1200;
		hasBipod = 0;
		class Library
		{
			libtextdesc = "The Lee Enfield bolt action, magazine fed, repeating rifle was the main firearm used by the military forces of the British Empire and Commonwealth during the first half of the 20th century. It was the British Armys standard rifle from its official adoption in 1895 until 1957. It remained in widespread British service until the early mid 1960s and the 7,62 mm L42 sniper variant remained in service until the 1990s. As a standard issue infantry rifle, it is still found in service in the armed forces of some Commonwealth nations. During the 1960s, the British Government and the Ministry of Defence converted a number of Lee Enfield No4 rifles to 7,62×51mm NATO as part of a programme to retain the Lee Enfield as a reserve weapon.";
		};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00018;
			soundContinuous = 0;
			reloadTime = 1.2;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ww2_army\sounds\m24_s1",2.51189,1,2200};
				begin2[] = {"\mas_ww2_army\sounds\m24_s2",2.51189,1,2200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_forest",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_houses",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_interior",1.9952624,1,2200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_meadows",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_trees",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture = "\mas_ww2_army\ui\attachment_muzzle.paa";
				iconPosition[] = {0,0.4};
				iconPinpoint = "Center";
				compatibleItems[] = {};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture = "\mas_ww2_army\ui\attachment_top.paa";
				iconPosition[] = {0.5,0.4};
				iconPinpoint = "Bottom";
				compatibleitems[] = {"optic_LRPS"};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture = "\mas_ww2_army\ui\attachment_side.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.2,0.4};
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPicture = "\mas_ww2_army\ui\attachment_bipod.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.2,0.8};
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			mass = 80;
		};
	};
	class arifle_mas_ww2_kar98: arifle_mas_ww2_lee
	{
		author = "massi & authors in credits";
		_generalMacro = "arifle_mas_ww2_kar98";
		displayname = "Karabiner 98k";
		model = "\mas_ww2_army\weap\mas_kar98";
		reloadAction = "GestureReloadLRR";
		handanim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_LeeEnfield\Data\Anim\LeeEnfield.rtm"};
		magazines[] = {"5Rnd_mas_ww2_kar98"};
		picture = "\mas_ww2_army\ui\gear_kar98_x_ca.paa";
		descriptionshort = "Rifle<br />Caliber: 792×57 mm";
		maxZeroing = 1200;
		hasBipod = 0;
		class Library
		{
			libtextdesc = "The Karabiner 98 kurz carbine 98 short, often abbreviated as Kar98k, K98, or K98k is a bolt action rifle chambered for the 792×57mm Mauser cartridge that was adopted on 21 June 1935 as the standard service rifle by the German Wehrmacht. It was one of the final developments in the long line of Mauser military rifles. Although supplemented by semi and fully automatic rifles during World War II, it remained the primary German service rifle until the end of the war in 1945. Millions were captured by the Soviets at the conclusion of World War II and were widely distributed as military aid. The Karabiner 98k therefore continues to appear in conflicts across the world as they are taken out of storage during times of strife.";
		};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00018;
			soundContinuous = 0;
			reloadTime = 1.2;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\mas_ww2_army\sounds\ben_s1",2.51189,1,2200};
				begin2[] = {"\mas_ww2_army\sounds\ben_s2",2.51189,1,2200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_forest",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_houses",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_interior",1.9952624,1,2200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_meadows",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_trees",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture = "\mas_ww2_army\ui\attachment_muzzle.paa";
				iconPosition[] = {0,0.4};
				iconPinpoint = "Center";
				compatibleItems[] = {};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture = "\mas_ww2_army\ui\attachment_top.paa";
				iconPosition[] = {0.5,0.4};
				iconPinpoint = "Bottom";
				compatibleitems[] = {"optic_LRPS"};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture = "\mas_ww2_army\ui\attachment_side.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.2,0.4};
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPicture = "\mas_ww2_army\ui\attachment_bipod.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0.2,0.8};
				compatibleitems[] = {};
				iconScale = 0.2;
			};
			mass = 80;
		};
	};
	class arifle_mas_ww2_m91: arifle_mas_ww2_kar98
	{
		author = "massi & authors in credits";
		_generalMacro = "arifle_mas_ww2_m91";
		displayname = "Carcano M91/38";
		model = "\mas_ww2_army\weap\mas_m91";
		reloadAction = "GestureReloadLRR";
		handanim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_LeeEnfield\Data\Anim\LeeEnfield.rtm"};
		magazines[] = {"5Rnd_mas_ww2_kar98"};
		picture = "\mas_ww2_army\ui\gear_m91_x_ca.paa";
		descriptionshort = "Rifle<br />Caliber: 792×57 mm";
		maxZeroing = 1200;
		hasBipod = 0;
		class Library
		{
			libtextdesc = "The Carcano M91 38 is a bolt action rifle chambered for the 792×57mm Mauser cartridge that was used in WW2 by Italian armed forces.";
		};
	};
	class arifle_mas_ww2_m91_l: arifle_mas_ww2_m91
	{
		author = "massi & authors in credits";
		_generalMacro = "arifle_mas_ww2_m91_l";
		displayName = "Carcano M91/38(optic)";
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_LRPS";
			};
		};
	};
};
class CfgAmmo
{
	class B_556x45_Ball;
	class B_762x51_Ball;
	class B_mas_ww2_smg_Ball: B_556x45_Ball
	{
		hit = 8;
		caliber = 1;
	};
	class B_mas_ww2_rifle_Ball: B_762x51_Ball
	{
		hit = 10;
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class 30Rnd_mas_ww2_mp40: 30Rnd_556x45_Stanag
	{
		ammo = "B_mas_ww2_smg_Ball";
		count = 30;
		descriptionshort = "Caliber: 9 mm<br />Rounds: 30<br />Used in: MP40, MAB38";
		displayname = "30rnd 9mm";
		picture = "\mas_ww2_army\ui\m_30mp5_ca.paa";
	};
	class 5Rnd_mas_ww2_kar98: 30Rnd_556x45_Stanag
	{
		ammo = "B_mas_ww2_rifle_Ball";
		count = 5;
		descriptionshort = "Caliber: 792×57mm<br />Rounds: 5<br />Used in: Kar98k, Carcano M91";
		displayname = "5rnd 792×57mm";
		picture = "\mas_ww2_army\ui\m_m24_ca.paa";
	};
};
