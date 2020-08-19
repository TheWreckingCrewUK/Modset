

class mode_fullauto;
class Mode_SemiAuto;
class asdg_OpticRail1913;

class CfgWeapons {
	
	
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class EventHandlers;
	};
	class CUP_launch_RPG7V: Launcher_Base_F
	{
		class EventHandlers: EventHandlers {
			fired = "_mult = 1; if (isplayer (_this select 0)) then {_mult = 0.2};_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (((random 16) - 8) * _mult), (velocity _bullet select 1) + (((random 16) - 8) * _mult), 	(velocity _bullet select 2) + (((random 8) - 3) * _mult)];";
		};
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
		magazines[] = {"ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_API526_Mag"};
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
	class MGunCore;
	class MGun: MGunCore
	{
		class eventhandlers;
		class mode_fullauto;
		class manual;
	};
	class GMG_F: MGun
	{
		reloadtime = 0.22;
		class EventHandlers: EventHandlers {
			fired = "_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 8) - 4, (velocity _bullet select 1) + (random 8) - 4,  (velocity _bullet select 2) + (random 6) - 3]; [_this select 6, _this select 0] call twc_fnc_aps;";
		};
	};
	
	
	class LMG_RCWS: MGun {
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.3) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 16) - 8, (velocity _bullet select 1) + (random 16) - 8, 	(velocity _bullet select 2) + (random 8) - 4];};twc_gpmglastfired = time;";
		};
	};
	
	class RifleCore;
	class Rifle:RifleCore
	{
		class eventhandlers;
	};
	
	class Rifle_Base_F:Rifle
	{
	};
	
	class CUP_arifle_AK_Base: Rifle_Base_F
	{
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		discretedistanceinitindex = 1;
	};
	class CUP_arifle_AKM: CUP_arifle_AK_Base
	{
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		discretedistanceinitindex = 1;
	};
	
	class CUP_arifle_AK47: CUP_arifle_AK_Base
	{
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		discretedistanceinitindex = 1;
	};
	
	class CUP_arifle_AK47_Early: CUP_arifle_AK47
	{
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		discretedistanceinitindex = 1;
	};
	
	class CUP_arifle_AKS: CUP_arifle_AKM
	{
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		discretedistanceinitindex = 1;
	};
	
	class CUP_arifle_AKM_GL: CUP_arifle_AKM
	{
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		discretedistanceinitindex = 1;
	};
	
	class CUP_arifle_AKMS_GL: CUP_arifle_AKM_GL
	{
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		discretedistanceinitindex = 1;
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
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
	};
	
	class srifle_EBR_F;
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
	};class UK3CB_BAF_L119_Base: arifle_Mk20_plain_F {
		class FullAuto: FullAuto {
			reloadTime = 0.07;
		};
	};
	class UK3CB_BAF_L85A2: arifle_Mk20_plain_F {
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		reloadAction = "CUP_GestureReloadSA80";
		reloadMagazineSound[] = {"\CUP\Weapons\CUP_Weapons_L85\data\sounds\l85_Reload",1,1,10};
	};
	
	class UK3CB_BAF_L86A2: UK3CB_BAF_L85A2 {
		recoil = "twc_rifle_556_long";
		recoilProne = "twc_rifle_556_long_prone";
	};
	
	class Rifle_Long_Base_F:Rifle_Base_F
	{
		class eventhandlers;
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
		class WeaponSlotsInfo {
			class asdg_OpticRail_UK3CB_BAF_L7A2 { };
		};
		class fullauto: mode_fullauto
		{
			reloadTime = 0.08;
		};
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.3) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 24) - 12, (velocity _bullet select 1) + (random 24) - 12, 	(velocity _bullet select 2) + (random 4) - 2];};twc_gpmglastfired = time;";
		};
	};
	
	class rhs_pkp_base: Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 3500;
		ace_overheating_dispersion = 1.0;
		ace_overheating_slowdownFactor = 1.5;
	};
	
	class rhs_weap_saw_base: Rifle_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 2900;
		ace_overheating_dispersion = 1.1;
		ace_overheating_slowdownFactor = 1.2;
	};
	//rhs m240, because it's called m249 in config which would be confusing
	class LMG_Mk200_F: Rifle_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_dispersion = 1.1;
		ace_overheating_slowdownFactor = 1.5;
	};
	
	
	
	class Default;
	class CannonCore: Default
	{
		class eventhandlers;
	};
	
	class gatling_30mm_base: CannonCore
	{
		class EventHandlers;
		class Mode_FullAuto;
		class manual;
	};
	
	class UK3CB_gatling_30mm_base: gatling_30mm_base
	{
		modes[] = {"Burst50","close","short","medium","far"};
		class Burst10;
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.6) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 14) - 7, (velocity _bullet select 1) + (random 14) - 7, 	(velocity _bullet select 2) + (random 10) - 5];};twc_gpmglastfired = time;";
		};
	};
	
	class UK3CB_BAF_CannonM230: UK3CB_gatling_30mm_base
	{
		class Burst20:Burst10
		{
			dispersion=0.012;
		};
	};
	
	class CUP_Vacannon_M230_veh: CannonCore
	{
		class manual: CannonCore
		{
			dispersion=0.012;
		};
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.6) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 14) - 7, (velocity _bullet select 1) + (random 14) - 7, 	(velocity _bullet select 2) + (random 10) - 5];};twc_gpmglastfired = time;";
		};
	};
	
	//for barrel swapping, put a ACE_SpareBarrel in the player's inventory
	
	
	class CUP_lmg_PKM: Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 3500;
		ace_overheating_dispersion = 1.0;
		ace_overheating_slowdownFactor = 1.5;
		
	};

	class UK3CB_BAF_L110_Base:Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 2900;
		ace_overheating_dispersion = 1.1;
		ace_overheating_slowdownFactor = 1.2;
		class eventhandlers;
		twc_openbolt = 1;
	};
	class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base
	{
		recoil = "twc_mg_556";
		recoilProne = "twc_mg_556_prone";
		class FullAuto;
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_minimilastfired') then {twc_minimilastfired = 0}; if (time > twc_minimilastfired + 0.3) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 24) - 12, (velocity _bullet select 1) + (random 24) - 12, 	(velocity _bullet select 2) + (random 4) - 2];};twc_minimilastfired = time;";
		};
	};
	
};