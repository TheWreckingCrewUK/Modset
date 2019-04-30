	class CUP_2S6M_Base;
	class CUP_O_2S6M_RU: CUP_2S6M_Base
	{
		armor = 150;
	};
	
	class rhsusf_Cougar_base;
	class rhsusf_cougar_GPK_base: rhsusf_Cougar_base
	{
		class Turrets;
	};
	class rhsusf_CGRCAT1A2_M2_usmc_d: rhsusf_cougar_GPK_base
	{
		
		class Turrets: Turrets
		{
			class MainTurret;
			class M2_Turret: MainTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 7;
			};
		};
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};

	class rhsusf_caiman_base;
	class rhsusf_caiman_GPK_base: rhsusf_caiman_base
	{
		class Turrets;
	};
	class rhsusf_M1220_M2_usarmy_d: rhsusf_caiman_GPK_base
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		};
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};
	
	class Car;
	class Car_F: Car
	{
        class NewTurret;
        class Turrets
        {
            class MainTurret: NewTurret
            {
            };
        };
	};
	class Wheeled_APC_F: Car_F
	{
		class EventHandlers;
		class Turrets;
	};
	class CUP_Mastiff_Base: Wheeled_APC_F
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_B_Mastiff_HMG_GB_D: CUP_Mastiff_Base
	{
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_B_Mastiff_HMG_GB_W: CUP_Mastiff_Base
	{
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_Wolfhound_Base: Wheeled_APC_F
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
		class EventHandlers: EventHandlers {
			init = " if (!isServer) exitWith {};			_car = (_this select 0);					_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [-1.2,2.5,1.69]];			_obj setVectorDirAndUp [[-1,0,0],[0,0.1,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;			_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [-1.05,2.5,1.69]];			_obj setVectorDirAndUp [[-1,0,0],[0,0.1,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;					_obj = 'Box_NATO_AmmoVeh_F' createvehicle [0,0,0];		_obj attachto [_car, [-0.3,-3.5,2.3]];						_obj = 'UK3CB_BAF_Box_762_Ammo' createvehicle [0,0,0];		_obj attachto [_car, [0.8,-4.5,2.0]];				_obj = 'UK3CB_BAF_Box_556_Ammo' createvehicle [0,0,0];		_obj attachto [_car, [0.8,-3.75,2.0]];				_obj = 'UK3CB_BAF_Box_40_Ammo' createvehicle [0,0,0];		_obj attachto [_car, [0.8,-3.0,2.0]];			";
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
	class CUP_B_Wolfhound_HMG_GB_D: CUP_Wolfhound_Base
	{
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_B_Wolfhound_HMG_GB_W: CUP_Wolfhound_Base
	{
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_B_Wolfhound_LMG_GB_D: CUP_Wolfhound_Base
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L7A2_1"};
				magazines[] = {"UK3CB_BAF_762_200Rnd_T"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_762_200Rnd_T";
				count = 15;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_B_Wolfhound_LMG_GB_W: CUP_Wolfhound_Base
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L7A2_1"};
				magazines[] = {"UK3CB_BAF_762_200Rnd_T"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_762_200Rnd_T";
				count = 15;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_HMMWV_Base: Car_F
	{
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
            };
        };
	};
	class CUP_HMMWV_Crows_M2_Base: CUP_HMMWV_Base
	{
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
            };
        };
	};
	class CUP_B_HMMWV_Crows_M2_USA: CUP_HMMWV_Crows_M2_Base
	{
		//class NewTurret;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 7;
			};
		};
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};

//handling modifications
	class MRAP_01_base_F;
	class rhsusf_hmmwe_base: MRAP_01_base_F {
		ace_cargo_size = 35;
		ace_cargo_canLoad = 1;	
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
		class Turrets;
		
	};
	
	class rhsusf_m1025_w_m2: rhsusf_m1025_w
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class M2_Turret: MainTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 7;
			};
		};
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};
	
	class rhsusf_m1025_w_mk19: rhsusf_m1025_w_m2
	{
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L134A1"};
				magazines[] = {"UK3CB_BAF_32Rnd_40mm_G_Box"};
			};
		};
		class TransportMagazines
		{
			class _xx_40mm
			{
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
				count = 7;
			};
		};
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};
		
	class rhsusf_m966_w: rhsusf_m1025_w
	{
		class Turrets: Turrets
		{
			class mainturret;
			class Tow_Turret: mainturret
			{
				magazines[] = {"rhs_mag_TOW2A","rhs_mag_TOW2A","rhs_mag_TOW2A","rhs_mag_TOW2A","rhs_mag_TOW2A","rhs_mag_TOW2A","rhs_mag_TOW2A"};
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
	class RHS_KORD_Base;
	class RHS_KORD_high_base: RHS_KORD_Base
	{
		class Turrets;
	};
	
	class rhs_KORD_high_VMF: RHS_KORD_high_base
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	
	class twc_KORD_high_20mm: rhs_KORD_high_VMF
	{
		displayName = "KORD (20MM)";
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {"200Rnd_20mm_G_belt", "200Rnd_20mm_G_belt", "200Rnd_20mm_G_belt"};
				weapons[] = {"twc_rhs_weap_kord_20"};
			};
		};
	};
	
	//class rhs_KORD_high_VMF;
	
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
		differentialType = "all_limited";
		frontBias = 1.1;
		frontRearSplit = 0.8;
		rearBias = 2.5;
		turnCoef = 2;
		maxSpeed = 145;
		normalSpeedForwardCoef = 1.1;
		maxOmega = 937.76;
		latency = 0.4;
		gearBox[] = {-8,0,10,6.15,4.44,2.33,2.8,2.5};
		torqueCurve[] = {{0.125,0.521053},{0.25,0.718947},{0.375,0.831579},{0.5,0.884211},{0.625,0.989474},{0.75,1.042105},{0.875,1.2},{1.12513,0}};
		class Wheels {
			class LF {
			boneName = "wheel_1_1_damper";
			boundary = "wheel_1_1_bound";
			center = "wheel_1_1_axis";
			dampingRate = 0.1;
			dampingRateDamaged = 1;
			dampingRateDestroyed = 1000;
			frictionVsSlipGraph[] = {{ 0.0, 0.7 }, { 0.5, 0.6 },{ 1, 0.5 }};
			latStiffX = 20;
			latStiffY = 120;
			longitudinalStiffnessPerUnitGravity = 9000;
			mass = 40;
			maxCompression = 0.4;
			maxDroop = 0.02;
			maxHandBrakeTorque = 0;
			MOI = 1.97192;
			side = "left";
			springDamperRate = 6500;
			springStrength = 16000;
			sprungMass = 625;
			maxBrakeTorque = 300;
			steering = 1;
			suspForceAppPointOffset = "wheel_1_1_axis";
			suspTravelDirection[] = {0,-1,0};
			tireForceAppPointOffset = "wheel_1_1_axis";
			width = 0.2;
			};
			class RF:LF {
			frictionVsSlipGraph[] = {{ 0.0, 0.7 }, { 0.5, 0.6 },{ 1, 0.5 }};
			springDamperRate = 6500;
			springStrength = 16000;
			sprungMass = 625;
			maxBrakeTorque = 300;
			};
			class RR: RF {
			frictionVsSlipGraph[] = {{ 0.0, 0.7 }, { 0.5, 0.6 },{ 1, 0.5 }};
			springDamperRate = 6500;
			springStrength = 16000;
			sprungMass = 625;
			maxBrakeTorque = 500;
			};
			class LR: LF {
			frictionVsSlipGraph[] = {{ 0.0, 0.7 }, { 0.5, 0.6 },{ 1, 0.5 }};
			springDamperRate = 6500;
			springStrength = 16000;
			sprungMass = 625;
			maxBrakeTorque = 500;
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

	class UK3CB_BAF_LandRover_WMIK_GMG_Base: UK3CB_BAF_LandRover_WMIK_Base {
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
	
	/*
	class car_F: Car
    {
        class Components;
        explosionEffect = "";
        // class ViewOptics;
        class HitPoints
        {
            class HitLFWheel;
            class HitLBWheel;
            class HitLMWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRBWheel;
            class HitRMWheel;
            class HitRF2Wheel;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
            class HitFuel;
            class HitEngine;
            class HitHull;
        };
        class NewTurret;
        class Turrets
        {
            class MainTurret: NewTurret
            {
                class Components;
                class ViewGunner;
                // class ViewOptics;
                class HitPoints;
            };
        };
        class AnimationSources;
       
        class Sounds;
    };
    class Wheeled_APC: car_F{
        explosionEffect = "";
    };
    
	
    class CUP_HMMWV_Base: Car_F
    {
        tf_hasLRradio_api = 1;
        faction = "rhs_faction_usmc_wd";
        class HitEngine
            {
                class DestructionEffects
                {
                    ammoExplosionEffect = "";
                    class RHS_Engine_Smoke
                    {
                            simulation = "particles";
                            type = "SmallWreckSmoke";
                            position = "engine_smoke1";
                            intensity = 0.5;
                            interval = 1;
                            lifeTime = 60;
                    };
                    class RHS_Engine_Fire: RHS_Engine_Smoke
                    {
                            type = "SmallFireFPlace";
                    };
                    class RHS_Engine_Sparks: RHS_Engine_Smoke
                    {
                            type = "FireSparks";
                    };
                    class RHS_Engine_Sounds: RHS_Engine_Smoke
                    {
                            simulation = "sound";
                            type = "Fire";
                    };
                    class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
                    {
                            type = "WeaponWreckSmoke";
                            position = "engine_smoke2";
                    };
                    class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
                    {
                            position = "engine_smoke3";
                    };
                };
            };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"BN_RHS_M2"};
                magazines[] = {"rhs_mag_100rnd_127x99_mag"};
            };
        };
    };
   
   
    class CUP_HMMWV_Crows_M2_Base: CUP_HMMWV_Base
    {
        cargoAction[] = {"RHS_HMMWV_Cargo","RHS_HMMWV_Cargo"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                turretInfoType = "RscWeaponRangeZeroing";
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
                discreteDistanceInitIndex = 5;
                weapons[] = {"tu_CUP_Vhmg_M2_CROWS_gunner","SmokeLauncher"};
                magazines[] = {"rhs_mag_100rnd_127x99_mag","rhs_mag_100rnd_127x99_mag","rhs_mag_100rnd_127x99_mag","rhs_mag_100rnd_127x99_mag","rhs_mag_100rnd_127x99_mag","rhs_mag_100rnd_127x99_mag","SmokeLauncherMag"};
            };
        };
	};
*/