/*
	File: fn_guerillaCrateRetrieve.sqf
	Author: Dom
	Description: Begins the crate retrieval process by guerilla forces
*/
params [
	["_sector","",[""]]
];

private _crateTypes = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforCrates");
private _radius = (getArray(missionConfigFile >> "Core_Settings" >> "AW_sectorSpawnRadius")) select ([_sector] call AW_fnc_getSectorTypeIndex);

private _crates = nearestObjects [markerPos _sector,_crateTypes,(_radius * 1.1),true];
if (_crates isEqualTo []) exitWith {};

private _resources = [0,0,0];
{
	private _crateArray = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforCrates");
	private _index = _crateArray find (typeOf _x);
	_resources set [_index,(_resources select _index) + 100];
	deleteVehicle _x;
} forEach _crates;

private _distance = [markerPos _sector] call AW_fnc_findNearestFOB;
private _time = ceil ((_distance / 1000) * 2);

[
	{
		params ["_resources"];
		AW_resourcesAvailable = AW_resourcesAvailable vectorAdd _resources;
		publicVariable "AW_resourcesAvailable";
	},
	[_resources],
	(_time * 60)
] call CBA_fnc_waitAndExecute;