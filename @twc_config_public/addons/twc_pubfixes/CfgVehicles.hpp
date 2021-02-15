
class CfgVehicles {

	class LandVehicle;
	class Car: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				class twc_getwinch {
					displayName = "Pick Up Winch";
					condition = "[_target] call twc_winch_fnc_pickupwinchcond";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					statement = "_this spawn twc_winch_fnc_pickupwinch";
				};
				class twc_stowwinch {
					displayName = "Stow Winch";
					condition = "[_target] call twc_winch_fnc_stowwinchcond";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					statement = "_this spawn twc_winch_fnc_stowwinch";
				};
				class twc_attachwinch {
					displayName = "Attach Winch";
					condition = "[_target] call twc_winch_fnc_attachwinchcond";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					statement = "_this spawn twc_winch_fnc_attachwinch";
				};
				class twc_startwinch {
					displayName = "Start Winch";
					condition = "[_target] call twc_winch_fnc_startwinchcond";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					statement = "[_target, player] remoteexec ['twc_winch_fnc_startwinch', _target];";
				};
				class twc_cancelwinch {
					displayName = "Stop Winch";
					condition = "[_target] call twc_winch_fnc_cancelwinchcond";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					statement = "_this spawn twc_winch_fnc_cancelwinch";
				};
				class twc_recovervehicle {
					displayName = "Recover Vehicle";
					condition = "(alive _target) && (!(player getvariable ['twc_playerisflippingvehicle', false])) && (!(_target getvariable ['twc_isbeingrecovered', false])) && (1 < (vectorUp _target) vectorDistance (surfaceNormal getPosATL _target))";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					statement = "(player setvariable ['twc_playerisflippingvehicle', true]);[_target, player] remoteexec ['twc_winch_fnc_recovervehicle_addpusher', _target];";
					icon = "\a3\3den\data\attributes\loiterdirection\cw_ca.paa";
				};
				class twc_recovervehiclestop {
					displayName = "Stop Recovery";
					condition = "(alive _target) && ((_target getvariable ['twc_isbeingrecovered', false]))";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					statement = "_target setvariable ['twc_isbeingrecovered', false,true];";
				};
			};
		};
	};
	class Tank: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				class twc_getwinch {
					displayName = "Pick Up Winch";
					condition = "[_target] call twc_winch_fnc_pickupwinchcond";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					statement = "_this spawn twc_winch_fnc_pickupwinch";
				};
				class twc_stowwinch {
					displayName = "Stow Winch";
					condition = "[_target] call twc_winch_fnc_stowwinchcond";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					statement = "_this spawn twc_winch_fnc_stowwinch";
				};
				class twc_attachwinch {
					displayName = "Attach Winch";
					condition = "[_target] call twc_winch_fnc_attachwinchcond";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					statement = "_this spawn twc_winch_fnc_attachwinch";
				};
				class twc_startwinch {
					displayName = "Start Winch";
					condition = "[_target] call twc_winch_fnc_startwinchcond";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					statement = "[_target, player] remoteexec ['twc_winch_fnc_startwinch', _target];";
				};
				class twc_cancelwinch {
					displayName = "Stop Winch";
					condition = "[_target] call twc_winch_fnc_cancelwinchcond";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					statement = "_this spawn twc_winch_fnc_cancelwinch";
				};
				class twc_recovervehicle {
					displayName = "Recover Vehicle";
					condition = "(alive _target) && (1 < (vectorUp _target) vectorDistance (surfaceNormal getPosATL _target)) && (!(player getvariable ['twc_playerisflippingvehicle', false]))";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					statement = "(player setvariable ['twc_playerisflippingvehicle', true]);[_target, player] remoteexec ['twc_winch_fnc_recovervehicle_addpusher', _target];";
					icon = "\a3\3den\data\attributes\loiterdirection\cw_ca.paa";
				};
			};
		};
	};
};

