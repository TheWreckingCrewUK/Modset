class UK3CB_BAF_LandRover_WMIK_Base;
class UK3CB_BAF_LandRover_Base;
class Wheeled_APC_F;


class UK3CB_BAF_LandRover_WMIK_GPMG_Base: UK3CB_BAF_LandRover_WMIK_Base
	{
		

		class EventHandlers: EventHandlers {
			init = "			_car = (_this select 0);			_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [0.85,0.28,-0.8]];			_obj setVectorDirAndUp [[1,0,0.2],[0,0,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;	[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;	_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [0.85,-0.2,-0.8]];		_obj setVectorDirAndUp [[1,0,0.2],[0,0,1]];					[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;		_car animate ['sparewheel_hide', 1];		_car animate ['gear_hide', 1];		 _obj = 'fuel_can' createvehicle [0,0,0];  _obj attachto [_car, [-1.11,-1.7,-1.5]];   _obj setVectorDirAndUp [[1,0,0],[0,0,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;			  _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-0.1,2.95,-1.4]];   _obj setVectorDirAndUp [[0,-0.1,1],[0,1,0]]; 		 _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.1,-0.2,-0.8]];   _obj setVectorDirAndUp [[0.2,0,1],[0,0,1]];		 _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.1,-1.3,-0.7]];   _obj setVectorDirAndUp [[0.2,0,1],[0,0,1]]; 		 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [-1.0,-0,-1.57]];   _obj setVectorDirAndUp [[0,1,0],[1,0,0]]; 		 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [0.85,-0,-1.57]];   _obj setVectorDirAndUp [[0,1,0],[1,0,0]];";
			
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
class UK3CB_BAF_LandRover_WMIK_HMG_Base: UK3CB_BAF_LandRover_WMIK_Base
	{
		

		class EventHandlers: EventHandlers {
			init = "			_car = (_this select 0);			_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [0.85,0.28,-0.7]];			_obj setVectorDirAndUp [[1,0,0.2],[0,0,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;	[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;	_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [0.85,-0.2,-0.7]];		_obj setVectorDirAndUp [[1,0,0.2],[0,0,1]];					[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;		_car animate ['sparewheel_hide', 1];		_car animate ['gear_hide', 1];		 _obj = 'fuel_can' createvehicle [0,0,0];  _obj attachto [_car, [-1.11,-1.7,-1.4]];   _obj setVectorDirAndUp [[1,0,0],[0,0,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;			  _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-0.1,2.95,-1.3]];   _obj setVectorDirAndUp [[0,-0.1,1],[0,1,0]]; 		 _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.1,-0.2,-0.7]];   _obj setVectorDirAndUp [[0.2,0,1],[0,0,1]];		 _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.1,-1.3,-0.6]];   _obj setVectorDirAndUp [[0.2,0,1],[0,0,1]]; 		 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [-1.0,-0,-1.41]];   _obj setVectorDirAndUp [[0,1,0],[1,0,0]]; 		 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [0.85,-0,-1.41]];   _obj setVectorDirAndUp [[0,1,0],[1,0,0]];";
			
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
	
class UK3CB_BAF_LandRover_Snatch_Base: UK3CB_BAF_LandRover_Base
	{
		

		class EventHandlers: EventHandlers {
			init = "			_car = (_this select 0);	 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [-0.9,-0.35,-1.05]];   _obj setVectorDirAndUp [[0,1,0],[1,0,0]]; 		 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [0.9,-0.35,-1.05]];   _obj setVectorDirAndUp [[0,1,0],[1,0,0]];			_obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [0,2.65,-0.9]];   _obj setVectorDirAndUp [[0,0,1],[0,1,0]]; _car animate ['sparewheel_hide', 1];	";
			
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
	
class UK3CB_BAF_LandRover_Hard_Base: UK3CB_BAF_LandRover_Base
	{
		

		class EventHandlers: EventHandlers {
			init = "			_car = (_this select 0);	 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [-0.9,-0.3,-1.15]];   _obj setVectorDirAndUp [[0,1,0],[1,0,0]]; 		 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [0.9,-0.35,-1.05]];   _obj setVectorDirAndUp [[0,1,0],[1,0,0]];	_car animate ['sparewheel_hide', 1];		_obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.05,-0.25,-0.35]];   _obj setVectorDirAndUp [[0.1,0,1],[0,0,1]]; 	";
			
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
	
	
class UK3CB_BAF_LandRover_Soft_Base: UK3CB_BAF_LandRover_Base
	{
		

		class EventHandlers: EventHandlers {
			init = "			_car = (_this select 0);	 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [0.8,-0.35,-1.15]];   _obj setVectorDirAndUp [[0,1,0],[1,0,0]]; 		 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [-1.0,-0.35,-1.15]];   _obj setVectorDirAndUp [[0,1,0],[1,0,0]];_obj attachto [_car, [-1.2,-0.25,-0.35]];   _obj setVectorDirAndUp [[0.1,0,1],[0,0,1]]; ";
			
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
	
	
	class UK3CB_BAF_Jackal_Base_D;
class UK3CB_BAF_Coyote_L111A1_Base_D: UK3CB_BAF_Jackal_Base_D 
	{
		

		class EventHandlers: EventHandlers {
			init = "			_car = (_this select 0);	 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [0.9,1.0,-1.5]];   _obj setVectorDirAndUp [[0,0,1],[1,0,0]]; 	 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [-0.8,1.0,-1.5]];   _obj setVectorDirAndUp [[0,0,1],[1,0,0]]; ";
			
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
class UK3CB_BAF_Coyote_L134A1_Base_D: UK3CB_BAF_Jackal_Base_D 
	{
		

		class EventHandlers: EventHandlers {
			init = "			_car = (_this select 0);	 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [0.9,1.0,-1.5]];   _obj setVectorDirAndUp [[0,0,1],[1,0,0]]; 	 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [-0.8,1.0,-1.5]];   _obj setVectorDirAndUp [[0,0,1],[1,0,0]]; ";
			
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
	
	
class UK3CB_BAF_Jackal2_L111A1_Base_D: UK3CB_BAF_Coyote_L111A1_Base_D
	{
		

		class EventHandlers: EventHandlers {
			init = "			_car = (_this select 0);	 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [-1,0.3,-1.5]];   _obj setVectorDirAndUp [[0,0,1],[1,0,0]]; 	 _obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];  _obj attachto [_car, [0.7,0.3,-1.5]];   _obj setVectorDirAndUp [[0,0,1],[1,0,0]]; ";
			
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
	
	
class CUP_Mastiff_Base : Wheeled_APC_F
	{
		

		class EventHandlers: EventHandlers {
			init = "			_car = (_this select 0);			_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [-1.1,0.4,1]];			_obj setVectorDirAndUp [[1,0,0],[0,0,1]];			_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [-1.1,-0.7,0.95]];			_obj setVectorDirAndUp [[1,0,0],[0,0,1]];						_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [-1.1,-0.7,1.5]];			_obj setVectorDirAndUp [[1,0,0],[0,0,1]];						_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [1.1,0.4,1]];			_obj setVectorDirAndUp [[1,0,0],[0,0,1]];						_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [1.1,-0.7,0.95]];			_obj setVectorDirAndUp [[1,0,0],[0,0,1]];						_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [1.1,-0.7,1.5]];			_obj setVectorDirAndUp [[1,0,0],[0,0,1]];			";
			
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
	
class CUP_Wolfhound_Base : Wheeled_APC_F
	{
		

		class EventHandlers: EventHandlers {
			init = "			_car = (_this select 0);			_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [-1.1,0.4,1]];			_obj setVectorDirAndUp [[1,0,0],[0,0,1]];			_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [-1.1,-0.7,0.95]];			_obj setVectorDirAndUp [[1,0,0],[0,0,1]];						_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [-1.1,-0.7,1.5]];			_obj setVectorDirAndUp [[1,0,0],[0,0,1]];						_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [1.1,0.4,1]];			_obj setVectorDirAndUp [[1,0,0],[0,0,1]];						_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [1.1,-0.7,0.95]];			_obj setVectorDirAndUp [[1,0,0],[0,0,1]];						_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [1.1,-0.7,1.5]];			_obj setVectorDirAndUp [[1,0,0],[0,0,1]];								_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [-1.1,-1.8,1.7]];			_obj setVectorDirAndUp [[1,0,0],[0,0,1]];							_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [1.1,-1.8,1.7]];			_obj setVectorDirAndUp [[1,0,0],[0,0,1]];		_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [-1.2,2.5,1.69]];			_obj setVectorDirAndUp [[-1,0,0],[0,0.1,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;			_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [-1.05,2.5,1.69]];			_obj setVectorDirAndUp [[-1,0,0],[0,0.1,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;					_obj = 'Box_NATO_AmmoVeh_F' createvehicle [0,0,0];		_obj attachto [_car, [-0.3,-3.5,2.3]];						_obj = 'UK3CB_BAF_Box_762_Ammo' createvehicle [0,0,0];		_obj attachto [_car, [0.8,-4.5,2.0]];				_obj = 'UK3CB_BAF_Box_556_Ammo' createvehicle [0,0,0];		_obj attachto [_car, [0.8,-3.75,2.0]];				_obj = 'UK3CB_BAF_Box_40_Ammo' createvehicle [0,0,0];		_obj attachto [_car, [0.8,-3.0,2.0]];			";
			
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
	};	
	
	
	/*
	
	createvehicle
	attachto
	setvector
	
	_obj = 'TWC_Public_AmmoBox_Hobbs_Precious' createvehicle [0,0,0];		_obj attachto [_car, [-1.0,-0,-1.57]];			_obj setVectorDirAndUp [[0,1,0],[1,0,0]];	
	
	
	
	*/
	
	
