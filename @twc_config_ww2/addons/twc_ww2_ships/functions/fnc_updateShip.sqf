/* ----------------------------------------------------------------------------
Function: CUP_fnc_updateShip
Description:
Remove ship

Parameters:
_this select 0: OBJECT - Reference to ship

Returns:
Nil

Examples:
(begin example)
	[_this select 0] call CUP_fnc_updateShip;
(end)

See Also:

Author:
magicsh0tz

Peer Reviewed:
nil
---------------------------------------------------------------------------- */

params [["_ship",objNull]];

private ["_dir","_pos"];

_dir = getDir _ship;
_pos = getPosASL _ship;

if (_dir != (_ship getVariable ["CUP_WaterVehicles_Dir",0])) then {
	_ship setDir ((getDir _ship) - 180);
	_dir = getDir _ship;
	_ship setVariable ["CUP_WaterVehicles_Dir",_dir];
};

{deleteVehicle _x;} forEach (
	(_ship getVariable ["CUP_WaterVehicles_shipWeapons",[]]) +
	(_ship getVariable ["CUP_WaterVehicles_shipLights",[]]) +
	(_ship getVariable ["CUP_WaterVehicles_shipCargo",[]])
);

{
	_x setDir _dir;
	_x setPos _pos;
} forEach (_ship getVariable ["CUP_WaterVehicles_shipParts",[]]);

if (_ship getVariable ["CUP_WaterVehicles_loadVehicleCargo",false]) then {
	[_ship,"VehicleCargo"] call CUP_fnc_createVehicleCargo;
	[_ship,"FlightDeckCargo"] call CUP_fnc_createVehicleCargo;
};

[_ship] call CUP_fnc_spawnShipWeapons;
[_ship] call CUP_fnc_spawnShipLights;