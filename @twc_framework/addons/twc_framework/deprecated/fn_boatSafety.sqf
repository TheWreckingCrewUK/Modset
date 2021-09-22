/*
* Author: [TWC] jayman
* Adds Event Handler to make dismounting from boats safer.
*
* Arguments:
* 0: Enabled <BOOL>
* 1: TYPE <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [true,"B_Boat_Transport_01_F"] call twc_fnc_deadBodies;
*
* Public: No
*/
#include "macros.hpp"

params ["_enabled", ["_type","B_Boat_Transport_01_F"]];

DEPRECATED_ALT("twc_fnc_boatSafety", "twc_framework_fnc_toggleBoatSafety")

[_enabled] call twc_framework_fnc_toggleBoatSafety;

/* if(!hasInterface)exitWith{};

if !(_enabled) exitWith {};

twc_boatSafetyType = _type;
player addEventHandler ["GetOutMan",{
	if(typeOf (_this select 2) isEqualTo twc_boatSafetyType) then{
		player allowDamage false;
		
		[{ player allowDamage true; }, [], 3] call CBA_fnc_waitAndExecute;
	};
}]; */