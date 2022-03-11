/*
	File: fn_logisticsCall.sqf
	Author: Dom
	Description: Handles all server side logistics work
*/
params [
	["_action","",[""]],
	["_data",[],[0,[]]]
];

if (_action isEqualTo "addTruck") then {
	private _oldTrucks = AW_logisticsSetup select 0;
	AW_logisticsSetup set [0,(_oldTrucks + _data)];
	publicVariable "AW_logisticsSetup";
} else {
	if (_action isEqualTo "newMission") then {
		_data params ["_from","_to","_truckCount","_startTransitTime","_endTransitTime","_carrying","_fuelRequired"];
		AW_logisticsSetup params ["_trucksAvailable","_trucksInUse","_currentRoutes"];
		if (_truckCount > _trucksAvailable || {_fuelRequired > (AW_resourcesAvailable select 1)}) exitWith {["Something went wrong."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner]};

		if ("factory" in _from) then {
			private _factoryIndex = AW_factorySetup findIf {_x select 0 == _from};
			private _factoryData = AW_factorySetup select _factoryIndex;
			private _factoryResources = (_factoryData select 2) vectorDiff _carrying;
			_factoryData set [2,_factoryResources];
			AW_factorySetup set [_factoryIndex,_factoryData];
			publicVariable "AW_factorySetup";
		} else {
			AW_resourcesAvailable = AW_resourcesAvailable vectorDiff _carrying;
		};
		_currentRoutes pushBack [_from,_to,_truckCount,_startTransitTime,_endTransitTime,_carrying];
		AW_logisticsSetup set [0,(_trucksAvailable - _truckCount)];
		AW_logisticsSetup set [1,(_trucksInUse + _truckCount)];
		publicVariable "AW_logisticsSetup";

		AW_resourcesAvailable set [1,((AW_resourcesAvailable select 1) - _fuelRequired)];
		publicVariable "AW_resourcesAvailable";

		["Convoy started."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner];
		[false] remoteExecCall ["AW_fnc_initLogisticsMenu",remoteExecutedOwner];

		if (AW_logisticsHandle isEqualTo -1) then {
			AW_logisticsHandle = [AW_fnc_logisticsLoop,10] call CBA_fnc_addPerFrameHandler;
		};
	};
};
call AW_fnc_saveGame;