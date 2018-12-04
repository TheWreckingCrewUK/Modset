/*
 * Author: Hobbs
 * Module function to call the artillery walking/learning eventhandler
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

// Wait until PostInit has completed, then execute our function
[{
	params ["_units"];
//systemchat "mortar init";
	{
		if (((vehicle _x) getvariable ["twc_ismwalking", 0]) == 0) then {
			(vehicle _x) addEventHandler ["Fired", {
				if (((vehicle (_this select 0)) getvariable ["twc_ismwalking", 0]) == 1) then {
					[_this select 6, _this select 7] call twc_fnc_mortarwalk;
				};
			}];
			(vehicle _x) setvariable ["twc_haswalked", 1, true];
			(vehicle _x) setvariable ["twc_ismwalking", 1, true];
		};
	} forEach _units;
}, [_units], 0.05] call CBA_fnc_waitAndExecute;


if (!isNull _logic) then {
	deleteVehicle _logic;
};