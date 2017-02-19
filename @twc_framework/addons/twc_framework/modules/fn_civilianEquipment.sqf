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
params ["_enabled"];

if(!isServer)exitWith{};

if !(_enabled) exitWith {};

{
	if (side _x isEqualTo civilian) then {
		removeGoggles _x;
		removebackpack _x;
	};
} foreach allunits;
