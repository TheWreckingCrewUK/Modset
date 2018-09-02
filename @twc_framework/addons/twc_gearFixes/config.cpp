class CfgPatches {
	class TWC_gearFixes {
		units[]={};
		weapons[]={};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"a3_weapons_f",
			"cup_airvehicles_av8b",
			"uk3cb_baf_weapons_smallarms",
			"UK3CB_BAF_Vehicles"
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

class CfgAmmo {
	class GrenadeHand;
	class GrenadeHand_stone: GrenadeHand
	{
		simulation = "shotShell";
		SoundSetExplosion[] = {};
		soundHit1[] = {};
		soundHit2[] = {};
		soundHit3[] = {};
		soundHit4[] = {};
	};
};

class mode_fullauto;
class CfgWeapons {
	class Rifle_Base_F;
	class UK3CB_BAF_L1A1: Rifle_Base_F {
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
	};
	
	class srifle_EBR_F;
	class UK3CB_BAF_L128A1: srifle_EBR_F {
		recoil = "twc_shotgun_1";
		recoilProne = "twc_rifle_762_prone";
	};
	
	class arifle_Mk20_plain_F;
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
	
	class Rifle_Long_Base_F;
	
	class UK3CB_BAF_L7A2: Rifle_Long_Base_F {
		displayname = "L7A2 GPMG";

		recoil = "twc_mg_762";
		recoilProne = "twc_mg_prone";
		class WeaponSlotsInfo {
			class asdg_OpticRail_UK3CB_BAF_L7A2 { };
		};
		class fullauto: mode_fullauto
		{
			reloadTime = 0.08;
		};
	};
	
	class twc_L7A2: UK3CB_BAF_L7A2 {};

	class UK3CB_BAF_L110_Base;
	class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base
	{
		//recoil = "twc_rifle_556_long";
		//recoilProne = "twc_rifle_556_long_prone";
		class FullAuto;
	};
	
	class UK3CB_BAF_L110A2RIS: UK3CB_BAF_L110_556_Base
	{
		class FullAuto:FullAuto {
			dispersion = 0.003;
		};
	};
	
	class UK3CB_BAF_L110A2: UK3CB_BAF_L110_556_Base
	{
		class FullAuto:FullAuto {
			dispersion = 0.003;
		};
	};
	
	
	
	
	class missiles_titan;
	class UK3CB_BAF_Milan_Launcher: missiles_titan {
		ace_overpressure_angle = 90;
		ace_overpressure_range = 40;
		ace_overpressure_damage = 0.7;
	};
};

class cfgRecoils
{
	class twc_rifle_556
	{
		muzzleOuter[]	= { 0.1,  0.2,  0.02,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.02, 0.04 }; //min/max force
		permanent	= 0.3; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.1; //muzzle jump
	};
	class twc_rifle_556_prone
	{
		muzzleOuter[]	= { 0.05,  0.2,  0.02,  0.1 };
		kickBack[]	= { 0.02, 0.04 };
		permanent	= 0.3;
		temporary	= 0.1;
	};
	
	class twc_rifle_556_long
	{
		muzzleOuter[]	= { 0.07,  0.15,  0.02,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.02, 0.04 }; //min/max force
		permanent	= 0.25; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.1; //muzzle jump
	};
	class twc_rifle_556_long_prone
	{
		muzzleOuter[]	= { 0.05,  0.1,  0.02,  0.1 };
		kickBack[]	= { 0.04, 0.06 };
		permanent	= 0.25;
		temporary	= 0.1;
	};
	
	class twc_rifle_762
	{
		muzzleOuter[]	= { 0.1,  0.5,  0.02,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.05, 0.06 }; //min/max force
		permanent	= 0.4; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.05; //muzzle jump
	};
	class twc_rifle_762_prone
	{
		muzzleOuter[]	= { 0.05,  0.2,  0.02,  0.1 };
		kickBack[]	= { 0.05, 0.07 };
		permanent	= 0.4;
		temporary	= 0.05;
	};
	
 class twc_mg_762
	{
		muzzleOuter[]	= { 0.1,  0.15,  0.03,  0.1 };
		kickBack[]	= { 0.04, 0.06 };
		permanent	= 0.4;
		temporary	= 0.1;
	};
	
 class twc_mg_prone
	{
		muzzleOuter[]	= { 0.1,  0.1,  0.25,  0.45 };
		kickBack[]	= { 0.06, 0.08 };
		permanent	= 0.4;
		temporary	= 0.2;
	};
	
	class twc_shotgun_1
	{
		muzzleOuter[]	= { 0.1,  0.5,  0.1,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.06, 0.09 }; //min/max force
		permanent	= 1.5; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.2; //muzzle jump
	};
};

class CfgVehicles {
	class Plane;
	class CUP_AV8B_Base : Plane {
		class AcreRacks {
	   		class Rack_1 {
		       		displayName = "Radio"; // Name is displayed in the interaction menu.
				shortName = "Radio";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"inside", "external"}; // Who has access. "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F"; // Predefined mounted radio
				isRadioRemovable = 0;
			};
       		};
			
	};	
};
