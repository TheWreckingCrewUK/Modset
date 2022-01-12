/*
	File: fn_spawnAmbientOpfor.sqf
	Author: Dom
	Description: Spawns ambient enemy patrols and starts the handler is required
*/
private _sectorsToSpawn = (AW_allSectors - AW_bluforSectors) select {!(_x in AW_activeSectors)};
if (_sectorsToSpawn isEqualTo []) exitWith {};

private _maxAmbientOpfor = getNumber(missionConfigFile >> "Core_Settings" >> "AW_maxAmbientOpforPatrols");
private _averageStrength = ["average"] call AW_fnc_getGarrisonStrength;
_maxAmbientOpfor = round (_maxAmbientOpfor * _averageStrength);
while {count AW_ambientOpfor < _maxAmbientOpfor} do {
	private _randomSector = selectRandom _sectorsToSpawn;
	private _nearRoads = (markerPos _randomSector) nearRoads 750;
	if (_nearRoads isNotEqualTo []) then {
		private _spawnPos = getPosATL (selectRandom _nearRoads);

		private _group = [_spawnPos,[500]] call AW_fnc_spawnTroopCarrier;
		if !(isNull _group) then {
			private _vehicle = objectParent (units _group select 0);
			AW_ambientOpfor pushBack [_vehicle,_group,[0,0,0]];
		};
	};
};

if (AW_ambientOpforHandle isEqualTo -1) then {
	AW_ambientOpforHandle = [
		{
			if (AW_ambientOpfor isEqualTo []) exitWith {
				[_this select 1] call CBA_fnc_removePerFrameHandler;
				AW_ambientOpforHandle = -1;
			};
			
			private _toDelete = [];
			{
				_x params ["_vehicle","_group","_lastPos"];
				if (isNull _group) then { //all units are dead and group is deleted
					_toDelete pushBack _forEachIndex;
					if (!isNull _vehicle && {!(_vehicle getVariable ["AW_playerUsed",false])}) then {
						deleteVehicle _vehicle;
					};
				} else {
					if (playableUnits isEqualTo []) exitWith {};
					private _currentPos = getPosATL _vehicle;
					if (_lastPos distance _currentPos < 1 && {(playableUnits findIf {_x distance _vehicle < 2000}) isEqualTo -1}) then { //we are stuck & no players nearby?
						[_group] call AW_fnc_deleteGroup;
						if !(isNull _vehicle) then {
							deleteVehicle _vehicle;
						};
						_toDelete pushBack _forEachIndex;
					} else {
						if (waypoints _group isEqualTo []) then {
							private _sectorsToSpawn = AW_allSectors - AW_bluforSectors;
							_sectorsToSpawn = _sectorsToSpawn apply {markerPos _x};

							private _position = [];
							while {_position isEqualTo []} do {
								private _nearRoads = (selectRandom _sectorsToSpawn) nearRoads 750;
								if (_nearRoads isNotEqualTo []) then {
									_position = getPosATL (selectRandom _nearRoads);
								};
							};
							
							private _waypoint = _group addWaypoint [_position,10];
							_waypoint setWaypointType "MOVE";
							_waypoint setWaypointBehaviour "SAFE";
							_waypoint setWaypointCombatMode "YELLOW";
							_waypoint setWaypointSpeed "NORMAL";
							_waypoint setWaypointCompletionRadius 30;
							_waypoint setWayPointStatements ["true","deleteWaypoint [group this,currentWaypoint (group this)]"]; //clear waypoints
						} else {
							if (!isNull _vehicle && {fuel _vehicle < 0.1}) then {
								[_vehicle,1] remoteExecCall ["setFuel",_vehicle];
							};
							_x set [2,_currentPos];
						};
					};
				};
			} forEach AW_ambientOpfor;

			reverse _toDelete;
			{
				AW_ambientOpfor deleteAt _x;
			} forEach _toDelete;

			if (_toDelete isNotEqualTo []) then {
				[] call AW_fnc_spawnAmbientOpfor;
			};
		},
		15
	] call CBA_fnc_addPerFrameHandler;
};