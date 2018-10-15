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
params ["_enabled"];

if (!isServer || !_enabled) exitWith {};

[
	"AllVehicles",
	"InitPost",
	{
		if (!isServer) exitWith {};

		[{
			{
				_x addCuratorEditableObjects [[_this], true];
			} forEach allCurators;
		}, _this] call CBA_fnc_execNextFrame;
	},
	true,
	[],
	true
] call CBA_fnc_addClassEventHandler;

/* //adds objects placed in editor:
{
	_x addCuratorEditableObjects [vehicles, true];
	_x addCuratorEditableObjects [(allMissionObjects "Man"), false];
	_x addCuratorEditableObjects [(allMissionObjects "Air"), true];
	_x addCuratorEditableObjects [(allMissionObjects "Ammo"), false];
	
	_x addEventhandler ["CuratorObjectRegistered", {
		(_this select 0) addCuratorEditableObjects [(_this select 1), true];
	}];
} foreach allCurators;

while {true} do {
	{
		_x addCuratorEditableObjects [allUnits, true];
		_x addCuratorEditableObjects [vehicles, true];
	} foreach allCurators;

	sleep 10;
}; */