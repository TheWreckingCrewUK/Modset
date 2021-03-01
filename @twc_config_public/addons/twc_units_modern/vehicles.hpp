	class CUP_2S6M_Base;
	class CUP_O_2S6M_RU: CUP_2S6M_Base
	{
		armor = 150;
	};
	
	
//handling modifications
	class MRAP_01_base_F;
	class Offroad_01_base_F;
	class Truck_F;
	class Truck_01_base_F;
	class OTR21_Base: Truck_F
	{
		class Wheels
		{
			class LF
			{
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.2, 0.5 }, { 1.0, 0.8 } };
				longitudinalStiffnessPerUnitGravity = 15000;
				maxBrakeTorque = 3500;
				maxCompression = 0.4;
				maxHandBrakeTorque = 2000;
			};
			class LR: LF
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3500;
			};
			class LR2: LR
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3500;
			};
			class RF: LF
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3500;
			};
			class RR: RF
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3500;
			};
			class RR2: RR
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3500;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.1; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class O_Truck_02_covered_F;
	
	class Tank_F;
	
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
	
	class I_Sniper_F;
	class twc_I_Sniper_F: I_Sniper_F
	{
		_generalMacro = "twc_I_Sniper_F";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\twc_units_modern\textures\digicamo_co.jpg"};
	};
	
	class ACE_medicalSupplyCrate_advanced;
	class twc_public_medicalbox_small: ACE_medicalSupplyCrate_advanced
	{
		maximumLoad = 300;
		displayName = "Medical Supplies";
	};
	
	class ACE_Box_Ammo;
	class twc_public_762box_small: ACE_Box_Ammo
	{
		maximumLoad = 800;
		displayName = "7.62 Belts";
	};
	class twc_public_50calbox_small: ACE_Box_Ammo
	{
		displayName = ".50 Belts";
	};
	class twc_public_40mmbox_small: ACE_Box_Ammo
	{
		displayName = "40mm Belts";
	};
	class UK3CB_BAF_Box_WpsLaunch_Javelin;
	class twc_public_launcherbox_small_gen: UK3CB_BAF_Box_WpsLaunch_Javelin
	{
		maximumLoad = 720;
		displayName = "Launcher Box";
	};
	class twc_public_launcherbox_small_at4: UK3CB_BAF_Box_WpsLaunch_Javelin
	{
		maximumLoad = 720;
		displayName = "AT4 Launchers";
	};
	class twc_public_launcherbox_small_jav: twc_public_launcherbox_small_gen
	{
		maximumLoad = 340;
		displayName = "Javelin Tubes";
	};
	class twc_public_launcherbox_small_maaws: twc_public_launcherbox_small_gen
	{
		displayName = "MAAWS Rockets";
		maximumLoad = 700;
	};
	class twc_public_launcherbox_small_nlaw: twc_public_launcherbox_small_gen
	{
		displayName = "NLAW Launchers";
		maximumLoad = 600;
	};
	class CUP_Mastiff_Base: Wheeled_APC_F
	{
		class NewTurret;
		class Turrets
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
	
	class CUP_B_Mastiff_GMG_GB_D: CUP_Mastiff_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_L134A1_vehicle"};
				magazines[] = {"UK3CB_BAF_32Rnd_40mm_G_Box"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
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
	
	class CUP_B_Mastiff_GMG_GB_W: CUP_Mastiff_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_L134A1_vehicle"};
				magazines[] = {"UK3CB_BAF_32Rnd_40mm_G_Box"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
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
	
	class StaticWeapon;
	class StaticATWeapon: StaticWeapon
	{
		class Turrets
		{
			class MainTurret;
		};
	};

	class UK3CB_BAF_LandRover_Base;

	class UK3CB_BAF_LandRover_WMIK_Base: UK3CB_BAF_LandRover_Base {
		class EventHandlers;
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
		displayname = "Land Rover WMIK HMG (Uprated)";
		maximumLoad = 5000;
		enginePower = 140;
		peakTorque = 550;
		maxSpeed = 230;
		torqueCurve[] = { { 0.0, 0.85 }, { 0.6, 1.8 }, { 1.0, 0.6 } };
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
				weapon = "CUP_launch_M72A6";
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
				magazine = "CUP_17Rnd_9x19_glock17";
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
        class HitEngine
            {
                class DestructionEffects
                {
                    ammoExplosionEffect = "";
                };
            };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
            };
        };
    };
   
   
    class CUP_HMMWV_Crows_M2_Base: CUP_HMMWV_Base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                turretInfoType = "RscWeaponRangeZeroing";
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
                discreteDistanceInitIndex = 5;
            };
        };
	};
*/