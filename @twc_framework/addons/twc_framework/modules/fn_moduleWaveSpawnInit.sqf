params ["_module"];

_units = synchronizedObjects _module;
_units = _units select {typeOf _x != "EmptyDetector"};
_leader = leader (_units select 0);
_units = units _leader;
_unitTypes = [];
_vehicles = [];
{
	_vehicle = vehicle _x;
	if (_vehicle == _x) then {
		_unitTypes pushback (typeOf _x);
	} else {
		if !(_vehicle in _vehicles) then {
			_unitTypes pushback (typeOf _vehicle);
			_vehicles pushback _vehicle;
		};
	};
} forEach _units;


_group = group _leader;
_waypointsSimple = waypoints _group;
_waypoints = [];
{
	_waypoints pushBack [
		"",
		waypointPosition _x,
		0,
		waypointType _x,
		waypointBehaviour _x,
		waypointCombatMode _x,
		waypointSpeed _x,
		waypointFormation _x,
		(waypointStatements _x) select 1,
		waypointTimeout _x,
		waypointCompletionRadius _x
	];
} forEach _waypointsSimple;

_module setVariable ["Waypoints", _waypoints];
_module setVariable ["UnitTypes", _unitTypes];

{
	deleteVehicle vehicle _x;
	deleteVehicle _x;
} forEach _units;