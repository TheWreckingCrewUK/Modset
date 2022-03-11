/*
	File: fn_logisticsLoop.sqf
	Author: Dom
	Description: Handles all logistic routes
*/
params ["_args","_handle"];

AW_logisticsSetup params ["_availableTrucks","_trucksInUse","_currentRoutes"];
if (_currentRoutes isEqualTo []) exitWith {
	[_handle] call CBA_fnc_removePerFrameHandler;
	AW_logisticsHandle = -1;
};

private _toDelete = [];
{
	_x params ["_from","_to","_truckCount","_startTransitTime","_endTransitTime","_carrying"];
	if (_endTransitTime < CBA_missionTime) then {
		_availableTrucks = _availableTrucks + _truckCount;
		_trucksInUse = _trucksInUse - _truckCount;
		AW_logisticsSetup set [0,_availableTrucks];
		AW_logisticsSetup set [1,_trucksInUse];
		_toDelete pushBack _forEachIndex;

		if ("factory" in _to) then {
			private _index = AW_factorySetup findIf {_to == _x select 0};
			private _factoryInfo = AW_factorySetup select _index;
			_factoryInfo set [2,((_factoryInfo select 2) vectorAdd _carrying)];
			AW_factorySetup set [_index,_factoryInfo];
			publicVariable "AW_factorySetup";
		} else {
			AW_resourcesAvailable = AW_resourcesAvailable vectorAdd _carrying;
			publicVariable "AW_resourcesAvailable";
		};
	};
} forEach _currentRoutes;
if (_toDelete isEqualTo []) exitWith {};

reverse _toDelete;
{
	_currentRoutes deleteAt _x;
} forEach _toDelete;

AW_logisticsSetup set [2,_currentRoutes];
publicVariable "AW_logisticsSetup";