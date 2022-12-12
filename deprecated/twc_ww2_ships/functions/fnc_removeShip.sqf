/* ----------------------------------------------------------------------------
Function: CUP_fnc_removeShip
Description:
Remove ship

Parameters:
_this select 0: OBJECT - Reference to ship

Returns:
Nil

Examples:
(begin example)
	[_this select 0] call CUP_fnc_removeShip;
(end)

See Also:

Author:
magicsh0tz

Peer Reviewed:
nil
---------------------------------------------------------------------------- */

params [["_ship",objNull]];

{deleteVehicle _x;} forEach (
	(_ship getVariable ["CUP_WaterVehicles_shipParts",[]]) +
	(_ship getVariable ["CUP_WaterVehicles_shipWeapons",[]]) +
	(_ship getVariable ["CUP_WaterVehicles_shipLights",[]]) +
	(_ship getVariable ["CUP_WaterVehicles_shipCargo",[]])
);

{_ship removeAllEventHandlers _x;} forEach ["AttributesChanged3DEN","UnregisteredFromWorld3DEN"];