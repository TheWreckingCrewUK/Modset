/*
	File: fn_spawnAmbientCiv.sqf
	Author: Dom
	Description: Spawns ambient civs and starts the handler is required
*/
params [
	["_count",1,[0]]
];

private _civilianTypes = getArray(missionConfigFile >> "Civilian_Setup" >> "AW_civilianTypes");
private _civilianVehicleTypes = getArray(missionConfigFile >> "Civilian_Setup" >> "AW_civilianVehicleTypes");
private _sectorsToSpawn = [["city","town","factory"]] call AW_fnc_getSectorsByType;
_sectorsToSpawn = _sectorsToSpawn - AW_activeSectors;
for "_i" from 1 to _count do {
	private _nearRoads = (markerPos (selectRandom _sectorsToSpawn)) nearRoads 250;
	private _spawnPos = getPosATL (selectRandom _nearRoads);

	private _vehicle = createVehicle [selectRandom _civilianVehicleTypes,_spawnPos,[],0,"NONE"];
	private _group = createGroup [civilian,true];
	private _driver = _group createUnit [selectRandom _civilianTypes,_spawnPos,[],0,"NONE"];
	_driver moveInDriver _vehicle;
	_driver disableAI "FSM";
	[_group] call CBA_fnc_clearWaypoints;

	AW_ambientCivs pushBack [_driver,_group,_vehicle,[0,0,0]];
};

if (AW_ambientCivHandle isEqualTo -1) then {
	AW_ambientCivHandle = [
		{
			if (AW_ambientCivs isEqualTo []) exitWith {
				[_this select 1] call CBA_fnc_removePerFrameHandler;
				AW_ambientCivHandle = -1;
			};

			private _toDelete = [];
			{
				_x params ["_unit","_group","_vehicle","_lastPos"];
				if !(alive _unit) then {
					_toDelete pushBack _forEachIndex;
					if (!isNull _vehicle && {!(_vehicle getVariable ["AW_playerUsed",false])}) then {
						deleteVehicle _vehicle;
					};
				} else {
					if (playableUnits isEqualTo []) exitWith {};
					private _currentPos = getPosATL _unit;
					if (_lastPos distance _currentPos < 1 && {(playableUnits findIf {_x distance _unit < 2000}) isEqualTo -1}) then { //we are stuck & no players nearby?
						private _sectorsToSpawn = [["city","town","factory"]] call AW_fnc_getSectorsByType;
						_sectorsToSpawn = _sectorsToSpawn - AW_activeSectors;
						private _nearRoads = (markerPos (selectRandom _sectorsToSpawn)) nearRoads 250;
						private _spawnPos = getPosATL (selectRandom _nearRoads);
						
						if (isNull objectParent _unit) then {
							_unit moveInDriver _vehicle;
						};
						_vehicle setPosATL _spawnPos;
						_vehicle setDamage 0;
					} else {
						if (waypoints _group isEqualTo []) then {
							private _sectorsToSpawn = [["city","town","factory"]] call AW_fnc_getSectorsByType;
							_sectorsToSpawn = _sectorsToSpawn apply {markerPos _x};

							private _position = [];
							while {_position isEqualTo []} do {
								private _nearRoads = (selectRandom _sectorsToSpawn) nearRoads 500;
								if (_nearRoads isNotEqualTo []) then {
									_position = getPosATL (selectRandom _nearRoads);
								};
							};
							
							private _waypoint = _group addWaypoint [_position,10];
							_waypoint setWaypointType "MOVE";
							_waypoint setWaypointBehaviour "SAFE";
							_waypoint setWaypointCombatMode "BLUE";
							_waypoint setWaypointSpeed "LIMITED";
							_waypoint setWaypointCompletionRadius 30;
							_waypoint setWayPointStatements ["true","deleteWaypoint [group this,currentWaypoint (group this)]"]; //clear waypoints
						} else {
							if (!isNull _vehicle && {fuel _vehicle < 0.1}) then {
								[_vehicle,1] remoteExecCall ["setFuel",_vehicle];
							};
							_x set [3,_currentPos];
						};
					};
				};
			} forEach AW_ambientCivs;

			reverse _toDelete;
			{
				AW_ambientCivs deleteAt _x;
			} forEach _toDelete;

			if (_toDelete isNotEqualTo []) then {
				[count _toDelete] call AW_fnc_spawnAmbientCiv;
			};
		},
		15
	] call CBA_fnc_addPerFrameHandler;
};