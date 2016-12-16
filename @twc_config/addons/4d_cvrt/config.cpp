////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Fri Mar 01 20:07:30 2013 : Created on Fri Mar 01 20:07:30 2013
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class 4d_cvrt : config.bin{
class CfgPatches
{
	class 4d_cvrt
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgFactionClasses
{
	class UK_ARMED_FORCES
	{
		displayName = "UK Armed Forces";
		priority = 8;
		side = 1;
	};
};
class CfgVehicleClasses
{
	class CVRT_T
	{
		displayName = "CVRT (Temperate)";
	};
	class CVRT_D
	{
		displayName = "CVRT (Desert)";
	};
};
class CfgMovesBasic
{
	class DefaultDie;
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class MGunCore;
	class MGun;
	class BAF_L94A1;
	class CannonCore;
	class autocannon_Base_F;
	class L21A1_RARDEN: autocannon_Base_F
	{
		displayName = "L21A1 RARDEN";
		magazines[] = {"6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_HE"};
		class player: Mode_FullAuto
		{
			magazineReloadTime = 1;
			reloadTime=0.4;
			autoReload = 0;
			autoFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",1.9952624,1,1500};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",1.9952624,1,1500};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",1.9952624,1,1500};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class close: player
		{
			showToPlayer = 0;
			soundBurst = 1;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
		};
		class short: close
		{
			showToPlayer = 0;
			burst = 10;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: short
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 7;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class L23A1: CannonCore
	{
		scope = 2;
		displayname = "L32A1";
		author = "Anschluss";
		nameSound = "cannon";
		sound[] = {"",1,1};
		reloadSound[] = {"CUP\Weapons\CUP_Weapons_VehicleWeapons\M256\data\sound\Reload",3.16228,1,10};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "CannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		autoReload = 1;
		minRange = 5;
		minRangeProbab = 0.7;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 2500;
		maxRangeProbab = 0.1;
		reloadTime = 6;
		magazineReloadTime = 6;
		magazines[] = {L23A1_20_rnd_HESH,L23A1_20_rnd_HE};
		modes[] = {"player", "close", "short", "medium", "far"};
		class player: Mode_FullAuto
		{
			magazineReloadTime = 6;
			reloadTime=6;
			autoReload = 1;
			autoFire = 0;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",1.9952624,1,1500};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",1.9952624,1,1500};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",1.9952624,1,1500};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class close: player
		{
			showToPlayer = 0;
			burst = 15;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
		};
		class short: close
		{
			showToPlayer = 0;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: short
		{
			showToPlayer = 0;
			aiRateOfFire = 15;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			aiRateOfFire = 20;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
};
class CfgMagazines
{
	class Default;
	class VehicleMagazine;
	class 60Rnd_30mm_APFSDS_shells;
	class 250Rnd_30mm_HE_shells;
	class 6Rnd_30mm_L21A1_APDS: 60Rnd_30mm_APFSDS_shells
	{
		scope = 2;
		displayName = "APDS";
		ammo = "L21_30mm_APDS";
		count = 6;
		initSpeed = 1040;
		maxLeadSpeed = 300;
		tracersEvery = 1;
		lastRoundsTracer = 4;
	};
	class 6Rnd_30mm_L21A1_HE: 250Rnd_30mm_HE_shells
	{
		scope = 2;
		displayName = "HE";
		ammo = "L21_30mm_HE";
		count = 6;
		initSpeed = 1040;
		maxLeadSpeed = 300;
		tracersEvery = 2;
		lastRoundsTracer = 4;
	};
	class L23A1_20_rnd_HE: VehicleMagazine
	{
		scope = 2;
		displayName = "76mm L24A4 HE";
		displayNameShort = "L24A4 HE";
		ammo = L24A4_76mm_HE;
		count = 20;
		initSpeed = 514;
		maxLeadSpeed = 100;
		nameSound = "heat";
		tracersEvery = 1;
	};
	class L23A1_20_rnd_HESH: VehicleMagazine
	{
		scope = 2;
		displayName = "76mm L29A3 HESH";
		displayNameShort = "L29A3 HESH";
		ammo = L29A3_76mm_HESH;
		count = 20;
		initSpeed = 533;
		maxLeadSpeed = 100;
		nameSound = "heat";
		tracersEvery = 1;
	};
};
class CfgAmmo
{
	class Default;
	class ShellBase;
	class BulletBase;
	class B_30mm_APFSDS;
	class B_30mm_HE;
	class L21_30mm_HE: B_30mm_HE {};
	class L21_30mm_APDS: B_30mm_APFSDS {};
	class L29A3_76mm_HESH: ShellBase
	{
		hit = 250;
		indirectHit = 10;
		indirectHitRange = 10;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 20;
		typicalSpeed = 300;
		explosive = 1;
		cost = 100;
		airFriction = -0.000155;
		caliber = 8;
		timeToLive = 20;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.1;
		tracerEndTime = 3.0;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",1.7782794,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",1.7782794,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",1.7782794,1,1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",1.7782794,1,1800};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = "(120*0.2)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((7 + 120^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 120;
			duration = "((round (120^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class L24A4_76mm_HE: ShellBase
	{
		hit = 150;
		indirectHit = 40;
		indirectHitRange = 10;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 20;
		typicalSpeed = 300;
		explosive = 1;
		cost = 100;
		airFriction = -0.000155;
		caliber = 8;
		timeToLive = 20;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.1;
		tracerEndTime = 3.0;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",1.7782794,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",1.7782794,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",1.7782794,1,1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",1.7782794,1,1800};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = "(120*0.2)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((7 + 120^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 120;
			duration = "((round (120^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
};
class CfgVehicles
{
	/*	A3 DEFAULT INHERITANCE TREE START */
	// Do not modify the inheritance tree, unless you want to alter game's internal configs, or REALLY know what you're doing.
	class LandVehicle;
	class Tank: LandVehicle {
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank {
		class Turrets {
			class MainTurret:NewTurret {
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints {
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds {
			class Engine;
			class Movement;
		};
	};
	/*	A3 DEFAULT INHERITANCE TREE END	*/
	class 4d_cvrt_Scim_base: Tank_F
	{
		scope = 0;
		faction = "UK_ARMED_FORCES";
		side = 1;
		cost = 1000000;
		picture = "\4d_cvrt\tex\m113\m163_vulcan_racs_CA.paa";
		Icon = "\4d_cvrt\tex\m113\icomap_vulcan_CA.paa";
		mapSize = 8;
		nameSound = "tank";
		driverAction = "CUP_M1_DriverOut";
		driverInAction = "CUP_M1_Driver";
		driverForceOptics = 1;
		forceHideDriver = 0;
		irScanRangeMin = 10;
		irScanRangeMax = 8000;
		irScanGround = "true";
		gunnerCanSee = 31;
		hasCommander = 1;
		transportSoldier = 0;
		canFloat = 1;
		armor = 350;
		damageResistance = 0.03403;
		crew = "B_crew_F";
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 15;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		threat[] = {1,0.5,1};
		typicalCargo[] = {"B_crew_F","B_crew_F"};
		radarType = 4;
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.62341e-005,1};
		soundGetIn[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out",0.562341,1};
		soundGetOut[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out",0.562341,1,60};
		soundEngineOnInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_start",1.0,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_start",2.51189,1.0,500};
		soundEngineOffInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_stop",1.0,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_stop",1.25893,0.8,500};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",0.707946,1,150};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",0.707946,1,150};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",0.707946,1,150};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",0.707946,1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",0.707946,1,150};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",0.707946,1,150};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",0.707946,1,150};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",0.707946,1,150};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_01",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		soundWoodCrash[] = {"woodCrash0",0.16599999,"woodCrash1",0.16599999,"woodCrash2",0.16599999,"woodCrash3",0.16599999,"woodCrash4",0.16599999,"woodCrash5",0.16599999};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",0.707946,1,150};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",0.707946,1,150};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",0.707946,1,150};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",0.707946,1,150};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		attenuationEffectType = "TankAttenuation";
		slingLoadCargoMemoryPoints[] =
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		/// PhysX part
		simulation="tankX";
		maxSpeed=75;
		enginePower=205;
		maxOmega= 261.8;
		peakTorque=770;
		torqueCurve[] = {
			{"(550/2500)","(0/770)"},
			{"(1000/2500)","(498/770)"},
			{"(1250/2500)","(635/770)"},
			{"(1500/2500)","(746/770)"},
			{"(1800/2500)","(770/770)"},
			{"(2000/2500)","(743/770)"},
			{"(2250/2500)","(712/770)"},
			{"(2764/2500)","(0/770)"}
		};
		thrustDelay=0.30000001;
		clutchStrength=80;
		fuelCapacity=450;
		brakeIdleSpeed=1.78;
		latency=0.1;
		turnCoef = 5;
		tankTurnForce=100000;
		normalSpeedForwardCoef=0.7;
		idleRpm=550;
		redRpm=2500;
		engineLosses=25;
		transmissionLosses=15;
		class complexGearbox {
		//TX 200-2A gearbox
			GearboxRatios[]=
			{
				"R1",
				-0.5,
				"N",
				0,
				"D1",
				3.4300001,
				"D2",
				2.5,
				"D3",
				1.42,
				"D4",
				1,
				"D5",
				0.82999998,
				"D6",
				0.58999997
			};
			TransmissionRatios[] = {"High",8.85};
			gearBoxMode        = "auto"; //gearbox can be of type: full-auto (only requires 'W' or 'S'), auto (requires shift between drive and reverse), semi-auto, manual
			moveOffGear        = 1; // defines what gear an automatic or semi-automatic gearbox will move off from stationary in. 1 by default.
			driveString        = "D"; // string to display in the HUD for forward gears.
			neutralString      = "N"; // string to display in the HUD for neutral gear.
			reverseString      = "R"; // string to display in the HUD for reverse gears.
			transmissionDelay  = 0.1;
		};
		/// end of gearbox
		antiRollbarForceCoef=15.0;
		antiRollbarForceLimit=3.0;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=40;
		class HitPoints : HitPoints
		{
			class HitHull {armor=0.85;material=-1;name="telo";visual="zbytek";passThrough=1;};
			class HitEngine {armor=0.8;material=60;name="motor";visual="motor";passThrough=1;};
		};
		class Wheels {
			class L2 {
				boneName = "wheel_podkoloL1";
				center   = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping  = 75.0;
				// tanks do not have steerable wheels
				steering = 0;
				/// We need to distinguish the side to apply the right thrust value
				side = "left";
				/// weight of the wheel is defined per wheel, it reduces overall mass of vehicle
				weight = 100;
				mass = 100;
				MOI = 4.05;
				latStiffX = 250;
				latStiffY = 800;
				longitudinalStiffnessPerUnitGravity = 35000;
				maxBrakeTorque = 800;
				sprungMass = 1230.0;
				springStrength = 81500;
				springDamperRate = 6958;
				dampingRate = 1;
				dampingRateInAir = 662.0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				maxDroop = 0.15;
				maxCompression = 0.2;
			};
			class L3: L2 {
				boneName = "wheel_podkolol2";
				center   = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2 {
				boneName = "wheel_podkolol3";
				center   = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2 {
				boneName = "wheel_podkolol4";
				center   = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2 {
				boneName = "wheel_podkolol5";
				center   = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			// rear left wheel, usually Idler or Drive Sproket
			// Note, this wheel may not always be touching the ground, but we need it anyway!
			/*class L9: L2 {
				boneName = "wheel_podkolol9";
				center   = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			// front left wheel, usually Idler or Drive Sproket
			// Note, this wheel may not always be touching the ground, but we need it anyway!
			class L1: L2 {
				boneName = "";
				center   = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};*/
			
			class R2: L2 {
				boneName = "wheel_podkolop1";
				center   = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2 {
				boneName = "wheel_podkolop2";
				center   = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2 {
				boneName = "wheel_podkolop3";
				center   = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2 {
				boneName = "wheel_podkolop4";
				center   = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2 {
				boneName = "wheel_podkolop5";
				center   = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			// rear right wheel, usually Idler or Drive Sproket
			// Note, this wheel may not always be touching the ground, but we need it anyway!
			/*class R9: R2 {
				boneName = "wheel_podkolop9";
				center   = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			// front right wheel, usually Idler or Drive Sproket
			// Note, this wheel may not always be touching the ground, but we need it anyway!
			class R1: R2 {
				boneName = "";
				center   = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};*/
		};
		/// End of PhysX
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass              = B_Parachute_02_F;        // Type of parachute used when dropped in air. When empty then parachute is not used.
				parachuteHeightLimit        = 40;                               // Minimal height above terrain when parachute is used.
				canBeTransported            = 1;                             // 0 (false) / 1 (true)
				dimensions[]                = {"BBox_1_1_pos", "BBox_1_2_pos"}; // Memory-point-based override of automatic bounding box
			};
		};
		class Library
		{
			libTextDesc = "Widely exported vehicle produced by Alvis of Great Britain";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				soundAttenuationTurret = "TankAttenuation";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				gunnerAction = "gunner_apctracked3_out";
				gunnerInAction = "gunner_apctracked3_in";
				weapons[] = {"L21A1_RARDEN","CUP_Vlmg_L94A1_Coax"};
				magazines[] = {"6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M"};
				animationSourceHatch = "hatchGunner";
				gunnerForceOptics = 1;
				outGunnerMayFire = "false";
				forceHideGunner = "false";
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
				discreteDistanceInitIndex = 5;	
				memoryPointGunnerOptics = "gunnerview";
				minElev = -5;
				maxElev =+20;
				initElev=10;
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX =+30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY =+100;
						initFov = 0.200;
						minFov = 0.200;
						maxFov = 0.200;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2};
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
						initFov = 0.039;
						minFov = 0.039;
						maxFov = 0.039;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "";
						gun = "";
						isPersonTurret = 1;
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						minElev = -10;
						maxElev = 40;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
						soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,30};
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						gunnerAction = "passenger_flatground_3";
						gunnerInAction = "commander_apctracked3_in";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						turretInfoType = "RscWeaponRangeFinder";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[] = {};
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.155;
							minFov = 0.034;
							maxFov = 0.155;
							visionMode[] = {"Normal","NVG"};
							thermalMode[] = {0,1};
						};
						startEngine = 0;
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="L21A1_RARDEN";
			};
			class gunBarrel
			{
				source = "reload";
				weapon = "L21A1_RARDEN";
			};
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "CUP_Vlmg_L94A1_Coax";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"4d_cvrt\data\fv107.rvmat","4d_cvrt\data\fv107_DM.rvmat","4d_cvrt\data\fv107_de.rvmat"};
		};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-acce-02",0.31622776,1.0};
				limit = 0.15;
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-acce-02",1.0,1.0,700};
				limit = 0.15;
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_1",
					0.79432821,
					1,
					200
				};
				frequency="0.95	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume="engineOn*camPos*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_2",
					0.89125091,
					1,
					240
				};
				frequency="0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume="engineOn*camPos*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_3",
					1.1220185,
					1,
					280
				};
				frequency="0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume="engineOn*camPos*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_4",
					1.2589254,
					1,
					320
				};
				frequency="0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume="engineOn*camPos*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_5",
					1.4125376,
					1,
					360
				};
				frequency="0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume="engineOn*camPos*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_6",
					1.5848932,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume="engineOn*camPos*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_7",
					1.7782794,
					1,
					440
				};
				frequency="0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume="engineOn*camPos*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_1",
					1.1220185,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_2",
					1.4125376,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_3",
					1.7782794,
					1,
					230
				};
				frequency="0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_4",
					1.9952624,
					1,
					290
				};
				frequency="0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_5",
					1.7782794,
					1,
					350
				};
				frequency="0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_6",
					2.2387211,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_7",
					2.5118864,
					1,
					450
				};
				frequency="0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_1",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_2",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_3",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_4",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_5",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_6",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_7",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_1",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_2",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_3",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_4",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_5",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_6",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_7",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\noises\noise_tank_int_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\noises\noise_tank_ext_1",
					0.89125091,
					1,
					50
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1",
					0.39810717,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2",
					0.44668359,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3",
					0.50118721,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4",
					0.56234133,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5",
					0.56234133,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1",
					0.31622776,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2",
					0.35481337,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3",
					0.39810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4",
					0.44668359,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5",
					0.50118721,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1",
					0.25118864,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2",
					0.2818383,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
		};
	};
	class 4d_cvrt_Scim_w: 4d_cvrt_Scim_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Scimitar (Woodland)";
		model = "\4d_cvrt\4d_cvrt_Scim_w";
		vehicleClass = "CVRT_T";
		hiddenSelections[] = {"HCage","TCage","HCamNet","TCamNet"};
		class AnimationSources: AnimationSources
		{
			class HideSlat
			{
				displayName = "Hide SLAT armor";
				author = "$STR_CUP_AUTHOR_STRING";
				source="user";
				animPeriod = 0;
				initPhase = 1;				
			};
		};
	};
	class 4d_cvrt_Scim_w_L1: 4d_cvrt_Scim_w
	{
		displayName = "Scimitar (Woodland) (No Slat)";
		hiddenSelections[] = {"HCage","TCage"};
		armor = 300;
		class AnimationSources: AnimationSources
		{
			class HideSlat
			{
				displayName = "Hide SLAT armor";
				author = "$STR_CUP_AUTHOR_STRING";
				source="user";
				animPeriod = 0;
				initPhase = 0;				
			};
		};	
	};
	class 4d_cvrt_Scim_d: 4d_cvrt_Scim_base
	{
		scopeCurator = 2;
		scope = 2;
		displayName = "Scimitar (Desert)";
		model = "\4d_cvrt\4d_cvrt_Scim_d";
		vehicleClass = "CVRT_D";
		hiddenSelections[] = {"HCage","TCage","HCamNet","TCamNet","ECMk"};
		class AnimationSources: AnimationSources
		{
			class HideSlat
			{
				displayName = "Hide SLAT armor";
				author = "$STR_CUP_AUTHOR_STRING";
				source="user";
				animPeriod = 0;
				initPhase = 1;				
			};
		};
	};
	class 4d_cvrt_Scim_d_L1: 4d_cvrt_Scim_d
	{
		displayName = "Scimitar (Desert) (No Slat)";
		armor = 300;
		class AnimationSources: AnimationSources
		{
			class HideSlat
			{
				displayName = "Hide SLAT armor";
				author = "$STR_CUP_AUTHOR_STRING";
				source="user";
				animPeriod = 0;
				initPhase = 0;				
			};
		};	
	};
	class TWC_Scorpion_w: 4d_cvrt_Scim_w
	{
		displayName = "Scorpion (Woodland)";
		model = "\4d_cvrt\TWC_cvrt_scorpion_w";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret 
			{
				weapons[] = {"L23A1","CUP_Vlmg_L94A1_Coax"};
				magazines[] = {"L23A1_20_rnd_HE","L23A1_20_rnd_HESH","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M"};			
			};
		};
	};
	class TWC_Scorpion_d: 4d_cvrt_Scim_d
	{
		displayName = "Scorpion (Desert)";
		model = "\4d_cvrt\TWC_cvrt_scorpion_d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret 
			{
				weapons[] = {"L23A1","CUP_Vlmg_L94A1_Coax"};
				magazines[] = {"L23A1_20_rnd_HE","L23A1_20_rnd_HESH","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M"};			
			};
		};
	};
	class TWC_Scorpion_w_L1: 4d_cvrt_Scim_w_L1
	{
		displayName = "Scorpion (Woodland) (No Slat)";
		model = "\4d_cvrt\TWC_cvrt_scorpion_w";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret 
			{
				weapons[] = {"L23A1","CUP_Vlmg_L94A1_Coax"};
				magazines[] = {"L23A1_20_rnd_HE","L23A1_20_rnd_HESH","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M"};			
			};
		};
	};
	class TWC_Scorpion_d_L1: 4d_cvrt_Scim_d_L1
	{
		displayName = "Scorpion (Desert) (No Slat)";
		model = "\4d_cvrt\TWC_cvrt_scorpion_d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret 
			{
				weapons[] = {"L23A1","CUP_Vlmg_L94A1_Coax"};
				magazines[] = {"L23A1_20_rnd_HE","L23A1_20_rnd_HESH","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M"};			
			};
		};
	};
	class 4d_cvrt_Scim2_d: 4d_cvrt_Scim_base
	{
		scope = 0;
		displayName = "Scimitar Mk2";
		displayNameShort = "Scimitar 2";
		model = "\4d_cvrt\4d_cvrt_Scim2_d";
		vehicleClass = "CVRT_D";
	};
	class 4d_cvrt_Sult_base: Tank_F
	{
		scope = 0;
		faction = "UK_ARMED_FORCES";
		side = 1;
		cost = 1000000;
		picture = "\4d_cvrt\tex\m113\m163_vulcan_racs_CA.paa";
		Icon = "\4d_cvrt\tex\m113\icomap_vulcan_CA.paa";
		mapSize = 8;
		nameSound = "tank";
		driverAction = "BMP2_DriverOUT";
		driverInAction = "BMP2_Driver";
		driverOpticsModel = "\ca\Tracked\optika_tank_driver";
		driverForceOptics = 1;
		forceHideDriver = 0;
		irScanRangeMin = 10;
		irScanRangeMax = 8000;
		irScanGround = "true";
		terrainCoef = 0;
		acceleration = 9;
		maxSpeed = 80;
		gunnerCanSee = 31;
		hasCommander = 1;
		transportSoldier = 0;
		canFloat = 1;
		armor = 350;
		damageResistance = 0.03403;
		crew = "BAF_crewman_MTP";
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 15;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		threat[] = {1,0.5,1};
		typicalCargo[] = {"SoldierWCrew","SoldierWCrew"};
		radarType = 4;
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.62341e-005,1};
		soundGetIn[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out",0.562341,1};
		soundGetOut[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out",0.562341,1,60};
		soundEngineOnInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_start",1.0,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_start",2.51189,1.0,500};
		soundEngineOffInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_stop",1.0,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_stop",1.25893,0.8,500};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",0.707946,1,150};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",0.707946,1,150};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",0.707946,1,150};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",0.707946,1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",0.707946,1,150};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",0.707946,1,150};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",0.707946,1,150};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",0.707946,1,150};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",0.707946,1,150};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",0.707946,1,150};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",0.707946,1,150};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",0.707946,1,150};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Library
		{
			libTextDesc = "Widely exported vehicle produced by Alvis of Great Britain";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunBeg = "Usti hlavne";
				gunEnd = "Konec hlavne";
				body = "OtocVez";
				gun = "OtocHlaven";
				gunnerAction = "Abrams_CommanderOut";
				gunnerInAction = "Abrams_Commander";
				weapons[] = {"L21A1_RARDEN","BAF_L94A1"};
				magazines[] = {"6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","2000Rnd_762x51_L94A1"};
				animationSourceHatch = "hatchGunner";
				gunnerForceOptics = 1;
				outGunnerMayFire = "true";
				forceHideGunner = "false";
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
				discreteDistanceInitIndex = 5;
				memoryPointGun = "kulas";
				memoryPointGunnerOptics = "gunnerview";
				minElev = -3;
				maxElev = 70;
				minTurn = -360;
				maxTurn = 360;
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2};
						gunnerOpticsModel = "\ca\tracked_d_baf\gunnerOptics_FW510_2.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "\ca\tracked_d_baf\gunnerOptics_FW510.p3d";
						initFov = 0.039;
						minFov = 0.039;
						maxFov = 0.039;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "";
						gun = "";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						minElev = -10;
						maxElev = 40;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
						soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.01,1.0,30};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						gunnerAction = "Abrams_CommanderOut";
						gunnerInAction = "Abrams_Commander";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						turretInfoType = "RscWeaponRangeFinder";
						gunnerOpticsModel = "\ca\tracked_d_baf\2Dscope_RWS_baf";
						gunnerOpticsEffect[] = {};
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.155;
							minFov = 0.034;
							maxFov = 0.155;
							visionMode[] = {"Normal","NVG"};
							thermalMode[] = {0,1};
						};
						startEngine = 0;
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class gunBarrel
			{
				source = "reload";
				weapon = "L21A1_RARDEN";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"4d_cvrt\data\fv107.rvmat","4d_cvrt\data\fv107_DM.rvmat","4d_cvrt\data\fv107_de.rvmat"};
		};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-acce-02",0.31622776,1.0};
				limit = 0.15;
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-acce-02",1.0,1.0,700};
				limit = 0.15;
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-engine-02",1.4125376,1.0,900};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-idle-02",0.630957,1.0,300};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\noise2",1.0,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_05",1.1220185,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_04",1.2589254,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_03",1.4125376,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_02",1.5848932,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_01",1.7782794,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_05",1.0,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_04",1.1220185,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_03",1.2589254,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_02",1.5848932,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_01",1.7782794,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class Movement
			{
				sound[] = {"",1.0,1.0};
				frequency = "0";
				volume = "0";
			};
			class EngineIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-engine-02",1.0,1.0};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-idle-02",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\noise2",0.2238721,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_05",0.562341,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_04",0.630957,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_03",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_02",0.7943282,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_01",0.8912509,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_05",0.562341,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_04",0.630957,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_03",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_02",0.7943282,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_01",0.8912509,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
	};
	class 4d_cvrt_Sult_w: 4d_cvrt_Sult_base
	{
		scope = 0;
		displayName = "Sultan";
		model = "\4d_cvrt\4d_cvrt_Sult_w";
		vehicleClass = "CVRT_T";
		hiddenSelections[] = {};
	};
	class 4d_cvrt_Spar_base: Tank_F
	{
		scope = 0;
		faction = "UK_ARMED_FORCES";
		side = 1;
		cost = 1000000;
		picture = "\4d_cvrt\tex\m113\m163_vulcan_racs_CA.paa";
		Icon = "\4d_cvrt\tex\m113\icomap_vulcan_CA.paa";
		mapSize = 8;
		nameSound = "tank";
		driverAction = "BMP2_DriverOUT";
		driverInAction = "BMP2_Driver";
		driverOpticsModel = "\ca\Tracked\optika_tank_driver";
		driverForceOptics = 1;
		forceHideDriver = 0;
		irScanRangeMin = 10;
		irScanRangeMax = 8000;
		irScanGround = "true";
		terrainCoef = 0;
		acceleration = 9;
		maxSpeed = 80;
		gunnerCanSee = 31;
		hasCommander = 1;
		transportSoldier = 0;
		canFloat = 1;
		armor = 350;
		damageResistance = 0.03403;
		crew = "BAF_crewman_MTP";
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 15;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		threat[] = {1,0.5,1};
		typicalCargo[] = {"SoldierWCrew","SoldierWCrew"};
		radarType = 4;
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.62341e-005,1};
		soundGetIn[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out",0.562341,1};
		soundGetOut[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out",0.562341,1,60};
		soundEngineOnInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_start",1.0,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_start",2.51189,1.0,500};
		soundEngineOffInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_stop",1.0,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_stop",1.25893,0.8,500};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",0.707946,1,150};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",0.707946,1,150};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",0.707946,1,150};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",0.707946,1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",0.707946,1,150};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",0.707946,1,150};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",0.707946,1,150};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",0.707946,1,150};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",0.707946,1,150};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",0.707946,1,150};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",0.707946,1,150};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",0.707946,1,150};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Library
		{
			libTextDesc = "Widely exported vehicle produced by Alvis of Great Britain";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "OtocVez";
				gun = "OtocHlaven";
				gunnerAction = "Abrams_CommanderOut";
				gunnerInAction = "Abrams_Commander";
				weapons[] = {"L21A1_RARDEN","BAF_L94A1"};
				magazines[] = {"6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_APDS","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","6Rnd_30mm_L21A1_HE","2000Rnd_762x51_L94A1"};
				animationSourceHatch = "hatchGunner";
				gunnerForceOptics = 1;
				outGunnerMayFire = "true";
				forceHideGunner = "false";
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
				discreteDistanceInitIndex = 5;
				memoryPointGun = "kulas";
				memoryPointGunnerOptics = "gunnerview";
				minElev = -3;
				maxElev = 70;
				minTurn = -360;
				maxTurn = 360;
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2};
						gunnerOpticsModel = "\ca\tracked_d_baf\gunnerOptics_FW510_2.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "\ca\tracked_d_baf\gunnerOptics_FW510.p3d";
						initFov = 0.039;
						minFov = 0.039;
						maxFov = 0.039;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "";
						gun = "";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						minElev = -10;
						maxElev = 40;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
						soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.01,1.0,30};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						gunnerAction = "Abrams_CommanderOut";
						gunnerInAction = "Abrams_Commander";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						turretInfoType = "RscWeaponRangeFinder";
						gunnerOpticsModel = "\ca\tracked_d_baf\2Dscope_RWS_baf";
						gunnerOpticsEffect[] = {};
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.155;
							minFov = 0.034;
							maxFov = 0.155;
							visionMode[] = {"Normal","NVG"};
							thermalMode[] = {0,1};
						};
						startEngine = 0;
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class gunBarrel
			{
				source = "reload";
				weapon = "L21A1_RARDEN";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"4d_cvrt\data\fv107.rvmat","4d_cvrt\data\fv107_DM.rvmat","4d_cvrt\data\fv107_de.rvmat"};
		};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-acce-02",0.31622776,1.0};
				limit = 0.15;
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-acce-02",1.0,1.0,700};
				limit = 0.15;
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-engine-02",1.4125376,1.0,900};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\ext-tracked-idle-02",0.630957,1.0,300};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\noise2",1.0,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_05",1.1220185,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_04",1.2589254,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_03",1.4125376,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_02",1.5848932,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_01",1.7782794,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_05",1.0,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_04",1.1220185,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_03",1.2589254,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_02",1.5848932,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\sherman_01",1.7782794,1.0,280};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class Movement
			{
				sound[] = {"",1.0,1.0};
				frequency = "0";
				volume = "0";
			};
			class EngineIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-engine-02",1.0,1.0};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\int-tracked-idle-02",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\noise2",0.2238721,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_05",0.562341,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_04",0.630957,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_03",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_02",0.7943282,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_01",0.8912509,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_05",0.562341,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_04",0.630957,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_03",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_02",0.7943282,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\sherman_01",0.8912509,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
	};
	class 4d_cvrt_Spar_w: 4d_cvrt_Spar_base
	{
		scope = 0;
		displayName = "Spartan";
		model = "\4d_cvrt\4d_cvrt_Spar_w";
		vehicleClass = "CVRT_T";
		hiddenSelections[] = {};
	};
};
//};
