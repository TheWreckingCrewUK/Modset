/*
	File: fn_storeCrate.sqf
	Author: Dom
	Description: Stores the crate and adds to resource pool
*/
params [
	["_crate",objNull,[objNull]]
];

private _crateClass = typeOf _crate;
private _pos = getPosATL _crate;
deleteVehicle _crate;

private _crateArray = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforCrates");
private _index = _crateArray find _crateClass;
if (_index isEqualTo -1) exitWith {[format["Bad crate type fed to fn_storeCrate: %1",_crateClass]] call AW_fnc_logIt};

private _vector = [0,0,0];
_vector set [_index,100];

if ([_pos] call AW_fnc_isNearFOB) then {
	AW_resourcesAvailable = AW_resourcesAvailable vectorAdd _vector;
	publicVariable "AW_resourcesAvailable";
} else {
	([_pos,AW_factorySectors] call AW_fnc_findNearestSector) params ["_sector"];
	private _factoryIndex = AW_factorySetup findIf {_x select 0 isEqualTo _sector};
	private _factoryData = AW_factorySetup select _factoryIndex;
	_factoryData params ["","","_resources"];
	_resources = _resources vectorAdd _vector;
	_factoryData set [2,_resources];
	AW_factorySetup set [_factoryIndex,_factoryData];
	publicVariable "AW_factorySetup";
};