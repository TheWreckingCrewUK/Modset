/*
	File: fn_spawnJet.sqf
	Author: Dom
	Description: Spawns in jets which patrol active sectors
*/
params [
	["_count",1,[0]],
	["_specificLocation",[],[[]]]
];

private _jetTypes = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforFixedWingVehicles");
if (_jetTypes isEqualTo []) exitWith {};

private _classData = selectRandom _jetTypes;
private _className = _classData;
private _pilotClass = "";
if (_classData isEqualType []) then {
	_className = _classData select 0;
	_pilotClass = _classData select 1;
};

private _position = [east,300] call AW_fnc_findAirSpawn;
private _positions = [];
{
	_positions pushBack (markerPos _x);
} forEach AW_activeSectors;
if (_specificLocation isNotEqualTo []) then {
	_positions pushBack _specificLocation;
};

for "_i" from 1 to _count do {
	private _group = createGroup [east,true];
	private _jet = createVehicle [_className,(_position getPos [random 50,random 360]),[],150,"FLY"];
	if (_pilotClass isEqualTo "") then {
		private _crew = createVehicleCrew _jet;
		(units _crew) joinSilent _group;
	} else {
		private _pilot = [_group,east,_pilotClass,_jet] call AW_fnc_createUnit;
		_pilot moveInDriver _jet;
	};

	_jet flyInHeight (300 + (_i * 10));
	[_group] call CBA_fnc_clearWaypoints;

	missionNamespace setVariable ["AW_opforLastJets",CBA_missionTime];

	{
		for "_i" from 0 to 2 do {
			private _waypoint = _group addWaypoint [_x,500];
			_waypoint setWaypointType "SAD";
			_waypoint setWaypointBehaviour "AWARE";
			_waypoint setWaypointCombatMode "RED";
		};
	} forEach _positions;

	private _waypoint = _group addWaypoint [(_positions select (count _positions - 1)),500];
	_waypoint setWaypointType "CYCLE";
};