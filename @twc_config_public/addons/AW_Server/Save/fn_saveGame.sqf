/*
	File: fn_saveGame.sqf
	Author: Dom
	Description: Saves the current progress on the game
*/
if (profileNamespace getVariable ["AW_stopServerSave",false]) exitWith {};

private _data = [];
private _version = getText(missionConfigFile >> "Core_Settings" >> "AW_version");
_data pushBack _version;
_data pushBack date;
_data pushBack AW_fobDetails;
_data pushBack AW_resourcesAvailable;
_data pushBack AW_civRep;
_data pushBack AW_opforThreat;
_data pushBack AW_intel;
_data pushBack AW_bluforSectors;
_data pushBack AW_logisticsSetup;
_data pushBack AW_factorySetup;

private _bluforVehicles = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforLightVehicles");
_bluforVehicles append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforHeavyVehicles"));
_bluforVehicles append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforAirVehicles"));
_bluforVehicles append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforNavalVehicles"));
_bluforVehicles append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforLogistics"));
_bluforVehicles = _bluforVehicles apply {if (_x select 0 isEqualType []) then {(_x select 0) select 0} else {_x select 0}};

private _saveObjectsData = [];
private _savedObjects = [];

private _range = getNumber(missionConfigFile >> "Core_Settings" >> "AW_fobBuildRadius");
private _bluforBuildables = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforDefences");
_bluforBuildables append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforBuildings"));
_bluforBuildables append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforLogistics"));
_bluforBuildables = _bluforBuildables apply {if (_x select 0 isEqualType []) then {(_x select 0) select 0} else {_x select 0}};
_bluforBuildables pushBack (getText(missionConfigFile >> "Blufor_Setup" >> "AW_fobBuilding"));
{
	_x params ["","_pos"];
	private _nearObjects = _pos nearObjects (_range * 1.2);
	{
		if (alive _x && {(typeOf _x) in _bluforBuildables}) then {
			private _className = typeOf _x;
			private _position = getPosWorld _x;
			private _direction = vectorDirVisual _x;
			private _up = vectorUpVisual _x;

			_saveObjectsData pushBack [_className,_position,_direction,_up];
			_savedObjects pushBack _x;
		};
	} forEach _nearObjects;
} forEach AW_fobDetails;
{
	private _className = typeOf _x;
	private _position = getPosWorld _x;
	if (alive _x && {speed _x < 3 && {!(_x in _savedObjects) && {((getPosATL _x) select 2) < 5 && (_className in _bluforVehicles || {_x getVariable ["AW_playerUsed",false] || {[_position] call AW_fnc_isNearFOB}})}}}) then {
		private _direction = vectorDirVisual _x;
		private _up = vectorUpVisual _x;
		private _damage = getAllHitPointsDamage _x;
		if (_damage isNotEqualTo []) then {_damage = _damage select 2}; //handles huron containers etc

		_saveObjectsData pushBack [_className,_position,_direction,_up,_damage];
		_savedObjects pushBack _x;
	};
} forEach vehicles;

_data pushBack _saveObjectsData;

private _stats = [];
{
	if (isNil "_x") then {
		_stats pushBack 0;
	} else {
		_stats pushBack _x;
	};
} forEach [
	AW_totalPlaytime,
	AW_sectorsTaken,
	AW_sectorsLost,
	AW_sideMissionsSpawned,
	AW_secondaryMissionsCompleted,
	AW_secondaryMissionsFailed,
	AW_bluforDeaths,
	AW_opforDeaths,
	AW_guerillaDeaths,
	AW_civilianDeaths,
	AW_bluforVehiclesDestroyed,
	AW_bluforArmourDestroyed,
	AW_bluforNavalDestroyed,
	AW_bluforAirDestroyed,
	AW_opforVehiclesDestroyed,
	AW_opforArmourDestroyed,
	AW_opforNavalDestroyed,
	AW_opforAirDestroyed,
	AW_guerillaVehiclesDestroyed,
	AW_civilianVehiclesDestroyed
];

_data pushBack _stats;
_data pushBack AW_sectorDetails;

profileNamespace setVariable ["AW_serverSave",_data];
saveProfileNamespace;