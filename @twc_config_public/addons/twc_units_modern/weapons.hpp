class asdg_FrontSideRail;
class asdg_OpticRail1913;
class CUP_PicatinnyTopShortMount;
class asdg_MuzzleSlot_556;
class CUP_PicatinnyTopMount;
class CUP_PicatinnySideMount;
class UK3CB_underbarrel_rifle_slot;
class asdg_MuzzleSlot_762_L129_3CB;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot_556_3CB;
class asdg_MuzzleSlot_762;
class CUP_TopMountG36;
class asdg_MuzzleSlot_9MM_SMG;
class Mode_SemiAuto;
class Single;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
//////////////////////////////  Modern  //////////////////////////////
	
	class UK3CB_BAF_L110A2RIS;
	class UK3CB_BAF_L110A2RIS_public: UK3CB_BAF_L110A2RIS
	{};
	class UK3CB_BAF_L129A1;
	class UK3CB_BAF_L129A1_public: UK3CB_BAF_L129A1
	{};
	class CUP_sgun_M1014_vfg;
	class UK3CB_BAF_L85A2_RIS_Tan;
	class arifle_Mk20_F;
	class Rifle_Base_F;
	
	
	class CUP_U_O_TK_Ghillie_Top;
	class twc_halfghillie_desert: CUP_U_O_TK_Ghillie_Top
	{
		displayName = "Half-Ghillie (desert)";
		hiddenUnderwaterSelectionsTextures[] = {};
		hiddenUnderwaterSelections[] = {};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\twc_units_modern\textures\digicamo_co.jpg"};
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_u_o_tk_ghillie_top_ca.paa";
		class ItemInfo
		{
			containerClass = "Supply60";
			mass = 20;
			scope = 0;
			type = 801;
			uniformClass = "twc_I_Sniper_F";
			uniformModel = "-";
		};
	};
	
	
	class InventoryOpticsItem_Base_F;
	
	class CUP_optic_SB_11_4x20_PM;
	class twc_optic_vortex_11_8x20_PM: CUP_optic_SB_11_4x20_PM
	{
		displayName = "Schmidt and Bender 1-8x25 PM ShortDot";
		descriptionShort = "Low Power Variable Optic (LPVO). 1-8x Magnification";
		class iteminfo: InventoryOpticsItem_Base_F
		{
			allowedSlots[] = {801,701,901};
			mass = 10;
			modelOptics = "\x\cba\addons\optics\cba_optic_big_90.p3d";
			mountAction = "MountOptic";
			muzzleEnd = "konec hlavne";
			muzzlePos = "usti hlavne";
			optics = 1;
			opticType = 1;
			scope = 0;
			type = 201;
			unmountAction = "DismountOptic";
			zeroingSound[] = {"A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_plastic",0.316228,1,5};
			class OpticsModes
			{
				class ShortDot
				{
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex = "2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					distanceZoomMax = 1200;
					distanceZoomMin = 100;
					memoryPointCamera = "eye";
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomInit = "0.8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "0.8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMin = "8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					useModelOptics = 1;
					visionMode[] = {"Normal"};
				};
			};
		};
	};
	
	class CUP_V_B_Ciras_MCam;
	class twc_warriorvest_dcs: CUP_V_B_Ciras_MCam
	{
		displayName = "Warrior Assault Systems DCS";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa"};
	};
	
	
	
	class CUP_V_B_BAF_MTP_Osprey_Mk4_Crewman;
	class TWC_V_B_BAF_MTP_Osprey_Mk4_Crewman_base: CUP_V_B_BAF_MTP_Osprey_Mk4_Crewman
	{
		class Iteminfo;
		scope = 0;
	};
	
	class TWC_V_B_BAF_MTP_Osprey_Mk4_Crewman : TWC_V_B_BAF_MTP_Osprey_Mk4_Crewman_base
	{
		scope = 1;
		class iteminfo:iteminfo
		{
			containerClass = "Supply50";
		};
	};
	class CUP_hgun_MP7;
	class twc_hgun_MP7A1: CUP_hgun_MP7
	{
		
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_MicroT1_low";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="cup_acc_anpeq_15_flashlight_black_l";
			};
		};
	};
	class CUP_smg_MP5A5_flashlight;
	class TWC_CUP_smg_MP5A5_flashlight_clean:CUP_smg_MP5A5_flashlight
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_compm2_low";
			};
		};
	};

	class CUP_arifle_mk18_black;
	class twc_L119A2_base: CUP_arifle_mk18_black
	{
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\mk18_black_co.jpg"};
		displayName = "L119A2 CQB";
		descriptionShort = "Assaulter Variant<br/>Short Barrel<br/>Increased Rate of Fire";
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_EMAG_Tan","twc_CUP_30Rnd_556x45_EMAG_Tan_tracer","CUP_30Rnd_556x45_Emag","CUP_60Rnd_556x45_SureFire","CUP_20Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green","CUP_100Rnd_556x45_BetaCMag_ar15","CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15","CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_ar15","CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_ar15"};
		class Single:Mode_SemiAuto {
			//sounds[] = {"StandardSound"};
			dispersion = 0.002;
		};
		class Burst:Mode_Burst {
			//sounds[] = {"StandardSound"};
			dispersion = 0.002;
		};
		class FullAuto:Mode_FullAuto {
			//sounds[] = {"StandardSound"};
			reloadTime = 0.06;
			dispersion = 0.002;
		};
	};
	
	class twc_L119A2_10: twc_L119A2_base
	{
		class weaponslotsinfo;
	};
	
	//tiered approach for jsrs and non-jsrs compat. the adjoining tier twc_L119A2_CQB is modified in the jsrs file
	class twc_L119A2_10_Base: twc_L119A2_10
	{
		recoil = "twc_rifle_556_short";
		recoilProne = "twc_rifle_556_short_prone";
		displayName = "L119A2";
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\mk18_digi_co.jpg"};
		descriptionShort = "Full Length Variant<br/>15.7 Inch Barrel<br/>5.56";
		
		class Single:Single {
			dispersion = 0.002;
		};
		class Burst:Burst {
			dispersion = 0.002;	
		};
		class FullAuto:FullAuto {
			reloadTime = 0.06;
			dispersion = 0.002;
		};
	};
	//double base to stop the jsrs compat messing with the firemodes. Could have taken the long road and done it in a more annoying way through the jsrs file to clean it up here, will do that in time perhaps
	class TWC_UK3CB_BAF_L119A2_14_Base: twc_L119A2_10_Base
	{
		displayName = "L119A2";
		recoil = "twc_rifle_556_long";
		recoilProne = "twc_rifle_556_long_prone";
		descriptionShort = "Full Length Variant<br/>15.7 Inch Barrel<br/>5.56";
		
		class Single:Single {
			dispersion = 0.0014;
		};
		class Burst:Burst {
			dispersion = 0.0014;	
		};
		class FullAuto:FullAuto {
			reloadTime = 0.075;
			dispersion = 0.0014;
		};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo8"};
	};
	
	class TWC_UK3CB_BAF_L119A2_14_LDS: TWC_UK3CB_BAF_L119A2_14_Base
	{
		displayName = "L119A2 (LDS)";
		
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_acog_ta01nsn_rmr_tan_pip";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="UK3CB_BAF_SFFH";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="cup_acc_anpeq_15_top_flashlight_tan_f";
			};
		};
	};
	
	class TWC_UK3CB_BAF_L119A2_14_ACOG_black: TWC_UK3CB_BAF_L119A2_14_Base
	{
		displayName = "L119A2 (ACOG)";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_ACOG_TA01NSN_RMR_Black_PIP";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="UK3CB_BAF_SFFH";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="cup_acc_anpeq_15_top_flashlight_tan_f";
			};
		};
	};
	

	class TWC_UK3CB_BAF_L119A2_10_EOTECH: twc_L119A2_10_Base
	{
		displayName = "L119A2 CQB (T1)";
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\mk18_black_co.jpg"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="CUP_optic_MicroT1";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="UK3CB_BAF_SFFH";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="CUP_acc_ANPEQ_15_Top_Flashlight_Tan_V";
			};
		};
		
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountMk18: CUP_PicatinnyTopMount {
				class compatibleItems {
					CUP_optic_MicroT1 = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
					UK3CB_BAF_SFFH = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					CUP_acc_ANPEQ_15_Top_Flashlight_Tan_V = 1;
					CUP_acc_ANPEQ_15_Top_Flashlight_Tan_f = 1;
					CUP_acc_ANPEQ_15_Top_Flashlight_Tan_l = 1;
					uk3cb_baf_llm_ir_tan = 1;
					uk3cb_baf_llm_flashlight_tan = 1;
					acc_pointer_IR = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			allowedslots[] = {901};
			mass = 90;
		};
		
	};	
	
	class TWC_UK3CB_BAF_L119A2_10_MAG: twc_L119A2_10_Base
	{
		displayName = "L119A2 CQB (Magnifier)";
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\mk18_black_co.jpg"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="CUP_optic_AIMM_MICROT1_BLK";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="UK3CB_BAF_SFFH";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="CUP_acc_ANPEQ_15_Top_Flashlight_Tan_V";
			};
		};
		
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountMk18: CUP_PicatinnyTopMount {
				class compatibleItems {
					CUP_optic_AIMM_MICROT1_BLK = 1;
					CUP_optic_AIMM_MICROT1_BLK_flip = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
					UK3CB_BAF_SFFH = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					CUP_acc_ANPEQ_15_Top_Flashlight_Tan_V = 1;
					CUP_acc_ANPEQ_15_Top_Flashlight_Tan_f = 1;
					CUP_acc_ANPEQ_15_Top_Flashlight_Tan_l = 1;
					uk3cb_baf_llm_ir_tan = 1;
					uk3cb_baf_llm_flashlight_tan = 1;
					acc_pointer_IR = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			allowedslots[] = {901};
			mass = 90;
		};
		
	};
	class TWC_UK3CB_BAF_L119A2_10_LDS: twc_L119A2_10_Base
	{
		displayName = "L119A2 CQB (ACOG)";
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\mk18_black_co.jpg"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="CUP_optic_ACOG_TA01NSN_RMR_Black_PIP";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="UK3CB_BAF_SFFH";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="cup_acc_anpeq_15_top_flashlight_tan_f";
			};
		};
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountMk18: CUP_PicatinnyTopMount {
				class compatibleItems {
					CUP_optic_ACOG_TA01NSN_RMR_Black_PIP = 1;
					CUP_optic_Elcan_reflex_pip = 1;
					UK3CB_BAF_Kite = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
					UK3CB_BAF_SFFH = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					cup_acc_anpeq_15_top_flashlight_tan_f = 1;
					CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L = 1;
					CUP_acc_ANPEQ_15_Top_Flashlight_Tan_v = 1;
					uk3cb_baf_llm_ir_tan = 1;
					uk3cb_baf_llm_flashlight_tan = 1;
					acc_pointer_IR = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			allowedslots[] = {901};
			mass = 90;
		};
	};
	
	class TWC_UK3CB_BAF_L119A2_10_T1: twc_L119A2_10_Base
	{
		displayName = "L119A2 CQB (T1)";
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\mk18_black_co.jpg"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="CUP_optic_MicroT1";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="UK3CB_BAF_SFFH";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="cup_acc_anpeq_15_top_flashlight_tan_f";
			};
		};
	};
	
	class CUP_lmg_Mk48_nohg_tan;
	class TWC_CUP_lmg_Mk48_nohg_tan_optics: CUP_lmg_Mk48_nohg_tan
	{
		recoil = "twc_mg_762";
		recoilProne = "twc_mg_prone";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="CUP_optic_Elcan_SpecterDR";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="twc_acc_nt4_tan";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="CUP_acc_ANPEQ_15_Flashlight_Tan_L";
			};
		};
	};
	
	class CUP_arifle_HK417_20_Desert;
	
	
	class twc_HK417_base: CUP_arifle_HK417_20_Desert
	{
		scope = 1;
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Mode_SemiAuto {
			dispersion = 0.0004;
		};
		class Burst:Mode_Burst {
			dispersion = 0.0004;
		};
		class FullAuto:Mode_FullAuto {
			dispersion = 0.0004;
		};
	};
	
	class twc_HK417_jsrs_base: twc_HK417_base
	{};
	
	class TWC_HK417_scope_bipod: twc_HK417_jsrs_base
	{
		scope = 2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="RKSL_optic_PMII_312_des";
			};
			class LinkedItemsBipod
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_Harris_1A2_L";
			};
			class LinkedItemsFrontSideRail
			{
				slot="twc_hk417_siderail";
				item="CUP_acc_ANPEQ_15_Top_Flashlight_Tan_V";
			};
		};
	};
	
	class CUP_H_US_H_PASGT_desert;
	class twc_CUP_H_US_H_PASGT_trp: CUP_H_US_H_PASGT_desert
	{
		displayName = "PASGT (Trepentarn)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa"};
	};
	class twc_CUP_H_US_H_PASGT_flk: CUP_H_US_H_PASGT_desert
	{
		displayName = "PASGT (Flecktarn)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa"};
	};
	

	
	class UK3CB_BAF_L111A1_vehicle;
	class UK3CB_BAF_Landrover_L111A1: UK3CB_BAF_L111A1_vehicle
	{
		displayname = "M2 .50";
	};
	
	class UK3CB_BAF_L134A1_vehicle;
	class UK3CB_BAF_Landrover_L134A1: UK3CB_BAF_L134A1_vehicle
	{
		displayname = "MK19";
	};
	
	
	class default;
	class LauncherCore
	{
		class eventhandlers;
	};
	class MissileLauncher: LauncherCore
	{
		class EventHandlers: EventHandlers {
			fired = "if (!local (_this select 0)) exitwith {}; if (!(isplayer (_this select 0))) then {[_this select 6, _this select 0] call twc_fnc_aps;};";
		};
	};
	class Launcher: LauncherCore
	{
		class EventHandlers: EventHandlers {
			fired = "if (!local (_this select 0)) exitwith {}; if (!(isplayer (_this select 0))) then {[_this select 6, _this select 0] call twc_fnc_aps;};";
		};
	};
	class RocketPods: LauncherCore
	{
		class EventHandlers: EventHandlers {
			fired = "if (!local (_this select 0)) exitwith {}; if (!(isplayer (_this select 0))) then {[_this select 6, _this select 0] call twc_fnc_aps;};";
		};
	};
	
	
	class Launcher_Base_F: Launcher
	{
		class EventHandlers;
	};
	
	class launch_NLAW_F: Launcher_Base_F
	{
		class EventHandlers;
	};
	
	class ACE_launch_NLAW_ready_F: launch_NLAW_F
	{
		class EventHandlers: EventHandlers {
			fired = "if (!(isplayer (_this select 0))) then {[_this select 6, _this select 0] call twc_fnc_aps;};";
		};
	};
	
	class cannoncore;
	class gatling_30mm: CannonCore
	{
		class EventHandlers;
		class Mode_FullAuto;
		class manual;
	};
	
	class CUP_Vlmg_M240_M1Abrams_Coax;
	class CUP_M240_Coax_M1_Abrams_W: CUP_Vlmg_M240_M1Abrams_Coax
	{
		class manual;
	};
	class ukcw_l20a1: CUP_M240_Coax_M1_Abrams_W
	{
		class manual: manual
		{
			dispersion = 0.01;
		};
	};
	
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class Single;
		class FullAuto;
	};
	
	class CUP_arifle_Mk17_ST;
	class twc_mk17_elcan: CUP_arifle_Mk17_ST
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Elcan_SpecterDR_RMR";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15_Flashlight_Tan_L";
			};
		};
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
	};
	
	
	class CUP_arifle_G36_Base: Rifle_Base_F
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};
	
	class CUP_arifle_G36C: Rifle_Base_F
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};
	
	class CUP_arifle_MG36: CUP_arifle_G36C
	{
		recoil = "twc_rifle_556_long";
		recoilProne = "twc_rifle_556_long_prone";
	};
	
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		twc_openbolt = 1;
	};
	class CUP_lmg_m249_pip1;
	class twc_HK_MG4: CUP_lmg_m249_pip1
	{
		displayname = "HK MG4";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_G33_HWS_BLK";
			};
		};
	};
	class arifle_Mk20_plain_F: arifle_Mk20_F
	{
		class Single;
		class FullAuto;
	};
	
	class UK3CB_BAF_L22A2;
	class TWC_BAF_L22A2_SUSAT: UK3CB_BAF_L22A2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="uk3cb_baf_susat";
			};
		};
		
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L85: asdg_OpticRail1913 {
				class compatibleItems {
					uk3cb_baf_susat = 1;
				};
			};
			mass = 72;
		};
		
	};
	
	class UK3CB_BAF_L85A2: arifle_Mk20_plain_F
	{
	};
	
	class UK3CB_BAF_L86A2: UK3CB_BAF_L85A2
	{
	};
	
	class twc_BAF_L85A2_PUBLIC : UK3CB_BAF_L85A2
	{
	};
	
	class UK3CB_BAF_L85A2_UGL : twc_BAF_L85A2_PUBLIC
	{};
	
	class UK3CB_BAF_L85A2_UGL_HWS : twc_BAF_L85A2_PUBLIC
	{};
	
	class UK3CB_BAF_L85A2_RIS : twc_BAF_L85A2_PUBLIC
	{
		class WeaponSlotsInfo;
	};
	
	class UK3CB_BAF_L85A2_RIS_ELCAN3D: UK3CB_BAF_L85A2_RIS
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="CUP_optic_Elcan_reflex_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_LLM_IR_Black";
			};
		};
		
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L85: asdg_OpticRail1913 {
				class compatibleItems {
					CUP_optic_Elcan_reflex_pip = 1;
					UK3CB_BAF_Kite = 1;
				};
			};
			class asdg_FrontSideRail_L85: asdg_FrontSideRail {
				class compatibleItems {
					UK3CB_BAF_LLM_IR_Black = 1;
					UK3CB_BAF_LLM_Flashlight_Black = 1;
					acc_pointer_IR = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			allowedslots[] = {901};
			mass = 84;
		};
		
		
	};
	class UK3CB_BAF_L85A3;
	class UK3CB_BAF_L85A3_RIS_ELCAN3D: UK3CB_BAF_L85A3
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85A3";
				item="CUP_optic_Elcan_reflex_Coyote_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L85A3";
				item="UK3CB_BAF_LLM_IR_Black";
			};
		};
		
		
		
	};
	
		class UK3CB_BAF_L85A2_RIS_ELCAN3D_TAN: UK3CB_BAF_L85A2_RIS_Tan
	{
		scope = 1;
		author="Hobbs";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="CUP_optic_Elcan_reflex_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_LLM_IR_Black";
			};
		};
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L85: asdg_OpticRail1913 {
				class compatibleItems {
					CUP_optic_Elcan_reflex_pip = 1;
					UK3CB_BAF_Kite = 1;
				};
			};
			class asdg_FrontSideRail_L85: asdg_FrontSideRail {
				class compatibleItems {
					UK3CB_BAF_LLM_IR_Black = 1;
					UK3CB_BAF_LLM_Flashlight_Black = 1;
					acc_pointer_IR = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			allowedslots[] = {901};
			mass = 84;
		};
	};
	
	class UK3CB_BAF_L110A2_ELCAN3D: UK3CB_BAF_L110A2RIS_public
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L110A2";
				item="CUP_optic_Elcan_reflex_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L110A2";
				item="UK3CB_BAF_LLM_IR_Black";
			};
		};
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L110A2: asdg_OpticRail1913 {
				class compatibleItems {
					CUP_optic_Elcan_reflex_pip = 1;
					UK3CB_BAF_Kite = 1;
				};
			};
			class asdg_FrontSideRail_UK3CB_BAF_L110A2: asdg_FrontSideRail {
				class compatibleItems {
					UK3CB_BAF_LLM_IR_Black = 1;
					UK3CB_BAF_LLM_Flashlight_Black = 1;
					acc_pointer_IR = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			allowedslots[] = {901};
			mass = 176;
		};
	};
	class UK3CB_BAF_L129A1_Grippod_TA648: UK3CB_BAF_L129A1_public
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_TA648_308";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_LLM_IR_Black";
			};
			class LinkedItemsBipod
			{
				slot="UK3CB_underbarrel_rifle_slot";
				item="UK3CB_underbarrel_acc_fgrip_bipod";
			};
		};
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L129A1: asdg_OpticRail1913 {
				class compatibleItems {
					UK3CB_BAF_TA648_308 = 1;
					UK3CB_BAF_Kite = 1;
					UK3CB_BAF_MaxiKite = 1;
				};
			};
			class asdg_FrontSideRail_UK3CB_BAF_L129A1: asdg_FrontSideRail {
				class compatibleItems {
					UK3CB_BAF_LLM_IR_Black = 1;
					UK3CB_BAF_LLM_Flashlight_Black = 1;
					acc_pointer_IR = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			class UK3CB_underbarrel_rifle_slot: UK3CB_underbarrel_rifle_slot {
				class compatibleItems {
					UK3CB_underbarrel_acc_fgrip = 1;
					UK3CB_underbarrel_acc_afg = 1;
					UK3CB_underbarrel_acc_grippod = 1;
					UK3CB_underbarrel_acc_bipod = 1;
					UK3CB_underbarrel_acc_fgrip_bipod = 1;
				};
			};
			allowedslots[] = {901};
			mass = 97;
		};
	};
	class UK3CB_BAF_L128A1_Eotech: CUP_sgun_M1014_vfg
	{
		scope = 1;
		recoil = "twc_shotgun_1";
		recoilProne = "twc_rifle_762_prone";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L128A1";
				item="UK3CB_BAF_Eotech";
			};
		};
	};
	class UK3CB_BAF_L85A2_UGL_ELCAN3D: UK3CB_BAF_L85A2_UGL
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="CUP_optic_Elcan_reflex_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_LLM_IR_Black";
			};
		};
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L85: asdg_OpticRail1913 {
				class compatibleItems {
					CUP_optic_Elcan_reflex_pip = 1;
					UK3CB_BAF_Kite = 1;
				};
			};
			class asdg_FrontSideRail_L85: asdg_FrontSideRail {
				class compatibleItems {
					UK3CB_BAF_LLM_IR_Black = 1;
					UK3CB_BAF_LLM_Flashlight_Black = 1;
					acc_pointer_IR = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			allowedslots[] = {901};
			mass = 117;
		};
	};
//////////////////////////////  Others  //////////////////////////////	

	class twc_l129a1_spotter: UK3CB_BAF_L129A1_public
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L129A1";
				item="RKSL_optic_PMII_525";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
			class LinkedItemsBipod
			{
				slot="UK3CB_underbarrel_rifle_slot";
				item="UK3CB_underbarrel_acc_bipod";
			};
			class LinkedItemsMuzzle
			{
				slot="asdg_MuzzleSlot_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_Silencer_L115A3";
			};
		};
	};
	
	class UK3CB_BAF_L115A3;
	class UK3CB_BAF_L115_pub_Base: UK3CB_BAF_L115A3
	{};
	class twc_l115a3_wd_covered: UK3CB_BAF_L115_pub_Base
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L129A1";
				item="RKSL_optic_PMII_525";
			};
			class LinkedItemsMuzzle
			{
				slot="asdg_MuzzleSlot_UK3CB_BAF_L129A1";
				item="twc_acc_sd6_grey";
			};
		};
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L129A1: asdg_OpticRail1913 {
				class compatibleItems {
					RKSL_optic_PMII_525 = 1;
					UK3CB_BAF_MaxiKite = 1;
					cup_optic_an_pas_13c1 = 1;
					RKSL_optic_PMII_525_anpvs27 = 1;
					optic_tws = 1;
				};
			};
			class asdg_MuzzleSlot_UK3CB_BAF_L129A1: asdg_MuzzleSlot_762_L129_3CB {
				class compatibleItems {
					twc_acc_sd6_grey = 1;
				};
			};
			allowedslots[] = {901};
			mass = 147;
		};
	};
	class CUP_arifle_AK_Base: Rifle_Base_F
	{
		class Single;
		class Burst;
		class FullAuto;
		recoil = "twc_rifle_556_short";
		recoilProne = "twc_rifle_556_short_prone";
	};
	
	class CUP_arifle_AK102;
	class CUP_arifle_AK102_railed: CUP_arifle_AK102
	{
		//displayName = "wz.2004 Beryl";
		//magazineWell[] = {"CBA_556x45_AK"};
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
	};
	
	
	class twc_ak74_pol_base: CUP_arifle_AK102_railed
	{
		displayName = "wz.2004 Beryl";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"CUP_optic_HoloBlack", "CUP_acc_Flashlight"};
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		modes[] = {"Single","FullAuto","Burst"};
	};
	

	class twc_ak74_pol: twc_ak74_pol_base
	{
		
		displayName = "wz.2004 Beryl";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"CUP_optic_HoloBlack", "CUP_acc_Flashlight"};
		//magazineWell[] = {};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountAK";
				item="CUP_optic_HoloBlack";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountAK";
				item="cup_acc_flashlight";
			};
		};
	};
	
	class CUP_arifle_AK102_top_rail;
	class twc_ak74_pol_2_base: CUP_arifle_AK102_top_rail
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		modes[] = {"Single","FullAuto","Burst"};
	//	magazineWell[] = {};
	};
	

	class twc_ak74_pol_2: twc_ak74_pol_2_base
	{
		
		displayName = "wz.2004 Beryl";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"CUP_optic_HoloBlack", "CUP_acc_Flashlight"};
	//	magazineWell[] = {};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountAK";
				item="CUP_optic_HoloBlack";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountAK";
				item="cup_acc_flashlight";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="GripodSlot";
				item="UK3CB_BAF_SFFH";
			};
		};
	};
	
	
	class CUP_arifle_AK108_GL_top_rail;
	class twc_ak74_gp25_pol_base: CUP_arifle_AK108_GL_top_rail
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		modes[] = {"Single","FullAuto"};
	//	magazineWell[] = {};
	};
	
	

	class twc_ak74_gp25_pol: twc_ak74_gp25_pol_base
	{
		

		displayName = "wz.2004 Beryl (wz. 74)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"CUP_optic_HoloBlack", "CUP_acc_Flashlight", "CUP_muzzle_mfsup_Flashhider_556x45_Black"};
		//magazineWell[] = {};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountAK";
				item="CUP_optic_HoloBlack";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountAK";
				item="cup_acc_flashlight";
			};
		};
	};
	
	class CUP_arifle_G36A;
	class twc_MG36_eotech: CUP_arifle_G36A
	{
		displayName = "MG36";
		descriptionShort = "Light Support Weapon<br/>Caliber: 5.56x45mm NATO";
		magazines[] = {"CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag","CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag","CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag_camo","CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_camo","CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_camo","CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_camo","CUP_100Rnd_556x45_BetaCMag_wdl","CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_wdl","CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_wdl","CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_wdl","CUP_30Rnd_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Green_Tracer_556x45_G36","CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36","CUP_30Rnd_556x45_G36_camo","CUP_30Rnd_TE1_Red_Tracer_556x45_G36_camo","CUP_30Rnd_TE1_Green_Tracer_556x45_G36_camo","CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_camo","CUP_30Rnd_556x45_G36_wdl","CUP_30Rnd_TE1_Red_Tracer_556x45_G36_wdl","CUP_30Rnd_TE1_Green_Tracer_556x45_G36_wdl","CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_wdl","CUP_30Rnd_556x45_XM8","CUP_30Rnd_TE1_Red_Tracer_556x45_XM8","CUP_30Rnd_TE1_Green_Tracer_556x45_XM8","CUP_30Rnd_TE1_Yellow_Tracer_556x45_XM8"};
		class LinkedItems
		{
			class LinkedItemsBipod
			{
				slot="UnderBarrelSlot";
				item="CUP_Bipod_G36";
			};
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountG36";
				item="cup_optic_g36optics";
			};
		};
	};
	
	
	class CUP_arifle_G36A_RIS;
	class twc_G36A_acog: CUP_arifle_G36A_RIS
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountG36";
				item="cup_optic_hensoldtzo_low_rds";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="ACE_acc_pointer_red";
			};
		};
		
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountG36: CUP_TopMountG36 {
				class compatibleItems {
					cup_optic_hensoldtzo_low_rds = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					ACE_acc_pointer_red = 1;
					acc_pointer_IR = 1;
				};
			};
			allowedslots[] = {901};
			mass = 80;
		};
		
	};
	
	class CUP_arifle_G36A_AG36_RIS;
	class twc_G36A_AG36_acog: CUP_arifle_G36A_AG36_RIS
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountG36";
				item="cup_optic_hensoldtzo_low_rds";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="ACE_acc_pointer_red";
			};
		};
		
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountG36: CUP_TopMountG36 {
				class compatibleItems {
					cup_optic_hensoldtzo_low_rds = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					ACE_acc_pointer_red = 1;
					acc_pointer_IR = 1;
				};
			};
			allowedslots[] = {901};
			mass = 90;
		};
		
	};
	
	class twc_MG36_acog: CUP_arifle_MG36
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountG36";
				item="cup_optic_hensoldtzo_low_rds";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="ACE_acc_pointer_red";
			};
		};
		
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountG36: CUP_TopMountG36 {
				class compatibleItems {
					cup_optic_hensoldtzo_low_rds = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					ACE_acc_pointer_red = 1;
					acc_pointer_IR = 1;
				};
			};
			allowedslots[] = {901};
			mass = 80;
		};
		
	};
	class GMG_F;
	class GMG_20mm: GMG_F
	{
		class manual;
	};
	
	/*
	
	class mortar_82mm: CannonCore
	{
		class eventhandlers;
	};
	
	class mortar_155mm_AMOS: CannonCore
	{
		class eventhandlers;
	};
	*/
	/////////////////////////
	//adding scope turrets
	
	class ItemCore;
	
	
	class UK3CB_BAF_SUSAT: ItemCore {
	
	
		ACE_ScopeAdjust_Horizontal[] = {-4,4};
		ACE_ScopeAdjust_HorizontalIncrement = 1.5;
		ACE_ScopeAdjust_Vertical[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 1.5;
		ACE_ScopeHeightAboveRail = 4.21386;
		
	};
	
	
	
	class UK3CB_BAF_TA648: ItemCore {
	
	
		ACE_ScopeAdjust_Horizontal[] = {-4,4};
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		ACE_ScopeAdjust_Vertical[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeHeightAboveRail = 4.21386;
		
	};
	
	
	
	class UK3CB_BAF_Kite: ItemCore {
	
	
		ACE_ScopeAdjust_Horizontal[] = {-4,4};
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		ACE_ScopeAdjust_Vertical[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeHeightAboveRail = 4.21386;
		
	};
};



class cfgmagazines{
	class CUP_30Rnd_556x45_EMAG_Tan;
	class twc_CUP_30Rnd_556x45_EMAG_Tan_tracer: CUP_30Rnd_556x45_EMAG_Tan
	{
		tracersEvery = 1;
		displayName="30Rnd 5.56mm EMAG (Tan Tracer)";
		displayNameShort = "Tracer";
		picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_coyote_ca.paa";
		modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_coyote_co.paa"};
		hiddenSelections[] = {"Camo1"};
	};
	class 20Rnd_762x51_Mag;
	class UK3CB_BAF_762_L42A1_20Rnd_T: 20Rnd_762x51_Mag
	{
		modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_20Rnd_HK417.p3d";
		modelSpecialIsProxy = 1;
	};
	class UK3CB_BAF_762_L42A1_20Rnd: 20Rnd_762x51_Mag
	{
		modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_20Rnd_HK417.p3d";
		modelSpecialIsProxy = 1;
	};
		
		class UGL_FlareGreen_F;
		class twc_l5a4_g : UGL_FlareGreen_F
		{
			displayName="L5A4 Round (Green)";
		};	
		class UGL_Flarered_F;
		class twc_l5a4_r : UGL_Flarered_F
		{
			displayName="L5A4 Round (Red)";
		};	
		class UGL_Flarewhite_F;
		class twc_l5a4_w : UGL_Flarewhite_F
		{
			displayName="L5A4 Round (White)";
		};
		// when 3cb does proxies, this is gonna have to go
		class UK3CB_BAF_762_100Rnd_T;
		
		class UK3CB_BAF_762_100Rnd;
		
		class 200Rnd_20mm_G_belt;
		class twc_200Rnd_20mm_G_belt_1: 200Rnd_20mm_G_belt
		{
			ammo = "twc_G_20mm_HE";
			initSpeed = 350;
		};
};

class cfgammo
{
	class B_127x99_Ball;
	class twc_B_steelflechette: B_127x99_Ball
	{
		caliber = 7;
		ace_caliber = 30;
	};
	
	class FlareBase;
	class F_40mm_Red: FlareBase
	{
		lightColor[] = {0.75,0.5,0.5,0};
		brightness  = 75;
		intensity = 1000000;
		coefgravity = 0.15;
		timeToLive = 160;
	};
	
	class F_40mm_white: FlareBase
	{
		lightColor[] = {0.75,0.75,0.75,0};
		brightness  = 75;
		intensity = 1000000;
		coefgravity = 0.15;
		timeToLive = 160;
	};
	
	class F_40mm_green: FlareBase
	{
		lightColor[] = {0.5,0.75,0.5,0};
		brightness  = 75;
		intensity = 1000000;
		coefgravity = 0.15;
		timeToLive = 160;
	};
	class G_20mm_HE;
	class twc_G_20mm_HE: G_20mm_HE
	{
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,0.7,250};
	};
	class R_PG32V_F;
	
	class CUP_B_762x51_Tracer_Red;
	class CUP_B_762x51_Tracer_Red_Splash: CUP_B_762x51_Tracer_Red
	{
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
	};
	
	
};