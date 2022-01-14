/*
	File: fn_mainSectorLoop.sqf
	Author: Dom
	Description: PFH handling all timed elements
*/
params ["_args"];
_args params ["_minutes"];
[format ["Time: %1 - FPS: %2 - Active Scripts: %3",CBA_missionTime,diag_fps,diag_activeScripts]] call AW_fnc_logIt;
private _players = allPlayers - entities "HeadlessClient_F";
if (_players isEqualTo []) exitWith {};

_minutes = _minutes + 1;
_args set [0,_minutes];

if (_minutes mod 30 isEqualTo 0) then {
	{
		_x params ["_sector","_type","_resources"];
		if (_type isNotEqualTo -1) then {
			private _totalRes = (_resources select 0) + (_resources select 1) + (_resources select 2);
			if (_totalRes > 1000) exitWith {};
			_resources set [_type,((_resources select _type) + 100) min 1000];
			AW_factorySetup set [_forEachIndex,[_sector,_type,_resources]];
		};
	} forEach AW_factorySetup;
	publicVariable "AW_factorySetup";

	call AW_fnc_saveGame;
};

private _sideMissionTimer = getNumber(missionConfigFile >> "Core_Settings" >> "AW_sideMissionTimer");
if (_minutes mod _sideMissionTimer isEqualTo 0 && {AW_opforThreat > random 100}) then {
	private _sideMissions = getArray(missionConfigFile >> "Core_Settings" >> "AW_sideMissions");
	private _possibleMissions = [];
	{
		_x params ["_title","_conditions","_codeToRun"];
		if ([_conditions] call AW_fnc_conditionChecker) then {
			_possibleMissions pushBack _codeToRun;
		};
	} forEach _sideMissions;

	if (_possibleMissions isEqualTo []) exitWith {["No side missions to spawn."] call AW_fnc_logIt};
	AW_sideMissionsSpawned = AW_sideMissionsSpawned + 1;
	private _chosenMission = selectRandom _possibleMissions;
	call compile _chosenMission;
};

private _garrisonUpdateTimer = getNumber(missionConfigFile >> "Core_Settings" >> "AW_garrisonUpdateTimer");
if (_minutes mod _garrisonUpdateTimer isEqualTo 0) then {
	private _averageStrength = ["average"] call AW_fnc_getGarrisonStrength;

	private _maxStrength = 1 - (([] call AW_fnc_getMissionProgress) / 2);
	{
		_x params ["","_currentStrength"];
		if (_currentStrength isNotEqualTo 0) then {
			private _strengthDiff = _averageStrength - _currentStrength;
			if (_strengthDiff > 0.03) then { //check for a significant change
				if (_strengthDiff >= 0) then {
					_currentStrength = _currentStrength + 0.01;
				} else {
					_currentStrength = _currentStrength - 0.01;
				};
			};
			_currentStrength = _currentStrength max 0.2 min _maxStrength;
			_x set [1,_currentStrength];
		};
	} forEach AW_sectorDetails;

	call AW_fnc_saveGame;
};

if (AW_opforThreat > 80) then {
	private _lastJet = missionNamespace getVariable ["AW_opforLastJets",0];
	private _jetCooldown = (getNumber(missionConfigFile >> "Core_Settings" >> "AW_opforJetCooldown")) * 60;
	if ((CBA_missionTime - _jetCooldown) > _lastJet && {AW_activeSectors isNotEqualTo []}) then {
		private _count = 1;
		if (AW_opforThreat > 90) then {_count = 2};
		[_count] call AW_fnc_spawnJet;
	};
};