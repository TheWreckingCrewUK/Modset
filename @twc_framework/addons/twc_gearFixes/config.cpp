class CfgPatches {
	class TWC_gearFixes {
		units[]={};
		weapons[]={"CUP_launch_RPG7V"};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"a3_weapons_f",
			"cup_airvehicles_av8b",
			"uk3cb_baf_weapons_smallarms",
			"UK3CB_BAF_Vehicles",
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds"
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
		ace_frag_enabled = 0;
		explosionTime = 0;
		caliber = 0.1;
		cost = 0;
		dangerRadiusHit = 0;
		minimumSafeZone = 0;
		explosionEffectsRadius = 0;
		/*hit = 0.1;
		indirectHit = 0.2;
		indirectHitRange = 0.1;*/
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
	
		
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class EventHandlers;
	};
	
	class CUP_launch_RPG7V: Launcher_Base_F
	{
		class EventHandlers: EventHandlers {
			fired = "_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 24) - 12, (velocity _bullet select 1) + (random 24) - 12, 	(velocity _bullet select 2) + (random 4) - 2];";
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
	
	
//handling modifications

	class Car_F;
	
	class UK3CB_BAF_LandRover_Base: Car_F {
		

		antiRollbarForceCoef = 4.0;
		antiRollbarForceLimit = 3;
		differentialType = "all_limited";
		frontRearSplit = 0.9;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.5;
		class Wheels {
			class LF {
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				frictionVsSlipGraph[] = {{ 0.0, 1.0 }, { 0.3, 0.5 }, { 1.0, 0.3 }};
				latStiffX = 15;
				latStiffY = 20;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 3250;
				maxCompression = 0.25;
				maxDroop = 0.1;
				maxHandBrakeTorque = 0;
				moi = 6;
				side = "left";
				springDamperRate = 4500;
				springStrength = 36000;
				sprungMass = 525;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = 0.285;
				};
				class LR: LF {
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				frictionVsSlipGraph[] = {{ 0.0, 1.2 }, { 0.5, 1 }, { 1.0, 0.3 }};
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 2950;
				maxDroop = 0.1;
				maxHandBrakeTorque = 9000;
				moi = 6;
				side = "left";
				sprungMass = 525;
				steering = 0;
				suspForceAppPointOffset = "wheel_1_2_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_2_axis";
				width = 0.285;
				};
				class RF: LF {
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 3250;
				maxDroop = 0.1;
				maxHandBrakeTorque = 0;
				moi = 6;
				side = "right";
				steering = 1;
				suspForceAppPointOffset = "wheel_2_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_2_1_axis";
				width = 0.285;
				};
				class RR: LR {
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 2950;
				maxDroop = 0.1;
				maxHandBrakeTorque = 9000;
				moi = 6;
				side = "right";
				steering = 0;
				suspForceAppPointOffset = "wheel_2_2_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_2_2_axis";
				width = 0.285;
				};
			};
		
	};
	class Wheeled_APC_F;
	class CUP_Mastiff_Base : Wheeled_APC_F
	{
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0;
		terrainCoef = 5.0;
		turncoef = 3.0;
		armor = 700;
		clutchStrength = 150;
		differentialType = "all_open";


		class Wheels {
			class LF {
				boneName = "wheel_1_1";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 80;
				MOI = 85;
				dampingRate = 0.1;
				dampingRateInAir = 2;
				dampingRateDamaged = 2;
				dampingRateDestroyed = 800;
				maxBrakeTorque = 4500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.4;
				//MaxDroop = 0.2;
				sprungMass = 4250;
				springStrength = 15000;
				springDamperRate = 6000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
			};
		};
		
			class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.4; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 3.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
             
           turnDecreaseConst  = 2.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.2; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.7; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class CUP_Wolfhound_Base : Wheeled_APC_F
	{
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0;
		terrainCoef = 5.0;
		turncoef = 3.0;
		armor = 800;
		clutchStrength = 150;


		class Wheels {
			class LF {
				boneName = "wheel_1_1";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 80;
				MOI = 85;
				dampingRate = 0.1;
				dampingRateInAir = 2;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 300;
				maxBrakeTorque = 4500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.4;
				//MaxDroop = 0.2;
				sprungMass = 8250;
				springStrength = 5000;
				springDamperRate = 13000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 5;
				latStiffY = 180;
				frictionVsSlipGraph[] = {[0,0.7],[0.2,1.2],[0.5,0.5],[1,0.2],[2,0.1]};
			};
		};
		
			class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.4; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 3.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
             
           turnDecreaseConst  = 2.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.2; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.7; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	
};

