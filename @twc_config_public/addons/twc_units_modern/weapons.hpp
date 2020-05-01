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
class rhs_western_rifle_scopes_slot_short;
class rhs_western_rifle_laser_slot_top;
class rhs_western_rifle_gripod_slot;
class rhs_western_rifle_muzzle_slot;
class asdg_MuzzleSlot_556_3CB;
class asdg_MuzzleSlot_762;
class rhs_western_rifle_underbarrel_slot;
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
	
	class rhsusf_iotv_ocp_base;
	class rhsusf_plateframe_sapi: rhsusf_iotv_ocp_base
	{};
	class rhsusf_plateframe_rifleman: rhsusf_plateframe_sapi
	{};
	class twc_rhsusf_plateframe_rifleman_mtp: rhsusf_plateframe_rifleman
	{
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa","rhsusf\addons\rhsusf_weapons3\mk17\data\mk17_co.paa"};
	};
	class twc_rhsusf_plateframe_rifleman_aor1: rhsusf_plateframe_rifleman
	{
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa","rhsusf\addons\rhsusf_weapons3\mk17\data\mk17_co.paa"};
		
	};
	
	class rhsusf_plateframe_machinegunner: rhsusf_plateframe_rifleman
	{};
	
	class twc_rhsusf_plateframe_pointman_aor1: rhsusf_plateframe_machinegunner
	{
		displayName = "Plateframe (Pointman)";
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa","rhsusf\addons\rhsusf_weapons3\mk17\data\mk17_co.paa"};
	};
	
	class rhsusf_plateframe_marksman: rhsusf_plateframe_rifleman
	{};
	
	class twc_rhsusf_plateframe_marskman_aor1: rhsusf_plateframe_marksman
	{
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa","rhsusf\addons\rhsusf_weapons3\mk17\data\mk17_co.paa"};
	};
	class rhsusf_plateframe_teamleader: rhsusf_plateframe_rifleman
	{};
	
	class twc_rhsusf_plateframe_SL_aor1: rhsusf_plateframe_teamleader
	{
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa","rhsusf\addons\rhsusf_weapons3\mk17\data\mk17_co.paa"};
	};
	class twc_rhsusf_plateframe_SL_mtp: rhsusf_plateframe_teamleader
	{
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa","rhsusf\addons\rhsusf_weapons3\mk17\data\mk17_co.paa"};
	};
	class rhsusf_plateframe_grenadier;
	class twc_rhsusf_plateframe_grenadier_mtp: rhsusf_plateframe_grenadier
	{
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa","rhsusf\addons\rhsusf_weapons3\mk17\data\mk17_co.paa"};
	};
	
	class rhsusf_mbav_medic;
	class twc_rhsusf_mbav_medic_aor1: rhsusf_mbav_medic
	{
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\digicamo_co.jpg","rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"};
	};
	
	class rhsusf_mbav_rifleman;
	class twc_rhsusf_mbav_rifleman_mtp: rhsusf_mbav_rifleman
	{
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"};
	};
	class rhsusf_mbav_grenadier;
	class twc_rhsusf_mbav_grenadier_mtp: rhsusf_mbav_grenadier
	{
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"};
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
	class rhsusf_weap_MP7A2;
	class rhsusf_weap_MP7A2_desert: rhsusf_weap_MP7A2
	{
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\digicamo_co.jpg","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_buis_co.paa","twc_units_modern\textures\digicamo_co.jpg"};
		
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_eotech";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="cup_acc_anpeq_15_flashlight_tan_f";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					cup_optic_microt1_low_coyote = 1;
					rhsusf_acc_eotech = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					acc_pointer_IR = 1;
					cup_acc_anpeq_15_flashlight_tan_l = 1;
					cup_acc_anpeq_15_flashlight_tan_f = 1;
					cup_acc_anpeq_15_flashlight_tan_v = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			allowedslots[] = {701,901};
			mass = 35;
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
				item="rhsusf_acc_t1_low";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="cup_acc_anpeq_15_flashlight_black_l";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_t1_low = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					acc_pointer_IR = 1;
					cup_acc_anpeq_15_flashlight_black_l = 1;
					cup_acc_anpeq_15_flashlight_black_f = 1;
					cup_acc_anpeq_15_flashlight_black_v = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			allowedslots[] = {701,901};
			mass = 35;
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
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_t1_high = 1;
					cup_optic_compm2_low = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
				};
			};
			allowedslots[] = {701,901};
			mass = 35;
		};
	};

	class CUP_arifle_mk18_black;
	class twc_L119A2_base: CUP_arifle_mk18_black
	{
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_mk18_d_ca.paa";
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\mk18_black_co.jpg"};
		displayName = "L119A2 CQB";
		descriptionShort = "Assaulter Variant<br/>Short Barrel<br/>Increased Rate of Fire";
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_EMAG_Tan","twc_CUP_30Rnd_556x45_EMAG_Tan_tracer","CUP_30Rnd_556x45_Emag","CUP_60Rnd_556x45_SureFire","CUP_20Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green","CUP_100Rnd_556x45_BetaCMag_ar15","CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15","CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_ar15","CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_ar15"};
		class Single:Mode_SemiAuto {
			//sounds[] = {"StandardSound"};
			dispersion = 0.002;
			class StandardSound {
				soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet","RHSUSF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSGREF_sd_sbr_Shot_SoundSet","RHSGREF_sd_mmg1_Tail_SoundSet"};
			};
		};
		class Burst:Mode_Burst {
			//sounds[] = {"StandardSound"};
			dispersion = 0.002;
			class StandardSound {
				soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet","RHSUSF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSGREF_sd_sbr_Shot_SoundSet","RHSGREF_sd_mmg1_Tail_SoundSet"};
			};		
		};
		class FullAuto:Mode_FullAuto {
			//sounds[] = {"StandardSound"};
			reloadTime = 0.06;
			dispersion = 0.002;
			class StandardSound {
				soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet","RHSUSF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSGREF_sd_sbr_Shot_SoundSet","RHSGREF_sd_mmg1_Tail_SoundSet"};
			};	
		};
	};
	
	class twc_L119A2_10: twc_L119A2_base
	{
		class weaponslotsinfo;
	};
	
	//tiered approach for jsrs and non-jsrs compat. the adjoining tier twc_L119A2_CQB is modified in the jsrs file
	class twc_L119A2_10_Base: twc_L119A2_10
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
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
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_m4a1_blockII_d_ca.paa";
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
		model = "\rhsusf\addons\rhsusf_weapons3\M4BII\m4a1_blockII.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_afg.rtm"};
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\m4a1_actual_digi_co.jpg","twc_units_modern\textures\rhs_block2rail_digi_co.jpg","rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa","rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa","twc_units_modern\textures\digicamo_co.jpg","rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa","\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa"};
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
				item="rhsusf_acc_sf3p556";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="cup_acc_anpeq_15_top_flashlight_tan_f";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="GripodSlot";
				item="rhsusf_acc_grip2_tan";
			};
		};
		
		class WeaponSlotsInfo
		{
			class GripodSlot: rhs_western_rifle_gripod_slot {
				class compatibleItems {
					rhsusf_acc_grip2_tan = 1;
				};
			};
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					cup_optic_acog_ta01nsn_rmr_tan_pip = 1;
					CUP_optic_Elcan_reflex_pip = 1;
					UK3CB_BAF_Kite = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
					rhsusf_acc_sf3p556 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
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
			mass = 84.56;
		};
		
	};
	
	class TWC_UK3CB_BAF_L119A2_14_ACOG_black: TWC_UK3CB_BAF_L119A2_14_Base
	{
		displayName = "L119A2 (ACOG)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa","\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_block2rail_b_co.paa","\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa","\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa","\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa"};
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
				item="rhsusf_acc_sf3p556";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="cup_acc_anpeq_15_top_flashlight_tan_f";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="GripodSlot";
				item="rhsusf_acc_grip2_tan";
			};
		};
		
		class WeaponSlotsInfo
		{
			class GripodSlot: rhs_western_rifle_gripod_slot {
				class compatibleItems {
					rhsusf_acc_grip2_tan = 1;
				};
			};
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					CUP_optic_Elcan_reflex_pip = 1;
					CUP_optic_ACOG_TA01NSN_RMR_Black_PIP = 1;
					UK3CB_BAF_Kite = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
					rhsusf_acc_sf3p556 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
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
			mass = 84.56;
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
				item="rhsusf_acc_t1_high";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="rhsusf_acc_sf3p556";
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
					rhsusf_acc_t1_high = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
					rhsusf_acc_sf3p556 = 1;
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
				item="rhsusf_acc_g33_t1";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="rhsusf_acc_sf3p556";
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
					rhsusf_acc_g33_t1 = 1;
					rhsusf_acc_g33_t1_flip = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
					rhsusf_acc_sf3p556 = 1;
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
				item="rhsusf_acc_sf3p556";
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
					rhsusf_acc_sf3p556 = 1;
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
				item="rhsusf_acc_t1_high";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="rhsusf_acc_sf3p556";
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
					rhsusf_acc_t1_high = 1;
					rhsusf_acc_eotech_xps3 = 1;
					rksl_optic_eot552_c = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_rotex5_grey = 1;
					rhsusf_acc_sf3p556 = 1;
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
	
	class CUP_lmg_Mk48_nohg_tan;
	class TWC_CUP_lmg_Mk48_nohg_tan_optics: CUP_lmg_Mk48_nohg_tan
	{
		magazines[] = {"rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51_m61_ap","rhsusf_50Rnd_762x51_m62_tracer","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m82_blank","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m82_blank","rhsusf_50Rnd_762x51_m993","rhsusf_100Rnd_762x51_m993","UK3CB_BAF_762_100Rnd","UK3CB_BAF_762_100Rnd_Blank","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_200Rnd","UK3CB_BAF_762_200Rnd_Blank","UK3CB_BAF_762_200Rnd_T"};
		recoil = "twc_mg_762";
		recoilProne = "twc_mg_prone";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountMk18";
				item="rhsusf_acc_su230a_c";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="MuzzleSlot";
				item="twc_acc_nt4_tan";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountMk18";
				item="rhsusf_acc_anpeq16a_light";
			};
		};
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountMk18: CUP_PicatinnyTopMount {
				class compatibleItems {
					rhsusf_acc_su230a_c = 1;
					rhsusf_acc_eotech_xps3 = 1;
					rksl_optic_eot552_c = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_nt4_tan = 1;
				};
			};
			class CUP_PicatinnySideMountMk18: CUP_PicatinnySideMount {
				class compatibleItems {
					rhsusf_acc_anpeq16a_light = 1;
					rhsusf_acc_anpeq16a = 1;
					acc_pointer_IR = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			allowedslots[] = {901};
			mass = 180.7;
		};
	};
	
	class CUP_arifle_HK417_20_Desert;
	
	
	class twc_HK417_base: CUP_arifle_HK417_20_Desert
	{
		scope = 1;
		magazines[] = {"UK3CB_BAF_762_L42A1_20Rnd","UK3CB_BAF_762_L42A1_20Rnd_T","CUP_20Rnd_762x51_HK417_Camo_Desert","CUP_20Rnd_762x51_HK417_Camo_Wood","CUP_20Rnd_762x51_HK417","CUP_20Rnd_TE1_Red_Tracer_762x51_HK417","CUP_20Rnd_TE1_Green_Tracer_762x51_HK417","CUP_20Rnd_TE1_Yellow_Tracer_762x51_HK417"};
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class Single:Mode_SemiAuto {
			dispersion = 0.0004;
			class StandardSound {
				soundSetShot[] = {"RHSUSF_m14_Closure_SoundSet","RHSUSF_m14_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_m16_Closure_SoundSet","RHSUSF_m14_ShotSD_SoundSet","RHSUSF_Rifle1_SD_Tail_SoundSet"};
			};
		};
		class Burst:Mode_Burst {
			dispersion = 0.0004;
			class StandardSound {
				soundSetShot[] = {"RHSUSF_m14_Closure_SoundSet","RHSUSF_m14_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_m16_Closure_SoundSet","RHSUSF_m14_ShotSD_SoundSet","RHSUSF_Rifle1_SD_Tail_SoundSet"};
			};		
		};
		class FullAuto:Mode_FullAuto {
			dispersion = 0.0004;
			class StandardSound {
				soundSetShot[] = {"RHSUSF_m14_Closure_SoundSet","RHSUSF_m14_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_m16_Closure_SoundSet","RHSUSF_m14_ShotSD_SoundSet","RHSUSF_Rifle1_SD_Tail_SoundSet"};
			};	
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
		class WeaponSlotsInfo
		{
			class CowsSlot: CUP_PicatinnyTopMount {
				class compatibleItems {
					RKSL_optic_PMII_312_des = 1;
					cup_optic_an_pas_13c1 = 1;
					rhsusf_acc_premier_anpvs27 = 1;
					UK3CB_BAF_MaxiKite = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762 {
				class compatibleItems {
					twc_acc_nt4_tan = 1;
				};
			};
			class UnderBarrelSlot: asdg_UnderSlot {
				class compatibleItems {
					CUP_bipod_Harris_1A2_L = 1;
				};
			};
			class twc_hk417_siderail {
				class compatibleItems {
					CUP_acc_ANPEQ_15_Top_Flashlight_Tan_V = 1;
					CUP_acc_ANPEQ_15_Top_Flashlight_Tan_f = 1;
					CUP_acc_ANPEQ_15_Top_Flashlight_Tan_l = 1;
				};
			};
			allowedslots[] = {901};
			mass = 80;
		};
	};
	
	class rhsusf_opscore_cover;
	class rhsusf_opscore_mc_cover_pelt_cam: rhsusf_opscore_cover
	{
		ace_hearing_protection = 0.75;
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","twc_units_modern\textures\fs_cover_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class rhsusf_opscore_mc_cover: rhsusf_opscore_cover
	{
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","","","","twc_units_modern\textures\fs_cover_co.paa",""};
	};
	class rhsusf_opscore_mc_cover_pelt: rhsusf_opscore_cover
	{
		ace_hearing_protection = 0.75;
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa","","","twc_units_modern\textures\fs_cover_co.paa",""};
	};
	
	//duplicated suppressor classes, to enable whitelisting of certain guns versus blacklisting all of them
	class rhsusf_acc_rotex5_grey;
	class twc_acc_rotex5_grey: rhsusf_acc_rotex5_grey
	{
	};
	class rhsgref_sdn6_suppressor;
	class twc_acc_sd6_grey: rhsgref_sdn6_suppressor
	{
	};
	class rhsusf_acc_nt4_black;
	class twc_acc_nt4_black: rhsusf_acc_nt4_black
	{
	};
	class rhsusf_acc_nt4_tan;
	class twc_acc_nt4_tan: rhsusf_acc_nt4_tan
	{
		descriptionShort = "Suppressor<br/>Used on: HK417";
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
	
	class rhsusf_spcs_ocp_teamleader;
	class twc_mtp_spcs_SL: rhsusf_spcs_ocp_teamleader
	{
		displayName = "SPCS MTP (SL)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	class twc_aor1_spcs_SL: rhsusf_spcs_ocp_teamleader
	{
		displayName = "SPCS AOR1 (SL)";
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	class twc_trp_spcs_SL: rhsusf_spcs_ocp_teamleader
	{
		displayName = "SPCS Trepentarn (SL)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	class twc_flk_spcs_SL: rhsusf_spcs_ocp_teamleader
	{
		displayName = "SPCS Flecktarn (SL)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	
	class rhsusf_spcs_ocp_sniper;
	class twc_mtp_spcs_Marksman: rhsusf_spcs_ocp_sniper
	{
		displayName = "SPCS MTP (Marksman)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	
	class rhsusf_spcs_ocp_medic;
	class twc_mtp_spcs_medic: rhsusf_spcs_ocp_medic
	{
		displayName = "SPCS MTP (Medic)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	class rhsusf_spcs_ocp;
	class rhsusf_spcs_ocp_saw : rhsusf_spcs_ocp
	{
		class iteminfo;
	};
	class twc_mtp_spcs_mg: rhsusf_spcs_ocp_saw
	{
		displayName = "SPCS MTP (MG)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
		class iteminfo: iteminfo
		{
			containerClass = "Supply200";
		};
	};
	class twc_trp_spcs_MG: rhsusf_spcs_ocp_saw
	{
		displayName = "SPCS Trepentarn (MG)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	class twc_flk_spcs_MG: rhsusf_spcs_ocp_saw
	{
		displayName = "SPCS Flecktarn (MG)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	
	class rhsusf_spcs_ocp_rifleman_alt;
	class twc_trp_spcs_rif: rhsusf_spcs_ocp_rifleman_alt
	{
		displayName = "SPCS Trepentarn (Rifleman)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_tropen_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	class twc_flk_spcs_rif: rhsusf_spcs_ocp_rifleman_alt
	{
		displayName = "SPCS Flecktarn (Rifleman)";
		hiddenSelectionsTextures[] = {"cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","cup\weapons\cup_weapons_backpacks\data\backpack_us_fleck_co.paa","rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa","rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	};
	
	class rhsusf_spc_rifleman;
	class twc_mtp_spc_rifleman: rhsusf_spc_rifleman
	{
		displayName = "SPC MTP (Rifleman)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa"};
	};
	
	class rhsusf_spc_squadleader;
	class twc_aor1_spc_squadleader: rhsusf_spc_squadleader
	{
		displayName = "SPC AOR1";
		hiddenSelectionsTextures[] = {"twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg","twc_units_modern\textures\digicamo_co.jpg"};
	};
	class twc_mtp_spc_squadleader: rhsusf_spc_squadleader
	{
		displayName = "SPC MTP";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa"};
	};
	class twc_oli_spc_squadleader: rhsusf_spc_squadleader
	{
		displayName = "SPC Olive";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa"};
	};
	
	class rhsusf_spc_iar;
	class twc_mtp_spc_rifleman_alt: rhsusf_spc_iar
	{
		displayName = "SPC MTP (Rifleman Alt)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa"};
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
			fired = "if (!(isplayer (_this select 0))) then {[_this select 6, _this select 0] call twc_fnc_aps;};";
		};
	};
	class Launcher: LauncherCore
	{
		class EventHandlers: EventHandlers {
			fired = "if (!(isplayer (_this select 0))) then {[_this select 6, _this select 0] call twc_fnc_aps;};";
		};
	};
	class RocketPods: LauncherCore
	{
		class EventHandlers: EventHandlers {
			fired = "if (!(isplayer (_this select 0))) then {[_this select 6, _this select 0] call twc_fnc_aps;};";
		};
	};
	
	
	class Launcher_Base_F: Launcher
	{
		class EventHandlers;
	};
	class rhs_weap_maaws: Launcher_Base_F
	{
		magazines[] = {"rhs_mag_maaws_HEAT","rhs_mag_maaws_HEDP","rhs_mag_maaws_HE","rhs_mag_maaws_flechette"};
		class EventHandlers: EventHandlers {
			fired = "params['_unit','_weapon','_muzzle','_mod','_ammo','_magazine','_projectile']; if(isNull _projectile) exitwith {}; if(_ammo != 'rhs_ammo_maaws_flechette') exitwith { };  _velocity = velocity _projectile;_magnatude = vectorMagnitude _velocity; _velocityNormal = vectorNormalized  _velocity;_dir = acos(_velocityNormal select 1); deletevehicle _projectile;for '_i' from 1 to 250 do {_dX = (_velocityNormal select 0) + (random(0.05*2)-0.05);  _dX = (_velocityNormal select 0) + (random(0.05*2)-0.05); _dY = (_velocityNormal select 1) + (random(0.05*2)-0.05);_dZ = (_velocityNormal select 2) + (random(0.05*2)-0.05);  _bVel = (vectorNormalized [_dX,_dY,_dZ]) vectorMultiply _magnatude;_bullet = 'twc_B_steelflechette' createVehiclelocal [0,0,1000];_bullet setShotParents [vehicle _unit,_unit];_bullet setVelocity _bVel; _bullet setposatl getposatl _projectile;};";
		};
	};
	
	class launch_NLAW_F: Launcher_Base_F
	{
		class EventHandlers;
	};
	
	class ACE_launch_NLAW_ready_F: launch_NLAW_F
	{
		class EventHandlers: EventHandlers {
			fired = "_this call CBA_fnc_firedDisposable;if (!(isplayer (_this select 0))) then {[_this select 6, _this select 0] call twc_fnc_aps;};";
		};
	};
	
	class CUP_launch_RPG7V: Launcher_Base_F
	{
		reloadAction = "RHS_GestureReloadRPG7";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.562341,1,50};
	};
	class rhs_weap_rpg7: Launcher_Base_F
	{
		class EventHandlers: EventHandlers {
			fired = "if (!(isplayer (_this select 0))) then {[_this select 6, _this select 0] call twc_fnc_aps;};if (hasinterface) exitwith {};_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 10) - 5, (velocity _bullet select 1) + (random 10) - 5, 	(velocity _bullet select 2) + (random 4) - 2];";
		};
		scope=2;
		aiDispersionCoefX=1.03;
		aiDispersionCoefY=1.05;
		dispersion = 0.02;
		minrange=50;
		minrangeprobab=0.4;
		midrange=300;
		midrangeprobab=0.3;
		maxrange=500;
		maxrangeprobab=0.9;
	};
	
	class rhs_weap_rpg26: Launcher_Base_F
	{
		class EventHandlers: EventHandlers {
			fired = "if (hasinterface) exitwith {};_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 18) - 9, (velocity _bullet select 1) + (random 18) - 9, 	(velocity _bullet select 2) + (random 2) - 1];";
		};
		scope=2;
		aiDispersionCoefX=1.03;
		aiDispersionCoefY=1.05;
		dispersion = 0.02;
		minrange=10;
		minrangeprobab=0.4;
		midrange=150;
		midrangeprobab=0.6;
		maxrange=300;
		maxrangeprobab=0.3;
	};
	class rhs_weap_panzerfaust60: Launcher_Base_F
	{
		displayname = "RPG-76";
		initSpeed = 745;
		mass = 2.1;
	};
	
	class rhs_weap_panzerfaust60_used: rhs_weap_panzerfaust60
	{
		displayname = "RPG-76 (used)";
	};
	
	class rhs_weap_nsvt;
	class rhs_weap_nsvt_effects: rhs_weap_nsvt
	{
		class manual;
	};
	class rhs_weap_kord: rhs_weap_nsvt_effects
	{
		class manual: manual
		{
			class standardsound;
		};
		class close: manual
		{
			class standardsound;
		};
		class far: close
		{
			class standardsound;
		};
		class medium: close
		{
			class standardsound;
		};
		class short: close
		{
			class standardsound;
		};
	};
	
	class twc_rhs_weap_kord_20: rhs_weap_kord
	{
		magazines[] = {"200Rnd_20mm_G_belt"};
		reloadtime = 1.2;
		displayName = "KORD (20MM)";
		class manual: manual
		{
			reloadtime = 1.2;
			class standardsound: standardsound
			{
				soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_120mm_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
			};
		};
		class close: close
		{
			reloadtime = 1.2;
			class standardsound: standardsound
			{
				soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_120mm_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
			};
		};
		class far: far
		{
			reloadtime = 1.2;
			class standardsound: standardsound
			{
				soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_120mm_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
			};
		};
		class medium: medium
		{
			reloadtime = 1.2;
			class standardsound: standardsound
			{
				soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_120mm_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
			};
		};
		class short: short
		{
			reloadtime = 1.2;
			class standardsound: standardsound
			{
				soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_120mm_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
				//soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_DSHKM_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
			};
		};
	};
	
	class cannoncore;
	class gatling_30mm: CannonCore
	{
		class EventHandlers;
		class Mode_FullAuto;
		class manual;
	};
	class rhs_weap_M197: gatling_30mm
	{
		class manual:gatling_30mm
		{
			dispersion=0.012;
		};
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.6) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 14) - 7, (velocity _bullet select 1) + (random 14) - 7, 	(velocity _bullet select 2) + (random 10) - 5];};twc_gpmglastfired = time;";
		};
	};
	
	class rhs_weap_M230: rhs_weap_M197
	{
		class manual:manual
		{
			dispersion=0.012;
		};
	};
	
	class Rifle_Long_Base_F;
	class rhs_pkp_base: Rifle_Long_Base_F
	{
		twc_openbolt = 1;
		twc_openbolt_coef = 1.1;
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
	
	class rhs_weap_SCAR_Base: arifle_MX_Base_F
	{};
	class rhs_weap_SCAR_H_Base: rhs_weap_SCAR_Base
	{};
	class rhs_weap_SCAR_H_STD_Base: rhs_weap_SCAR_H_Base
	{};
	class rhs_weap_mk17_STD: rhs_weap_SCAR_H_STD_Base
	{};
	
	class twc_mk17_elcan: rhs_weap_mk17_STD
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_su230a_mrds_c";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhsusf_acc_anpeq16a";
			};
		};
		
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_su230a_mrds_c = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					twc_acc_nt4_tan = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq16a_light = 1;
					rhsusf_acc_anpeq16a = 1;
					acc_pointer_IR = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			allowedslots[] = {901};
			mass = 94.56;
		};
		
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
	
	
	class rhs_weap_ak74m_Base_F: Rifle_Base_F
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};
	
	class rhs_weap_saw_base: Rifle_Base_F
	{
		twc_openbolt = 1;
	};
	
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		twc_openbolt = 1;
	};
		
	
	class rhs_weap_lmg_minimipara;
	class rhs_weap_lmg_minimi_railed: rhs_weap_lmg_minimipara
	{
		class FullAuto;
	};
	
	class rhs_weap_m249_pip_L: rhs_weap_lmg_minimi_railed
	{
		recoil = "twc_mg_556";
		recoilProne = "twc_mg_556_prone";
		class FullAuto:FullAuto {
			dispersion = 0.003;
		};
	};
	class rhs_weap_m249_pip;
	class twc_HK_MG4: rhs_weap_m249_pip
	{
		displayname = "HK MG4";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_g33_xps3";
			};
		};
	};
	class rhs_weap_mg42;
	class twc_HK_MG3: rhs_weap_mg42
	{
		displayname = "HK MG3";
		twc_openbolt = 1;
		magazines[] = {"rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51_m61_ap","rhsusf_50Rnd_762x51_m62_tracer","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m82_blank","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m82_blank","rhsusf_50Rnd_762x51_m993","rhsusf_100Rnd_762x51_m993","UK3CB_BAF_762_100Rnd","UK3CB_BAF_762_100Rnd_Blank","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_200Rnd","UK3CB_BAF_762_200Rnd_Blank","UK3CB_BAF_762_200Rnd_T"};
	};
	
	class rhs_weap_M590_5RD: Rifle_Base_F
	{
		recoil = "twc_shotgun_1";
		recoilProne = "twc_rifle_762_prone";
	};
	class rhs_weap_M249_base;
	class rhs_weap_m240_base: rhs_weap_M249_base
	{
		recoil = "twc_mg_762";
		recoilProne = "twc_mg_prone";
		magazines[] = {"rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51_m61_ap","rhsusf_50Rnd_762x51_m62_tracer","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m82_blank","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m82_blank","rhsusf_50Rnd_762x51_m993","rhsusf_100Rnd_762x51_m993","UK3CB_BAF_762_100Rnd","UK3CB_BAF_762_100Rnd_Blank","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_200Rnd","UK3CB_BAF_762_200Rnd_Blank","UK3CB_BAF_762_200Rnd_T"};
		
	};
	class rhs_weap_m240B: rhs_weap_m240_base
	{
		class Manual;
	};
	class rhs_weap_m240B_twcslow_base: rhs_weap_m240B
	{
		displayname = "M240B (Slow)";
		class Manual: Manual
		{
			reloadtime = 0.14;
		};
	};
	class rhs_weap_m240B_twcslow: rhs_weap_m240B_twcslow_base
	{
		twc_openbolt = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_ELCAN";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15A";
			};
		};
	};
	
	
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		reloadAction = "GestureReloadSPAR_01";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",1,0.85,10};
		class Single:Single {
			dispersion = 0.001;
		};
		class FullAuto:FullAuto {
			dispersion = 0.001;
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
		class Single:Single {
			dispersion = 0.001;
		};
		class FullAuto:FullAuto {
			dispersion = 0.001;
		};
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
				item="rhsusf_acc_premier";
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
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L129A1: asdg_OpticRail1913 {
				class compatibleItems {
					rhsusf_acc_premier = 1;
					UK3CB_BAF_Kite = 1;
					UK3CB_BAF_MaxiKite = 1;
				};
			};
			class asdg_FrontSideRail_UK3CB_BAF_L129A1: asdg_FrontSideRail {
				class compatibleItems {
					UK3CB_BAF_LLM_Flashlight_Black = 1;
					UK3CB_BAF_LLM_IR_Black = 1;
					acc_pointer_IR = 1;
					ACE_acc_pointer_red = 1;
				};
			};
			class asdg_MuzzleSlot_UK3CB_BAF_L129A1: asdg_MuzzleSlot_762_L129_3CB {
				class compatibleItems {
					UK3CB_BAF_Silencer_L115A3 = 1;
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
					rhsusf_acc_premier_anpvs27 = 1;
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
	
	class rhs_weap_rsp30_green;
		class twc_L5A4_green: rhs_weap_rsp30_green
	{
		scope = 2;
		displayname = "L5A4 Parachuting Flare Green";
		descriptionShort = "Rocket Hand Fired Illuminating Para";
		magazines[] = {"twc_l5a4_g"};
	};
	
		class rhs_weap_rsp30_red;
		class twc_L5A4_red: rhs_weap_rsp30_red
	{
		scope = 2;
		displayname = "L5A4 Parachuting Flare Red";
		descriptionShort = "Rocket Hand Fired Illuminating Para";
		magazines[] = {"twc_l5a4_r"};
	

	};
	
			class rhs_weap_rsp30_white;
		class twc_L5A4_white: rhs_weap_rsp30_white
	{
		scope = 2;
		displayName = "L5A4 Parachuting Flare White";
		descriptionShort = "Rocket Hand Fired Illuminating Para";
		magazines[] = {"twc_l5a4_w"};
	};
	
	
	class CUP_arifle_AK_Base: Rifle_Base_F
	{
		class Single;
		class Burst;
		class FullAuto;
		recoil = "twc_rifle_556_short";
		recoilProne = "twc_rifle_556_short_prone";
	};
	
	class CUP_arifle_AK102: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {
					"RHS_AK74_Shot_SoundSet",
					"RHS_Rifle1_Tail_SoundSet"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {
					"RHS_AK74_Shot_SoundSet",
					"RHS_Rifle1_Tail_SoundSet"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {
					"RHS_AK74_Shot_SoundSet",
					"RHS_Rifle1_Tail_SoundSet"};
			};			
		};
	};
	class CUP_arifle_AK102_railed: CUP_arifle_AK102
	{
		magazines[] = {"twc_rhsgref_30rnd_556x45_m21", "twc_rhsgref_30rnd_556x45_m21_t"};
		displayName = "wz.2004 Beryl";
		//magazineWell[] = {"CBA_556x45_AK"};
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
	};
	
	
	class twc_ak74_pol_base: CUP_arifle_AK102_railed
	{
		displayName = "wz.2004 Beryl";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"rhsusf_acc_eotech_552", "rhs_acc_2dpZenit"};
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		modes[] = {"Single","FullAuto","Burst"};
	};
	

	class twc_ak74_pol: twc_ak74_pol_base
	{
		
		displayName = "wz.2004 Beryl";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"rhsusf_acc_eotech_552", "rhs_acc_2dpZenit"};
		//magazineWell[] = {};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountAK";
				item="rhsusf_acc_eotech_552";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountAK";
				item="cup_acc_flashlight";
			};
		};
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountAK: CUP_PicatinnyTopShortMount {
				class compatibleItems {
					rhsusf_acc_eotech_552 = 1;
				};
			};
			class CUP_PicatinnySideMountAK: CUP_PicatinnySideMount {
				class compatibleItems {
					cup_acc_flashlight = 1;
				};
			};
			allowedslots[] = {901};
			mass = 70.4;
		};
	};
	
	class CUP_arifle_AK102_top_rail;
	class twc_ak74_pol_2_base: CUP_arifle_AK102_top_rail
	{
		
		magazines[] = {"twc_rhsgref_30rnd_556x45_m21", "twc_rhsgref_30rnd_556x45_m21_t"};
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		modes[] = {"Single","FullAuto","Burst"};
	//	magazineWell[] = {};
	};
	

	class twc_ak74_pol_2: twc_ak74_pol_2_base
	{
		
		displayName = "wz.2004 Beryl";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"rhsusf_acc_eotech_552", "rhs_acc_2dpZenit"};
	//	magazineWell[] = {};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountAK";
				item="rhsusf_acc_eotech_552";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountAK";
				item="cup_acc_flashlight";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="GripodSlot";
				item="rhsusf_acc_sf3p556";
			};
		};
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountAK: CUP_PicatinnyTopShortMount {
				class compatibleItems {
					rhsusf_acc_eotech_552 = 1;
				};
			};
			class CUP_PicatinnySideMountAK: CUP_PicatinnySideMount {
				class compatibleItems {
					cup_acc_flashlight = 1;
				};
			};
			allowedslots[] = {901};
			mass = 70.4;
		};
	};
	
	
	class CUP_arifle_AK108_GL_top_rail;
	class twc_ak74_gp25_pol_base: CUP_arifle_AK108_GL_top_rail
	{
		
		magazines[] = {"twc_rhsgref_30rnd_556x45_m21", "twc_rhsgref_30rnd_556x45_m21_t"};
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		modes[] = {"Single","FullAuto"};
	//	magazineWell[] = {};
	};
	
	

	class twc_ak74_gp25_pol: twc_ak74_gp25_pol_base
	{
		

		displayName = "wz.2004 Beryl (wz. 74)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"rhsusf_acc_eotech_552", "rhsusf_acc_wmx_bk", "rhs_acc_dtk1"};
		//magazineWell[] = {};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountAK";
				item="rhsusf_acc_eotech_552";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountAK";
				item="cup_acc_flashlight";
			};
		};
		class WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountAK: CUP_PicatinnyTopShortMount {
				class compatibleItems {
					rhsusf_acc_eotech_552 = 1;
				};
			};
			class CUP_PicatinnySideMountAK: CUP_PicatinnySideMount {
				class compatibleItems {
					cup_acc_flashlight = 1;
				};
			};
			allowedslots[] = {901};
			mass = 70.4;
		};
	};
	
	class twc_rpg_pol: rhs_weap_rpg7
	{
		
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_acc_pgo7v3";
			};
		};
	};
	
	class twc_rhs_rpg7_ins: rhs_weap_rpg7
	{
		
		class EventHandlers: EventHandlers {
			fired = "_mult = 1; if (!isserver) then {_mult = 0.5};_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (((random 24) - 12) * _mult), (velocity _bullet select 1) + (((random 24) - 12) * _mult), 	(velocity _bullet select 2) + (((random 4) - 2) * _mult)];";
		};
	};
	
	
	class rhs_weap_svdp_npz;
	class twc_pol_svd: rhs_weap_svdp_npz
	{
		
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_M8541_low";
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
	

	
	class rhs_weap_m4a1;
	class twc_m4_acog_grip_laser: rhs_weap_m4a1
	{
		
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_acog2";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15_bk";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_grip1";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					cup_optic_acog2 = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhsusf_acc_anpeq15_bk = 1;
				};
			};
			class GripodSlot: rhs_western_rifle_gripod_slot {
				class compatibleItems {
					rhsusf_acc_grip1 = 1;
				};
			};
			allowedslots[] = {901};
			mass = 73.04;
		};
	};
	
	class rhs_weap_m4_m203;
	class twc_m4_m203_acog_light: rhs_weap_m4_m203
	{
		
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="cup_optic_acog2";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhs_acc_2dpZenit_ris";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					cup_optic_acog2 = 1;
					rhsusf_acc_compm4 = 1;
				};
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top {
				class compatibleItems {
					rhs_acc_2dpZenit_ris = 1;
				};
			};
			allowedslots[] = {901};
			mass = 102.96;
		};
	};
	
	class rhs_weap_m24sws_blk;
	class rhs_weap_m24sws_blk_ana: rhs_weap_m24sws_blk
	{
		
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_M8541";
			};
			class LinkedItemsUnderBarrelSlot
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_harris_swivel";
			};
		};
	};
	
	class rhs_weap_M107;
	class twc_rhs_weap_M107: rhs_weap_M107
	{
		accessories[] = {"rhsusf_acc_premier"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_premier";
			};
		};
	};
	
		
	class GMG_F;
	class GMG_20mm: GMG_F
	{
		class manual;
	};
	
	class RHS_MK19: GMG_20mm
	{
		magazineReloadTime = 20;
		class manual: manual
		{
			reloadtime = 0.22;
		};
	};
	
	/*
	
	class mortar_82mm: CannonCore
	{
		class eventhandlers;
	};
	
	class rhs_weap_2b14: mortar_82mm
	{
		
		class EventHandlers: EventHandlers {
			fired = "_gunner = _this select 7; _gunner setvariable ['twc_mortar_walking', 1];[_this select 6, _this select 7] call  twc_fnc_mortarwalk_fnc_mortarwalk;";
		};
	};
	
	class mortar_155mm_AMOS: CannonCore
	{
		class eventhandlers;
	};
	
	class RHS_Weap_d30: mortar_155mm_AMOS
	{
		
		class EventHandlers: EventHandlers {
			fired = "_gunner = _this select 7; _gunner setvariable ['twc_mortar_walking', 1];[_this select 6, _this select 7] call  twc_fnc_mortarwalk_fnc_mortarwalk;";
		};
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
	
	
	class rhs_acc_sniper_base;
	class rhs_acc_pso1m2: rhs_acc_sniper_base {
	
	
		ACE_ScopeAdjust_Horizontal[] = {-4,4};
		ACE_ScopeAdjust_HorizontalIncrement = 0.5;
		ACE_ScopeAdjust_Vertical[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.5;
		ACE_ScopeHeightAboveRail = 4.41386;
		
	};
	
	
	class rhs_weap_pkp;
	class rhs_weap_pkm: rhs_weap_pkp
	{
		recoil = "twc_mg_762";
		recoilProne = "twc_mg_prone";
		accessories[] = {};
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_7N13", "rhs_100Rnd_762x54mmR_7N26", "rhs_100Rnd_762x54mmR_7BZ3", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"};
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
	//area defence munition, otherwise known as flechette. paired with buckshot function in the weapons' fired eventhandler
		class rhs_mag_maaws_HEAT;
		class rhs_mag_maaws_flechette : rhs_mag_maaws_HEAT
		{
			displayName="FFV401 ADM";
			ammo = rhs_ammo_maaws_flechette;
			descriptionShort = "Area Defence Munition (Flechette)";
			displaynameshort = "ADM401";
		};	
		
		class UGL_FlareGreen_F;
		class twc_l5a4_g : UGL_FlareGreen_F
		{
			ammo = rhs_40mm_green;
			displayName="L5A4 Round (Green)";
		};	
		class UGL_Flarered_F;
		class twc_l5a4_r : UGL_Flarered_F
		{
			ammo = rhs_40mm_red;
			displayName="L5A4 Round (Red)";
		};	
		class UGL_Flarewhite_F;
		class twc_l5a4_w : UGL_Flarewhite_F
		{
			ammo = rhs_40mm_white;
			displayName="L5A4 Round (White)";
		};
		
		class rhs_10Rnd_762x54mmR_7N1;
		class twc_10Rnd_762x54mmR_7N1_P : rhs_10Rnd_762x54mmR_7N1
		{
			tracersEvery = 1;
			displaynameshort = "7N1-P";
			descriptionShort = "Caliber: 7.62x54mmR Tracer<br />Rounds: 10<br />Used in: SVD";
			displayName = "7N1-P 10Rnd SVD Mag";
		};	
		// when 3cb does proxies, this is gonna have to go
		class UK3CB_BAF_762_100Rnd_T;
		class UK3CB_BAF_762_200Rnd_T: UK3CB_BAF_762_100Rnd_T
		{
			modelSpecial = "rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_792x57_belt_296rnd";
			modelSpecialIsProxy = 1;
		};
		
		class UK3CB_BAF_762_100Rnd;
		class UK3CB_BAF_762_200Rnd: UK3CB_BAF_762_100Rnd
		{
			modelSpecial = "rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_792x57_belt_296rnd";
			modelSpecialIsProxy = 1;
		};
		
		class 200Rnd_20mm_G_belt;
		class twc_200Rnd_20mm_G_belt_1: 200Rnd_20mm_G_belt
		{
			ammo = "twc_G_20mm_HE";
			initSpeed = 350;
		};

		class CA_Magazine;
		class 10Rnd_RHS_50BMG_Box: CA_Magazine {
			mass = 48;
		};
		
		class CUP_30Rnd_556x45_AK;
		class twc_rhsgref_30rnd_556x45_m21: CUP_30Rnd_556x45_AK {
			descriptionshort = "Caliber: 5.56x45mm<br />Rounds: 30";
			displayName = "5.56mm 30rnd";
		};
		class CUP_30Rnd_TE1_Red_Tracer_556x45_AK;
		class twc_rhsgref_30rnd_556x45_m21_t: CUP_30Rnd_TE1_Red_Tracer_556x45_AK {
			descriptionshort = "Caliber: 5.56x45mm Tracer<br />Rounds: 30";
			displayName = "5.56mm 30rnd Tracer";
		};
		
		class FakeMagazine;
		class rhs_panzerfaust60_mag: FakeMagazine
		{
			displayname = "RPG-76 Rocket";
			initSpeed = 105;
			//ammo = "twc_rpg75_rocket";
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
	class rhs_40mm_red : F_40mm_Red
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
	class rhs_40mm_white : F_40mm_white
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
	class rhs_40mm_green : F_40mm_green
	{
		lightColor[] = {0.5,0.75,0.5,0};
		brightness  = 75;
		intensity = 1000000;
		coefgravity = 0.13;
		timeToLive = 140;
	};
	class rhsusf_ammo_127x99_M33_Ball;
	class rhsusf_ammo_127x99_mk211: rhsusf_ammo_127x99_M33_Ball
	{
		indirectHit = 20;
		indirectHitRange = 0.2;
	};
	class G_20mm_HE;
	class twc_G_20mm_HE: G_20mm_HE
	{
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,0.7,250};
	};
	class rhs_ammo_maaws_HEAT;
	class rhs_ammo_maaws_flechette : rhs_ammo_maaws_HEAT
	{
		
	};
	class R_PG32V_F;
	class rhs_ammo_panzerfaust60_rocket : R_PG32V_F
	{
		maxSpeed = 320;
		timeToLive = 60;
		explosionEffects = "GrenadeExplosion";
	};
	
	class rhs_rpg26_rocket: R_PG32V_F
	{
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",2,0.9,500};
	};
	
	class rhs_ammo_rpgShell_base: R_PG32V_F
	{
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",3,0.7,500};
	};
	
	class CUP_B_762x51_Tracer_Red;
	class CUP_B_762x51_Tracer_Red_Splash: CUP_B_762x51_Tracer_Red
	{
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
	};
	
	class BulletBase;
	class rhs_ammo_762x51_M80_Ball: BulletBase
	{
		model = "z\ace\addons\tracers\ace_tracerred2.p3d";
	};
	class B_762x51_Ball;
	class rhs_B_762x54_Ball:B_762x51_Ball
	{
		model = "z\ace\addons\tracers\ace_tracergreen2.p3d";
	};
	class rhs_B_762x54_Ball_Tracer_Green:rhs_B_762x54_Ball
	{
		model = "z\ace\addons\tracers\ace_tracergreen2.p3d";
	};
	
	class rhs_B_762x39_Ball;
	class rhs_B_762x39_Tracer: rhs_B_762x39_Ball
	{
		model = "z\ace\addons\tracers\ace_tracergreen2.p3d";
	};
	
	
};