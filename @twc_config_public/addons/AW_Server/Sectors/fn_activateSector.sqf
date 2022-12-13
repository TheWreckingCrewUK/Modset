/*
	File: fn_activateSector.sqf
	Author: Dom
	Description: Sets up a sector and begins monitoring it
*/
params [
	["_sector","",[""]]
];
private _maxSectors = getNumber(missionConfigFile >> "Core_Settings" >> "AW_maxActiveSectors");
if (count AW_activeSectors > _maxSectors) exitWith {[format["%1 could not be started due to the sector limit.",_sector]] call AW_fnc_logIt};

AW_activeSectors pushBack _sector;
publicVariable "AW_activeSectors";

private _isCivilian = "town" in _sector || {"city" in _sector || {"factory" in _sector}};
private _isFortified = "city" in _sector || {"military" in _sector};
private _isMilitary = "military" in _sector;

private _sectorCentre = markerPos _sector;
private _sectorTypeIndex = [_sector] call AW_fnc_getSectorTypeIndex;
private _spawnRadius = (getArray(missionConfigFile >> "Core_Settings" >> "AW_sectorSpawnRadius")) select _sectorTypeIndex;
private _crates = [];
if (_isCivilian) then {
	private _maxCrates = getNumber(missionConfigFile >> "Core_Settings" >> "AW_maxSectorCrates");
	private _crateTypes = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforCrates");
	private _crateNumber = round(random _maxCrates);

	for "_i" from 1 to _maxCrates do {
		private _className = selectRandom _crateTypes;
		private _position = [];
		for "_i" from 0 to 19 do {
			_position = (_sectorCentre getPos [random _spawnRadius,random 360]) findEmptyPosition [0,30,_className];
			if (_position isNotEqualTo [] && {!surfaceIsWater _position}) exitWith {};
		};
		if (_position isEqualTo []) exitWith {[format["Crate could not be spawned at %1",_sector]] call AW_fnc_logIt};

		private _crate = createVehicle [_className,_position];
		_crates pushBack _crate;
	};
};

private _garrisonStrength = [_sector] call AW_fnc_getGarrisonStrength;

private _allSectorGroups = [];
private _squadCount = round(AW_opforThreat / 25) max 1;
if (_isMilitary || {_isCity}) then {
	_squadCount = _squadCount + 2;
};
_squadCount = round(_squadCount * _garrisonStrength);
private _squadTypes = ["AW_opforBasicSquad","AW_opforATSquad","AW_opforAASquad"];

private _sectorBuildings = (nearestObjects [_sectorCentre,["House"],_spawnRadius]) select {alive _x};
if (_sectorBuildings isNotEqualTo []) then {
	private _spawnBuildingPositions = [];
	{
		_spawnBuildingPositions append (_x buildingPos -1);
	} forEach _sectorBuildings;
	[_spawnBuildingPositions,true] call CBA_fnc_shuffle;

	private _maxIntel = getNumber(missionConfigFile >> "Core_Settings" >> "AW_maxSectorIntel");
	private _intelTypes = getArray(missionConfigFile >> "Core_Settings" >> "AW_intelObjects");
	private _intelNumber = round(random _maxIntel);

	for "_i" from 1 to (_intelNumber min (count _spawnBuildingPositions)) do {
		private _className = selectRandom _intelTypes;
		private _intel = createVehicle [_className,(_spawnBuildingPositions select (_i - 1))];
		_intel setDir (random 360);
		_crates pushBack _intel;
	};

	if (AW_isLambsEnabled) then {
		_squadCount = _squadCount + 1;
	} else {
		private _count = (_squadCount * 3) min (count _spawnBuildingPositions);
		private _group = ["AW_opforBasicSquad",_spawnBuildingPositions,_count,10,true] call AW_fnc_createSquadInBuilding;
		_allSectorGroups pushBack _group;
	};
};

for "_i" from 1 to _squadCount do {
	private _group = [selectRandom _squadTypes,_sectorCentre,_spawnRadius,true] call AW_fnc_createSquad;
	_allSectorGroups pushBack _group;
};

if (_isCivilian) then {
	if (AW_civRep < 0) then {
		private _iedCount = round ((abs AW_civRep) / 20);
		if (_iedCount > 0) then {
			[_sectorCentre,_iedCount,_sector] call AW_fnc_initIEDs;
		};
	};

	private _maxCivs = getNumber(missionConfigFile >> "Core_Settings" >> "AW_maxCivsPerSector");
	if (_maxCivs > 0) then {
		[_sectorCentre,_maxCivs,_sector,_spawnRadius] call AW_fnc_spawnCivs;
	};
};

private _lightVehicleCount = 1;
private _mediumVehicleCount = 1;
private _heavyVehicleCount = 0;
if (_isFortified) then {_lightVehicleCount = _lightVehicleCount + 1};
if (_isMilitary) then {_heavyVehicleCount = _heavyVehicleCount + 1};
if (AW_opforThreat > 45) then {_mediumVehicleCount = _mediumVehicleCount + 1};
if (AW_opforThreat > 75) then {_heavyVehicleCount = _heavyVehicleCount + 1};
if (AW_opforThreat > (random 100)) then {_lightVehicleCount = _lightVehicleCount + 1};

_lightVehicleCount = round(_lightVehicleCount * _garrisonStrength);
_mediumVehicleCount = round(_mediumVehicleCount * _garrisonStrength);
_heavyVehicleCount = round(_heavyVehicleCount * _garrisonStrength);

if (_lightVehicleCount > 0) then {
	private _lightVehicles = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforLightVehicles");
	for "_i" from 1 to _lightVehicleCount do {
		private _group = [selectRandom _lightVehicles,_sectorCentre,[_spawnRadius]] call AW_fnc_createVehicle;
		_allSectorGroups pushBack _group;
	};
};

if (_mediumVehicleCount > 0) then {
	private _mediumVehicles = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforMediumVehicles");
	for "_i" from 1 to _mediumVehicleCount do {
		private _group = [selectRandom _mediumVehicles,_sectorCentre,[_spawnRadius]] call AW_fnc_createVehicle;
		_allSectorGroups pushBack _group;
	};
};

if (_heavyVehicleCount > 0) then {
	private _heavyVehicles = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforHeavyVehicles");
	for "_i" from 1 to _heavyVehicleCount do {
		private _group = [selectRandom _heavyVehicles,_sectorCentre,[_spawnRadius]] call AW_fnc_createVehicle;
		_allSectorGroups pushBack _group;
	};
};

if (AW_civRep < 0) then {
	if (abs(AW_civRep / 2) > random(100)) then {
		[_sector] call AW_fnc_spawnGuerillas;
	};
};

private _captureRadius = (getArray(missionConfigFile >> "Core_Settings" >> "AW_sectorCaptureRadius")) select _sectorTypeIndex;
private _timeoutCount = 0;
[AW_fnc_monitorSector,1,[_sectorCentre,_sector,_captureRadius,_allSectorGroups,_timeoutCount,_crates]] call CBA_fnc_addPerFrameHandler;

if (_isMilitary || {AW_opforThreat > 50 && {AW_opforThreat > (random 100)}}) then {
	[_sector,_sectorCentre] call AW_fnc_callReinforcements;
};

[
	{
		params ["_groups","_sector","_sectorCentre","_radius"];

		private _unitCount = 0;
		{
			_unitCount = _unitCount + (count units _x);
		} forEach _groups;

		missionNamespace setVariable [format["%1_unitCount",_sector],_unitCount];

		[[_groups,_sectorCentre,_radius],AW_fnc_initSectorPatrol] call AW_fnc_waitForTransferAndExecute;
	},
	[_allSectorGroups,_sector,_sectorCentre,_spawnRadius],
	8
] call CBA_fnc_waitAndExecute;