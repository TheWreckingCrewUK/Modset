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

addMissionEventHandler ["HandleDisconnect", {
	_unit = (_this select 0);
	_uid = (_this select 2);
	_unit setVariable ["disconnectedPlayerUID", _uid];
}];

["deleteReconnected", "onPlayerConnected", {
	{
		if ((_x getVariable ["disconnectedPlayerUID", -1]) == _uid) then {
			deleteVehicle _x;
		};
	} forEach allDeadmen;
}] call BIS_fnc_addStackedEventHandler;