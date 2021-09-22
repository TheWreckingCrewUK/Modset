/*
* Author: [TWC] jayman
* Adds all units and objects to zeus continuously
*
* Arguments:
* 0: Enabled <BOOL>
*
* Return Value:
* NOTHING
*
* Example:
* [true] call twc_fnc_zeus;
*
* Public: No
*/

#include "macros.hpp"

params ["_enabled"];

DEPRECATED_ALT("twc_fnc_zeus", "twc_framework_fnc_enableZeusObjects");

[_enabled] call twc_framework_fnc_enableZeusObjects;

/* if (!isServer || !_enabled) exitWith {};

[
	"AllVehicles",
	"InitPost",
	{
		if (!isServer) exitWith {};

		[{
			if !(_this isEqualType []) then { _this = [_this]; };

			{
				_x addCuratorEditableObjects [_this, true];
			} forEach allCurators;
		}, _this] call CBA_fnc_execNextFrame;
	},
	true,
	[],
	true
] call CBA_fnc_addClassEventHandler; */
