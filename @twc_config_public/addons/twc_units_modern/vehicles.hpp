class Car_F;
class Wheeled_APC_F: Car_F {
	class EventHandlers;
};

//handling modifications
	class MRAP_01_base_F;
	class rhsusf_hmmwe_base: MRAP_01_base_F {
		class Wheels {
			class LF;
		};
	};

	class rhsusf_m998_w_2dr: rhsusf_hmmwe_base {
		class Wheels:Wheels {
			class LF:LF {
				frictionVsSlipGraph[] = {{ 0.0, 0.8 }, { 0.3, 0.6 }, { 1.0, 0.5 }};
				maxCompression = 0.25;
				maxDroop = 0.1;
				springDamperRate = 4500;
				springStrength = 36000;
			};
		};
	};
	
	class rhsusf_m998_w_4dr_halftop;
	class rhsusf_m998_w_4dr_fulltop: rhsusf_m998_w_4dr_halftop {
		class Wheels {
			class LF;
		};
	};
	
	class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop {
		class Wheels:Wheels {
			class LF:LF {
				frictionVsSlipGraph[] = {{ 0.0, 0.8 }, { 0.3, 0.6 }, { 1.0, 0.5 }};
				maxCompression = 0.25;
				maxDroop = 0.1;
				springDamperRate = 4500;
				springStrength = 36000;
			};
		};
		
	};
	
	class StaticWeapon;
	class StaticATWeapon: StaticWeapon
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	
	class RHS_TOW_TriPod_base: StaticATWeapon
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {"rhs_mag_TOW2A", "rhs_mag_TOW2A", "rhs_mag_TOW2A"};
			};
		};
	};
	
	class UK3CB_BAF_LandRover_Base;

	class UK3CB_BAF_LandRover_WMIK_Base: UK3CB_BAF_LandRover_Base {
		class EventHandlers;
	};

	class CUP_CH47F_base;
	class CUP_B_CH47F_GB: CUP_CH47F_base {
		class EventHandlers;
	};
	
	class twc_mert_ch47: CUP_B_CH47F_GB {
		displayname = "CH-47D (MERT)";
	};
	
	class Heli_Attack_01_base_F;
	class RHS_AH64_base: Heli_Attack_01_base_F {
		class hitpoints {
			class HitHRotor;
		};
		
	};
	
	class RHS_AH64D: RHS_AH64_base
	{
		armor = 70;
		armorStructural = 200;
		cyclicAsideForceCoef = 1.6;
		cyclicForwardForceCoef = 1.4;
		backRotorForceCoef = 1;
		liftForceCoef = 0.9;

		class hitpoints: hitpoints
		{
			class HitHRotor: HitHRotor
			{
				armor = 2;
			};
		};
	};
	
	class rhsusf_mrzr_base: MRAP_01_base_F {
		
		ace_cargo_size = 25;
		ace_cargo_canLoad = 1;
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 2;
		differentialType = "front_limited";
		frontBias = 1.1;
		rearBias = 2.5;
		turnCoef = 2;
		maxSpeed = 145;
		normalSpeedForwardCoef = 1.1;
		latency = 0.4;
		gearBox[] = {-8,0,10,6.15,4.44,2.33,2.8,2.5};
		class Wheels {
			class LF {
			boneName = "wheel_1_1_damper";
			boundary = "wheel_1_1_bound";
			center = "wheel_1_1_axis";
			dampingRate = 0.1;
			dampingRateDamaged = 1;
			dampingRateDestroyed = 1000;
			frictionVsSlipGraph[] = {{ 0.0, 0.7 }, { 0.5, 0.5 }, { 1.0, 0.35 }};
			latStiffX = 20;
			latStiffY = 120;
			longitudinalStiffnessPerUnitGravity = 9000;
			mass = 40;
			maxBrakeTorque = 2000;
			maxCompression = 0.2;
			maxDroop = 0.12;
			maxHandBrakeTorque = 0;
			MOI = 1.97192;
			side = "left";
			springDamperRate = 2500;
			springStrength = 14000;
			sprungMass = -1;
			steering = 1;
			suspForceAppPointOffset = "wheel_1_1_axis";
			suspTravelDirection[] = {0,-1,0};
			tireForceAppPointOffset = "wheel_1_1_axis";
			width = 0.2;
			};
			class RF:LF {};
			class RR: RF {
			frictionVsSlipGraph[] = {{ 0.0, 0.55 }, { 0.8, 0.5 }, { 1.0, 0.4 }};
			};
			class LR: LF {
			frictionVsSlipGraph[] = {{ 0.0, 0.55 }, { 0.8, 0.5 }, { 1.0, 0.4 }};
			};
			
		};
		class complexGearbox {
			driveString = "D";
			gearBoxMode = "auto";
			GearboxRatios[] = {"R1",-2.47,"N",0,"D1",3.55,"D2",1.8,"D3",1.1};
			moveOffGear = 1;
			neutralString = "N";
			reverseString = "R";
			TransmissionRatios[] = {"High",6.8};
		};
		
	};
	
	
	
	class Quadbike_01_base_F: Car_F {
		ace_cargo_size = 15;
		ace_cargo_canLoad = 1;	
		enginepower = 10;
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 1;
		clutchStrength = 30;
		differentialType = "all_limited";
		frontRearSplit = 0.1;
		frontBias = 1.1;
		rearBias = 2.5;
		centreBias = 1.8;
		maxOmega = 200;
		maxSpeed = 60;
		turnCoef = 3.5;
			class Wheels {
				class LF {
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.5;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				frictionVsSlipGraph[] = {[0,0.8],[0.5,0.9],[1,0.7]};
				latStiffX = 25;
				latStiffY = 120;
				longitudinalStiffnessPerUnitGravity = 5000;
				mass = 30;
				maxBrakeTorque = 700;
				maxCompression = 0.05;
				maxDroop = 0.15;
				maxHandBrakeTorque = 0;
				MOI = 10.3;
				side = "left";
				springDamperRate = 1000;
				springStrength = 9050;
				sprungMass = 50;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {-0.125,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
				};
				class LR: LF {
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				maxHandBrakeTorque = 800;
				frictionVsSlipGraph[] = {[0,0.8],[0.5,0.9],[1,0.5]};
				latStiffX = 25;
				springDamperRate = 650;
				steering = 0;
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				};
				class RF: LF {
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				side = "right";
				suspForceAppPointOffset = "wheel_2_1_axis";
				suspTravelDirection[] = {0.125,-1,0};
				tireForceAppPointOffset = "wheel_2_1_axis";
				};
				class RR: RF {
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				maxHandBrakeTorque = 800;
				frictionVsSlipGraph[] = {[0,0.8],[0.5,0.9],[1,0.5]};
				latStiffX = 25;
				springDamperRate = 650;
				steering = 0;
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				};
			};
		
	};
	
	class UK3CB_BAF_LandRover_WMIK_GPMG_Base: UK3CB_BAF_LandRover_WMIK_Base {
		class EventHandlers: EventHandlers {
			init = " if (!isServer) exitWith {};			_car = (_this select 0);			_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [0.85,0.28,-0.8]];			_obj setVectorDirAndUp [[1,0,0.2],[0,0,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;	[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;	_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [0.85,-0.2,-0.8]];		_obj setVectorDirAndUp [[1,0,0.2],[0,0,1]];					[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;		_car animate ['sparewheel_hide', 1];		_car animate ['gear_hide', 1];		 _obj = 'fuel_can' createvehicle [0,0,0];  _obj attachto [_car, [-1.11,-1.7,-1.5]];   _obj setVectorDirAndUp [[1,0,0],[0,0,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;			  _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-0.1,2.95,-1.4]];   _obj setVectorDirAndUp [[0,-0.1,1],[0,1,0]]; 		 _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.1,-0.2,-0.8]];   _obj setVectorDirAndUp [[0.2,0,1],[0,0,1]];		 _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.1,-1.3,-0.7]];   _obj setVectorDirAndUp [[0.2,0,1],[0,0,1]]; 		";
			
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};

	class UK3CB_BAF_LandRover_WMIK_HMG_Base: UK3CB_BAF_LandRover_WMIK_Base {
		class EventHandlers: EventHandlers {
			init = " if (!isServer) exitWith {};			_car = (_this select 0);			_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [0.85,0.28,-0.7]];			_obj setVectorDirAndUp [[1,0,0.2],[0,0,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;	[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;	_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [0.85,-0.2,-0.7]];		_obj setVectorDirAndUp [[1,0,0.2],[0,0,1]];					[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;		_car animate ['sparewheel_hide', 1];		_car animate ['gear_hide', 1];		 _obj = 'fuel_can' createvehicle [0,0,0];  _obj attachto [_car, [-1.11,-1.7,-1.4]];   _obj setVectorDirAndUp [[1,0,0],[0,0,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;			  _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-0.1,2.95,-1.3]];   _obj setVectorDirAndUp [[0,-0.1,1],[0,1,0]]; 		 _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.1,-0.2,-0.7]];   _obj setVectorDirAndUp [[0.2,0,1],[0,0,1]];		 _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.1,-1.3,-0.6]];   _obj setVectorDirAndUp [[0.2,0,1],[0,0,1]]; 		";
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
	class UK3CB_BAF_LandRover_Snatch_Base: UK3CB_BAF_LandRover_Base {
		class EventHandlers: EventHandlers {
			init = " if (!isServer) exitWith {};			_car = (_this select 0);			_obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [0,2.65,-0.9]];   _obj setVectorDirAndUp [[0,0,1],[0,1,0]]; _car animate ['sparewheel_hide', 1];	";
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
	class UK3CB_BAF_LandRover_Hard_Base: UK3CB_BAF_LandRover_Base {
		class EventHandlers: EventHandlers {
			init = " if (!isServer) exitWith {};			_car = (_this select 0);		_car animate ['sparewheel_hide', 1];		_obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.05,-0.25,-0.35]];   _obj setVectorDirAndUp [[0.1,0,1],[0,0,1]]; 	";
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
	class CUP_Wolfhound_Base : Wheeled_APC_F {
		class EventHandlers: EventHandlers {
			init = " if (!isServer) exitWith {};			_car = (_this select 0);					_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [-1.2,2.5,1.69]];			_obj setVectorDirAndUp [[-1,0,0],[0,0.1,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;			_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [-1.05,2.5,1.69]];			_obj setVectorDirAndUp [[-1,0,0],[0,0.1,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;					_obj = 'Box_NATO_AmmoVeh_F' createvehicle [0,0,0];		_obj attachto [_car, [-0.3,-3.5,2.3]];						_obj = 'UK3CB_BAF_Box_762_Ammo' createvehicle [0,0,0];		_obj attachto [_car, [0.8,-4.5,2.0]];				_obj = 'UK3CB_BAF_Box_556_Ammo' createvehicle [0,0,0];		_obj attachto [_car, [0.8,-3.75,2.0]];				_obj = 'UK3CB_BAF_Box_40_Ammo' createvehicle [0,0,0];		_obj attachto [_car, [0.8,-3.0,2.0]];			";
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
	class UK3CB_BAF_LandRover_Hard_FFR_Green_A;
	class UK3CB_BAF_LandRover_Hard_FFR_Green_A_TWCBaseRadio: UK3CB_BAF_LandRover_Hard_FFR_Green_A {
		displayname = "Land Rover TWC Base Radio";
		class AcreRacks {
			class Rack_1 {
				displayName = "Dash"; // Name is displayed in the interaction menu.
				shortName = "Dash";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"inside", "external"}; // Who has access. "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F"; // Predefined mounted radio
				isRadioRemovable = 0;
			};
		};

		class AcreIntercoms {};
	};
	
	class UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_A;
	class UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_A_TWC: UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_A {
		displayname = "Land Rover WMIK HMG (Rack+Ammo)";
		maximumLoad = 5000;
		enginePower = 120;
		peakTorque = 430;
		
		class AcreRacks {
			class Rack_1 {
				displayName = "Dash"; // Name is displayed in the interaction menu.
				shortName = "Dash";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"inside", "external"}; // Who has access. "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F"; // Predefined mounted radio
				isRadioRemovable = 0;
			};
		};

		class AcreIntercoms {};
		class transportWeapons {
			class _xx_law {
				weapon = "rhs_weap_m72a7";
				count = 2;
			};

			class _xx_tripod {
				weapon = "UK3CB_BAF_Tripod";
				count = 1;
			};
		};

		class transportMagazines {
			class _xx_stanag {
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 25;
			};
			class _xx_stanagTracer {
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 15;
			};
			class _xx_pistolmag
			{
				magazine = "rhsusf_mag_17Rnd_9x19_JHP";
				count = 10;
			};
			class _xx_stanag_box
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 10;
			};
			class _xx_stanag_boxTracer
			{
				magazine ="UK3CB_BAF_556_200Rnd_T";
				count = 7;
			};
			class _xx_127_box
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 6;
			};
			class _xx_762_belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 10;
			};
			class _xx_762_beltTracer
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 3;
			};
			class _xx_762_mag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 10;
			};
			class _xx_762_magTracer
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd_T";
				count = 5;
			};
			class _xx_1rnd_he
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 20;
			};
			class _xx_1rnd_smoke
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 5;
			};
			class _xx_handgrenade
			{
				magazine = "CUP_HandGrenade_L109A2_HE";
				count = 5;
			};
			class _xx_smokeshell
			{
				magazine = "SmokeShell";
				count = 5;
			};
			class _xx_smokeshell_red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_smokeshell_blue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
		};
		class transportItems
		{
			class _xx_defusalkit
			{
				name = "ACE_DefusalKit";
				count = 2;
			};
			class _xx_shovel
			{
				name = "ACE_EntrenchingTool";
				count = 2;
			};
			class _xx_cabletie
			{
				name = "ACE_CableTie";
				count = 10;
			};
			class _xx_tourniquet
			{
				name = "ACE_tourniquet";
				count = 15;
			};
			class _xx_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 25;
			};
			class _xx_packingBandage
			{
				name = "ACE_packingBandage";
				count = 25;
			};
			class _xx_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 25;
			};
			class quickclot
			{
				name = "ACE_quickclot";
				count = 25;
			};
			class morphine
			{
				name = "ACE_morphine";
				count = 20;
			};
			class epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class saline_250
			{
				name = "ACE_salineIV_250";
				count = 20;
			};
			class saline
			{
				name = "ACE_salineIV_500";
				count = 20;
			};
		};
		
		class Wheels {
			class LF {
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				frictionVsSlipGraph[] = {[0,1.3],[0.6,1.4],[1,1.3]};
				latStiffX = 10;
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
				sprungMass = 625;
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
				frictionVsSlipGraph[] = {[0,1.2],[0.2,1.5],[1,0.6]};
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 2950;
				maxDroop = 0.1;
				maxHandBrakeTorque = 9000;
				moi = 6;
				side = "left";
				sprungMass = 625;
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
			
			class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.5; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 1.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
             
           turnDecreaseConst  = 5.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 3.0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.7; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};	
	
	
	

	
