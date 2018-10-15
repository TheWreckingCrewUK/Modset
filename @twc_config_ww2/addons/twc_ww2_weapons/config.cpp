class CfgPatches
{
	class twc_weapons_ww2
	{
		units[]={
			"TWC_Operation_WW2_Ammobox"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"cup_weapons_ammoboxes",
			"fow_weapons",
			"fow_weapons_c",
			"BBB_BoysATR"
		};
		version="1";
		projectName="TWC";
		author="jayman";
	};
};
class cfgAmmo{
	class fow_e_no82;
	class twc_no82: fow_e_no82{
		hit = 100;
		indirectHit = 325;
		indirectHItRange = 2;
		caliber = 4;
	};
	
};
class cfgMagazines {
	class fow_e_no82;
	class twc_no82: fow_e_no82 {
		ammo = "twc_no82";
		displayName = "NO. 82 AT Grenade";
	};
};
class CfgWeapons {
	class Default;
	class GrenadeLauncher;
	class Throw : GrenadeLauncher {
		muzzles[] += {"twc_no82_muzzle"};
		class ThrowMuzzle: GrenadeLauncher {};
		
		class twc_no82_muzzle: ThrowMuzzle
		{
			magazines[] = {"twc_no82"};
		};
	};
	class ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_ItemCore;
	class twc_looseAmmoBox_303: ACE_ItemCore
	{
		scope = 2;
		displayName = "Box of Loose .303";
		descriptionShort = "Self Interact to convert to Enfield Clips";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 228;
		};
	};
	class TWC_EmptyBrenMag: ACE_ItemCore
	{
		scope = 2;
		displayName = "30Rnd 303 Bren";
		descriptionShort = "Used in Conjuction with Loose Ammo to Form Bren Mags";
		picture = "\fow\fow_weapons\bren\data\ui\m_bren_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 6.6;
		};
	};
	class fow_w_bren;
	class LIB_FLARE_PISTOL;
	class bnae_mk1_t_virtual;
	
	class VestItemclass;
	class VestItem;
	class ItemInfo;
	class fow_v_uk_base;
	class fow_v_uk_sten;
	class fow_v_uk_bren;
	class fow_v_uk_officer;

	class fow_v_uk_para_base;
	class fow_v_uk_para_bren;
	class fow_v_uk_para_sten;

	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class EventHandlers;
	};

	class BBB_BoysATR: Rifle_Base_F
	{
		class EventHandlers: EventHandlers
		{
			class twc_ww2_weapons
			{
				fired = "_this execVM '\twc_ww2_weapons\scripts\twc_boys_fire.sqf';";
			};
		};
	};

	class TWC_Bren: fow_w_bren {
		class WeaponSlotsInfo {
			displayName = "Bren Gun";
			mass = 200;
			allowedSlots[] = {901};
		};
	};

	class twc_mk1t: bnae_mk1_t_virtual
	{
		scope = 1;
		author = "Anschluss";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item= "bnae_scope_v3_virtual";
			};
		};
	};

	class TWC_No1Mk3SignalGun: LIB_FLARE_PISTOL
	{
		displayName = "No. 1 MkIII Signal Pistol";
		magazines[] = {"UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};

	class TWC_Vest_WW2_Base: fow_v_uk_base {
		scope = 1;
		descriptionShort = "Webbing - it's all the fashion these days";
		class ItemInfo: VestItem {
			containerClass = Supply160;
			mass = 25;
			uniformModel = "\fow\fow_characters\uk\lodu_vest_brit_pouch_base.p3d";
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 2;
					passThrough = 0.5;
				};

				class Arms {
					hitpointName = "HitArms";
					armor = 2;
					passThrough = 0.5;
				};

				class Chest {
					hitpointName = "HitChest"; 
					armor = 3; 
					passThrough = 0.15;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 3;
					passThrough = 0.15;
				};

				class Abdomen {
					hitpointName = "HitAbdomen"; 
					armor = 3;
					passThrough = 0.15;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};

	class TWC_Vest_WW2_Sten: fow_v_uk_sten {
		scope = 1;
		descriptionShort = "Sten Webbing - mighty but compact";
		class ItemInfo: VestItem {
			containerClass = Supply140; 
			mass = 30;
			uniformModel = "\fow\fow_characters\uk\lodu_vest_brit_pouch_sten.p3d";
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 2;
					passThrough = 0.5;
				};

				class Arms {
					hitpointName = "HitArms";
					armor = 2;
					passThrough = 0.5;
				};

				class Chest {
					hitpointName = "HitChest"; 
					armor = 3; 
					passThrough = 0.15;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 3;
					passThrough = 0.15;
				};

				class Abdomen {
					hitpointName = "HitAbdomen"; 
					armor = 3;
					passThrough = 0.15;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};

	class TWC_Vest_WW2_Bren: fow_v_uk_bren {
		scope = 1;
		descriptionShort = "Bren Webbing - bigger than life pouches";
		class ItemInfo: VestItem {
			containerClass = Supply160;
			mass = 30;
			uniformModel = "\fow\fow_characters\uk\lodu_vest_brit_pouch_bren.p3d";
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 2;
					passThrough = 0.5;
				};

				class Arms {
					hitpointName = "HitArms";
					armor = 2;
					passThrough = 0.5;
				};

				class Chest {
					hitpointName = "HitChest";
					armor = 3;
					passThrough = 0.15;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 3;
					passThrough = 0.15;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 3;
					passThrough = 0.15;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};

	class TWC_Vest_WW2_Officer: fow_v_uk_officer {
		scope = 1;
		descriptionShort = "Officer Webbing - the finest of materials";
		class ItemInfo: VestItem {
			containerClass = Supply140;
			mass = 25; 
			uniformModel = "\fow\fow_characters\uk\lodu_vest_brit_off.p3d";

			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 2;
					passThrough = 0.5;
				};

				class Arms {
					hitpointName = "HitArms";
					armor = 2;
					passThrough = 0.5;
				};

				class Chest {
					hitpointName = "HitChest"; 
					armor = 3; 
					passThrough = 0.1;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 3;
					passThrough = 0.1;
				};

				class Abdomen {
					hitpointName = "HitAbdomen"; 
					armor = 3;
					passThrough = 0.1;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
        };
	};

	class TWC_Vest_WW2_Para_Base: fow_v_uk_para_base {
		scope = 1;
		descriptionShort = "Para Webbing - suicidal storage";
		class ItemInfo: VestItem {
			containerClass = Supply160;
			mass = 25;
			uniformModel = "\fow\fow_characters\uk\lodu_vest_brit_para_pouch_base_blanco.p3d";
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 2;
					passThrough = 0.5;
				};

				class Arms {
					hitpointName = "HitArms";
					armor = 2;
					passThrough = 0.5;
				};

				class Chest {
					hitpointName = "HitChest"; 
					armor = 3; 
					passThrough = 0.15;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 3;
					passThrough = 0.15;
				};

				class Abdomen {
					hitpointName = "HitAbdomen"; 
					armor = 3;
					passThrough = 0.15;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};

	class TWC_Vest_WW2_Para_Bren: fow_v_uk_para_bren {
		scope = 1;
		descriptionShort = "Para Bren Webbing - lightweight, big pockets";
		class ItemInfo: VestItem {
			containerClass = Supply160;
			mass = 30;
			uniformModel = "\fow\fow_characters\uk\lodu_vest_brit_para_pouch_bren_blanco.p3d";
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 2;
					passThrough = 0.5;
				};

				class Arms {
					hitpointName = "HitArms";
					armor = 2;
					passThrough = 0.5;
				};

				class Chest {
					hitpointName = "HitChest"; 
					armor = 3; 
					passThrough = 0.15;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 3;
					passThrough = 0.15;
				};

				class Abdomen {
					hitpointName = "HitAbdomen"; 
					armor = 3;
					passThrough = 0.15;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};

	class TWC_Vest_WW2_Para_Sten: fow_v_uk_para_sten {
		scope = 1;
		descriptionShort = "Para Sten Webbing - lightweight and functional";
		class ItemInfo: VestItem {
			containerClass = Supply140; 
			mass = 30;
			uniformModel = "\fow\fow_characters\uk\lodu_vest_brit_para_pouch_sten_blanco.p3d";

			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 2;
					passThrough = 0.5;
				};

				class Arms {
					hitpointName = "HitArms";
					armor = 2;
					passThrough = 0.5;
				};

				class Chest {
					hitpointName = "HitChest"; 
					armor = 3; 
					passThrough = 0.15;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 3;
					passThrough = 0.15;
				};

				class Abdomen {
					hitpointName = "HitAbdomen"; 
					armor = 3;
					passThrough = 0.15;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};

	class LIB_MG34_Tripod;
	class LIB_MG42_Tripod;
	class LIB_Maxim_M30;
	class LIB_M1919A4_tripod;
	class fow_w_type92;
	class fow_w_mg42_mounted;
	class fow_w_vickers_mounted;
	class fow_w_m1919a4_static;
	class CSA38_ZB53mg;
	class CSA38_TKVZ24mg;
	class csa38_ZB26mg;

	class twc_dummyweapon_LIB_MG34_Tripod: LIB_MG34_Tripod
	{
		magazines[] = {"twc_dummymag_machinegun"};
	};
	class twc_dummyweapon_LIB_MG42_Tripod: LIB_MG42_Tripod
	{
		magazines[] = {"twc_dummymag_machinegun"};
	};
	class twc_dummyweapon_LIB_Maxim_M30: LIB_Maxim_M30
	{
		magazines[] = {"twc_dummymag_machinegun"};
	};
	class twc_dummyweapon_LIB_M1919A4_tripod: LIB_M1919A4_tripod
	{
		magazines[] = {"twc_dummymag_machinegun"};
	};
	class twc_dummyweapon_fow_w_type92: fow_w_type92
	{
		magazines[] = {"twc_dummymag_heavy"};
	};
	class twc_dummyweapon_fow_w_mg42_mounted: fow_w_mg42_mounted
	{
		magazines[] = {"twc_dummymag_machinegun"};
	};
	class twc_dummyweapon_fow_w_vickers_mounted: fow_w_vickers_mounted
	{
		magazines[] = {"twc_dummymag_machinegun"};
	};
	class twc_dummyweapon_fow_w_m1919a4_static: fow_w_m1919a4_static
	{
		magazines[] = {"twc_dummymag_machinegun"};
	};
	class twc_dummyweapon_CSA38_ZB53mg: CSA38_ZB53mg
	{
		magazines[] = {"twc_dummymag_machinegun"};
	};
	class twc_dummyweapon_CSA38_TKVZ24mg: CSA38_TKVZ24mg
	{
		magazines[] = {"twc_dummymag_machinegun"};
	};
	class twc_dummyweapon_csa38_ZB26mg: csa38_ZB26mg
	{
		magazines[] = {"twc_dummymag_machinegun"};
	};
};

class CfgVehicles {
	class fow_b_uk_p37;
	class fow_b_uk_bergenpack;
	class fow_b_us_radio;
	class fow_b_uk_piat_at;
	class B_LIB_SOV_RA_MedicalBag_Empty;
	
	class CUP_BAF_VehicleBox;

//************************WW2*******************************
	class TWC_Backpack_WW2_Base: fow_b_uk_p37
	{
		scope = 1;
		maximumLoad = 200;
	};
	class TWC_Backpack_1956_Radio_Base: fow_b_us_radio
	{
		scope = 1;
		maximumLoad = 400;
		mass = 29.7;
	};
	class TWC_Backpack_WW2_PlatoonCommand: fow_b_us_radio
	{
		scope = 1;
		mass = 29.7;
		maximumLoad = 400;
		class TransportMagazines
		{
			class _XX_Flare_white
			{
				magazine="UGL_FlareWhite_F";
				count=3;
			};
			class _XX_Flare_red
			{
				magazine="UGL_FlareRed_F";
				count=3;
			};
			class _XX_Flare_green
			{
				magazine="UGL_FlareGreen_F";
				count=3;
			};
			class _XX_Flare_yellow
			{
				magazine="UGL_FlareYellow_F";
				count=3;
			};
			class _XX_SmokeGrenade_White
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Red
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Green
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Yellow
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Purple
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Blue
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Orange
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
		};
	};
	class TWC_Backpack_WW2_Medic: B_LIB_SOV_RA_MedicalBag_Empty
	{
		maximumLoad = 120;
		scope = 1;
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 12;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 10;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 16;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 6;
			};
			class _xxACE_adenosine
			{
				name = "ACE_adenosine";
				count = 2;
			};
			class _xxACE_atropine
			{
				name = "ACE_atropine";
				count = 2;
			};
			class _xxACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _xxACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 16;
			};
			class _xxACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 6;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 4;
			};
		};
	};
	class TWC_Backpack_WW2_SL: TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_Flare_white
			{
				magazine="UGL_FlareWhite_F";
				count=3;
			};
			class _XX_Flare_red
			{
				magazine="UGL_FlareRed_F";
				count=3;
			};
			class _XX_Flare_green
			{
				magazine="UGL_FlareGreen_F";
				count=3;
			};
			class _XX_Flare_yellow
			{
				magazine="UGL_FlareYellow_F";
				count=3;
			};
			class _XX_SmokeGrenade_White
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Red
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Green
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Yellow
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Purple
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Blue
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Orange
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
		};
	};
	class TWC_Backpack_WW2_Sergeant:fow_b_uk_bergenpack
	{
		scope = 1;
		maximumLoad = 400;
		class TransportItems
		{
			class _XX_Enfield_LooseAmmo
			{
				name="twc_looseAmmoBox_303";
				count= 1;
			};
		};
		class TransportMagazines
		{
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 3;
			};
			class _XX_Flare_white
			{
				magazine="UGL_FlareWhite_F";
				count=6;
			};
			class _XX_Flare_red
			{
				magazine="UGL_FlareRed_F";
				count=6;
			};
			class _XX_Flare_green
			{
				magazine="UGL_FlareGreen_F";
				count=6;
			};
			class _XX_Flare_yellow
			{
				magazine="UGL_FlareYellow_F";
				count=6;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};	
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
		};
	};
	class TWC_Backpack_WW2_2IC: TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_Enfield_Mag
			{
				magazine="10Rnd_303_Magazine";
				count= 5;
			};
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 4;
			};
		};
	};
	class TWC_Backpack_WW2_MGASS: TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 10;
			};
		};
	};
	class TWC_Backpack_PIAT: fow_b_uk_piat_at
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_PIAT_HEAT
			{
				magazine = "fow_1Rnd_piat_HEAT";
				count = 3;
			};
		};
	};
//*******************1956************************
	class TWC_Backpack_1956_SL:TWC_Backpack_1956_Radio_Base
	{
		scope = 1;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1956_Sergeant:TWC_Backpack_1956_Radio_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_Enfield_Mag
			{
				magazine="10Rnd_303_Magazine";
				count= 2;
			};
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine = "UK3CB_BAF_762_20Rnd";
				count = 10;
			};
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 3;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};	
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1956_2IC: TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine = "UK3CB_BAF_762_20Rnd";
				count = 10;
			};
			class _XX_Enfield_Mag
			{
				magazine="10Rnd_303_Magazine";
				count= 2;
			};
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1956_AT: TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_M6A1_Rocket
			{
				magazine = "fow_1Rnd_m6a1";
				count = 3;
			};
		};
	};
//Ammo Boxes
	class TWC_Operation_WW2_Ammobox: CUP_BAF_VehicleBox
	{
		author="FakeMatty";
		displayName="TWC WW2 AmmoBox";
		class TransportMagazines
		{
			class _XX_Enfield_Mag
			{
				magazine="10Rnd_303_Magazine";
				count=200;
			};
			class _XX_Bren_Mag
			{
				magazine="fow_30Rnd_303_bren";
				count=40;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=20;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 10;
			};	
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 10;
			};
			class _xx_Grenade
			{
				magazine="fow_e_no36mk1";
				count=30;
			};
			class _xx_ATGrenade
			{
				magazine = "twc_no82";
				count = 10;
			};
			class _XX_Flare_white
			{
				magazine="UGL_FlareWhite_F";
				count=15;
			};
			class _XX_Flare_red
			{
				magazine="UGL_FlareRed_F";
				count=15;
			};
			class _XX_Flare_green
			{
				magazine="UGL_FlareGreen_F";
				count=15;
			};
			class _XX_Flare_yellow
			{
				magazine="LIB_1Rnd_flare_yellow";
				count=15;
			};
		};
		class TransportItems
		{
			class _xx_303Box
			{
				name = "twc_looseAmmoBox_303";
				count = 3;
			};
		};
		transportAmmo=100000;
		supplyRadius=3;
	};
};


