/*
	File: fn_spawnAmbientAir.sqf
	Author: Dom
	Description: Spawns ambient civilian air and starts the handler
*/
params [
	["_count",1,[0]]
];

private _civilianTypes = getArray(missionConfigFile >> "Civilian_Setup" >> "AW_civilianTypes");
private _civilianAirTypes = getArray(missionConfigFile >> "Civilian_Setup" >> "AW_civilianAircraftTypes");

if (isNil "AW_airportLocations") then {
	private _config = configFile >> "cfgWorlds" >> worldName;
	AW_airportLocations = [getArray(_config >> "ilsPosition")];
	{
		AW_airportLocations pushBack getArray(_x >> "ilsPosition");
	} forEach ("true" configClasses (_config >> "SecondaryAirports"));
	AW_airportLocations apply {_x set [2,0]};
};
if (AW_airportLocations isEqualTo []) exitWith {[format["%1 does not have any airports configured.",worldName]] call AW_fnc_logIt};

for "_i" from 1 to _count do {
	private _spawnPos = selectRandom AW_airportLocations;
	private _vehicle = createVehicle [selectRandom _civilianAirTypes,_spawnPos,[],0,"NONE"];
	private _group = createGroup [civilian,true];
	private _driver = _group createUnit [selectRandom _civilianTypes,_spawnPos,[],0,"NONE"];
	_driver moveInDriver _vehicle;
	[_group] call CBA_fnc_clearWaypoints;

	AW_ambientCivAir pushBack [_driver,_group,_vehicle,[0,0,0]];
};

if (AW_ambientCivAirHandle isEqualTo -1) then {
	AW_ambientCivAirHandle = [
		{
			if (AW_ambientCivAir isEqualTo []) exitWith {
				[_this select 1] call CBA_fnc_removePerFrameHandler;
				AW_ambientCivAirHandle = -1;
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
					if !(alive _vehicle) then {
						deleteVehicle _unit;
						_toDelete pushBack _forEachIndex;
					} else {
						if (playableUnits isEqualTo []) exitWith {};
						private _currentPos = getPosATL _unit;
						if (_lastPos distance _currentPos < 1 && {(playableUnits findIf {_x distance _unit < 2000}) isEqualTo -1}) then {
							[_group] call AW_fnc_deleteGroup;
							_toDelete pushBack _forEachIndex;
						} else {
							if (speed (vehicle _unit) < 10 && {count (waypoints _group) < 2}) then {
								private _waypoint = _group addWaypoint [(selectRandom AW_airportLocations),0];
								_waypoint setWaypointType "MOVE";
								_waypoint setWaypointBehaviour "SAFE";
								_waypoint setWaypointCombatMode "BLUE";
								_waypoint setWaypointCompletionRadius 10;
								_waypoint setWayPointStatements ["true","deleteWaypoint [group this,currentWaypoint (group this)]; [group this,getPosATL this] spawn BIS_fnc_wpLand"];
							} else {
								if (!isNull _vehicle && {fuel _vehicle < 0.1}) then {
									[_vehicle,1] remoteExecCall ["setFuel",_vehicle];
								};
								_x set [3,_currentPos];
							};
						};
					};
				};
			} forEach AW_ambientCivAir;

			reverse _toDelete;
			{
				AW_ambientCivAir deleteAt _x;
			} forEach _toDelete;

			if (_toDelete isNotEqualTo []) then {
				[count _toDelete] call AW_fnc_spawnAmbientAir;
			};
		},
		15
	] call CBA_fnc_addPerFrameHandler;
};