/*
 * Author: Hobbs
 * Module function to call the gun walking/learning eventhandler
 *
 * Arguments:
 * 0: The Module Logic <OBJECT>
 * 1: Synced Objects <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
params ["_logic", "_units", "_activated"];

if (!_activated || !isServer) exitWith {systemchat "failed init";};


[_units] spawn {
	waituntil {!isnil "twc_walkinitcomplete"};
	params ["_units"];

	// Wait until PostInit has completed, then execute our function
	[{
		params ["_units"];
		{
			if (((vehicle _x) getvariable ["twc_isgwalking", 0]) == 0) then {
				
				//systemchat "gun init";
				//["twc_addcbagwalk", [_x], (vehicle _x)] call CBA_fnc_targetEvent;
				[_x] call twc_addgunwalkevent;
				(vehicle _x) setvariable ["twc_haswalked", 1, true];
				(vehicle _x) setvariable ["twc_isgwalking", 1, true];
			};
		} forEach _units;
	}, [_units], 0.05] call CBA_fnc_waitAndExecute;
};

if (!isNull _logic) then {
	deleteVehicle _logic;
};