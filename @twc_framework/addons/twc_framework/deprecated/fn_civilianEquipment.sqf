/*
* Author: [TWC] jayman
* Removes all goggles and backpacks from civillians
*
* Arguments:
* 0: Enabled <BOOL>
*
* Return Value:
* NOTHING
*
* Example:
* [true] call twc_fnc_civilianEquipment;
*
* Public: No
*/
#include "macros.hpp"

params ["_enabled"];

DEPRECATED_ALT("twc_fnc_civilianEquipment", "twc_framework_fnc_cleanCivilianEquipment")

[_enabled] call twc_framework_fnc_cleanCivilianEquipment;

/* if(!isServer)exitWith{};

if !(_enabled) exitWith {};

{
	if (side _x isEqualTo civilian) then {
		removeGoggles _x;
		removebackpack _x;
	};
} foreach allunits;
 */