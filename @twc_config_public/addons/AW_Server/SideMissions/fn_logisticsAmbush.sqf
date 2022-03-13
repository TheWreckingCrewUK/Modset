/*
	File: fn_logisticsAmbush.sqf
	Author: Dom
	Description: Side mission for a convoy ambush
*/
params [
	["_playerCount",1,[0]]
];

AW_logisticsSetup params ["","_trucksInTransit","_currentRoutes"];
private _index = round (random (count _currentRoutes - 1));
private _attackedRoute = _currentRoutes select _index;
_attackedRoute params ["_from","_to","_truckCount","_startTransitTime","_endTransitTime","_carrying"];

private _fromPos = markerPos _from;
private _toPos = markerPos _to;

private _travelDir = _fromPos getDir _toPos;
private _distance = _fromPos distance2D _toPos;
private _timeInTransit = round(CBA_missionTime - _startTransitTime);
private _fullTransitTime = round(_endTransitTime - _startTransitTime);
private _percentageTimeTravelled = _timeInTransit / _fullTransitTime;
private _distanceTravelled = _distance * _percentageTimeTravelled;

private _estimatedPosition = _fromPos getPos [_distanceTravelled,_travelDir];
private _nearRoads = _estimatedPosition nearRoads 1000;
if (_nearRoads isEqualTo []) exitWith {[format["No near roads could be spawned for convoy at %1.",CBA_missionTime]] call AW_fnc_logIt};

_currentRoutes deleteAt _index;
AW_logisticsSetup set [1,(_trucksInTransit - _truckCount)];
AW_logisticsSetup set [2,_currentRoutes];
publicVariable "AW_logisticsSetup";

private _roadToSpawn = getPosATL (selectRandom _nearRoads);
private _deadVehicles = [];
for "_i" from 1 to _truckCount do {
	private _truck = createVehicle ["C_Van_01_box_F",_roadToSpawn,[],75,"NONE"];
	_truck setDir (random 360);
	_truck setDamage 1;
	_deadVehicles pushBack _truck;
};

private _crateTypes = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforCrates");
private _crates = [];
{
	if (_x isNotEqualTo 0) then {
		private _crateCount = floor(_x / 100);
		for "_i" from 1 to _crateCount do {
			private _crate = createVehicle [(_crateTypes select _forEachIndex),_roadToSpawn,[],50,"NONE"];
			_crates pushBack _crate;
		};
	};
} forEach _carrying;

private _units = [];
private _squadCount = ceil(_playerCount / 5);
for "_i" from 1 to _squadCount do {
	private _group = ["AW_opforBalancedSquad",_roadToSpawn] call AW_fnc_createSquad;
	_units append (units _group);

	private _waypoint = _group addWaypoint [_roadToSpawn,75];
	_waypoint setWaypointType "MOVE";
	_waypoint setWaypointBehaviour "AWARE";
	_waypoint setWaypointCombatMode "YELLOW";
	_waypoint setWaypointSpeed "NORMAL";
	_waypoint setWaypointCompletionRadius 10;

	_waypoint = _group addWaypoint [_roadToSpawn,75];
	_waypoint setWaypointType "SAD";
	_waypoint setWaypointCompletionRadius 10;
	_waypoint = _group addWaypoint [_roadToSpawn,75];
	_waypoint setWaypointType "CYCLE";
	_waypoint setWaypointCompletionRadius 10;
};

private _marker = createMarker ["logiAmbush",_roadToSpawn];
_marker setMarkerType "mil_objective";
_marker setMarkerColor "ColorRed";
_marker setMarkerText "Last reported convoy position";
[format["One of your convoys have been ambushed at %1.",mapGridPosition _roadToSpawn],"failedNotif","Attacked Convoy"] remoteExecCall ["AW_fnc_notify",-2];

[
	{
		params ["_position","_units"];
		_units findIf {alive _x} isEqualTo -1 || 
		{playableUnits findIf {_x distance _position < 10} isNotEqualTo -1}
	},
	{
		params ["","_units","_marker"];
		deleteMarker _marker;
		["The convoy has been secured.","successNotif","Convoy Secured"] remoteExecCall ["AW_fnc_notify",-2];
	},
	[_roadToSpawn,_units,_marker,_crates],
	1800,
	{
		[
			{
				params ["_position"];
				(playableUnits findIf {_x distance _position < 1000}) isEqualTo -1
			},
			{
				params ["_position","_units","_marker","_crates"];
				{
					if (_x distance _position < 100) then {
						deleteVehicle _x;
					};
				} forEach _crates;
				{
					deleteVehicle _x;
				} forEach _units;
				deleteMarker _marker;
				["The convoy was lost.","failedNotif","Convoy Lost"] remoteExecCall ["AW_fnc_notify",-2];
				call AW_fnc_saveGame;
			},
			_this
		] call CBA_fnc_waitUntilAndExecute;
	}
] call CBA_fnc_waitUntilAndExecute;