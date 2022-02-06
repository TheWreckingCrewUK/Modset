/*
	File: fn_addClassEventHandlers.sqf
	Author: Dom
	Description: Master file containing all class eventhandlers - these can not be used on any classes that inherit from Static
*/

["AllVehicles","initpost",{
	params ["_vehicle"];
	[_vehicle] call AW_fnc_clearCargo;

	{
		_x addCuratorEditableObjects [_this,true];
	} forEach allCurators;
},true,[],true] call CBA_fnc_addClassEventHandler;

["Helicopter","initpost",{
	params ["_helicopter"];
	if (getNumber (configOf _helicopter >> "slingLoadMaxCargoMass") > 0) then {
		_helicopter addEventHandler ["RopeAttach",{_this call AW_fnc_ropeAttach}];
	};

	private _bluforAir = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforAirVehicles");
	_bluforAir = _bluforAir apply {if (_x select 0 isEqualType []) then {(_x select 0) select 0} else {_x select 0}};
	if (typeOf _helicopter in _bluforAir) then {
		AW_currentHelicopters pushBack _helicopter;
		publicVariable "AW_currentHelicopters";
	};
},true] call CBA_fnc_addClassEventHandler;

["Plane","initpost",{
	params ["_plane"];

	private _bluforAir = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforAirVehicles");
	_bluforAir = _bluforAir apply {if (_x select 0 isEqualType []) then {(_x select 0) select 0} else {_x select 0}};
	if (typeOf _plane in _bluforAir) then {
		AW_currentPlanes pushBack _plane;
		publicVariable "AW_currentPlanes";
	};
},true] call CBA_fnc_addClassEventHandler;

private _mobileRespawns = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_mobileRespawns");
{
	[_x,"initpost",{
		params ["_object"];
		AW_mobileRespawns pushBack _object;
		publicVariable "AW_mobileRespawns";
	},false] call CBA_fnc_addClassEventHandler;
} forEach _mobileRespawns;

private _crates = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforCrates");
{
	[_x,"initpost",{
		params ["_crate"];
		_crate setMass 100;
		[_crate] call AW_fnc_clearCargo;
		[_crate,true,[0,1.5,0]] remoteExecCall ["ace_dragging_fnc_setCarryable",-2,_crate];
	},false] call CBA_fnc_addClassEventHandler;
} forEach _crates;


["C_IDAP_Truck_02_water_F","initpost",{
	params ["_truck"];
	if (owner _truck isNotEqualTo 2) then {
		["addTruck",_truck] call AW_fnc_humanitarianRelief;
	};
},false] call CBA_fnc_addClassEventHandler;