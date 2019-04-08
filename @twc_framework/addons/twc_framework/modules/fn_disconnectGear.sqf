/*
* Author: [TWC] jayman
* Deletes the bodies of those who reconnect in, if enabled.
*
* Arguments:
* 0: ERA <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [true] call disconnectGear;
*
* Public: No
*/
params["_bool"];
if (!_bool) exitWith {};
if (!isServer) exitWith {};

addMissionEventHandler ["HandleDisconnect", {
	_unit = (_this select 0);
	_uid = (_this select 2);

	_unit setVariable ["disconnectedPlayerUID", _uid];

/* 	if !(_unit getVariable ["wasKilled", false]) then {
		deleteVehicle _unit;
	}; */

	// remove bodies always first 60 seconds of the op
	if (time <= 60) then {
		deleteVehicle _unit;
	};
}];

["deleteReconnected", "onPlayerConnected", {
	{
		if ((_x getVariable ["disconnectedPlayerUID", -1]) == _uid) exitWith {
			deleteVehicle _x;
		};
	} forEach allDeadmen;
}] call BIS_fnc_addStackedEventHandler;