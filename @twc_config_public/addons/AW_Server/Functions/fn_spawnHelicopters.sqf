/*
	File: fn_spawnHelicopters.sqf
	Author: Dom
	Description: Spawns helicopters loaded with troops
*/
params [
	["_count",1,[0]],
	["_targetPos",[0,0,0],[[]]]
];

private _heliTypes = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforRotaryVehicles");
private _classData = selectRandom _heliTypes;
private _className = _classData;
private _pilotClass = "";
if (_classData isEqualType []) then {
	_className = _classData select 0;
	_pilotClass = _classData select 1;
};

private _infantryTypes = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforBasicSquad");
private _position = [east] call AW_fnc_findAirSpawn;

private _allGroups = [];
for "_i" from 1 to _count do {
	private _extraHeight = _i * 20;
	private _group = createGroup [east,true];

	private _helicopter = createVehicle [_className,(_position getPos [random 50,random 360]),[],150,"FLY"];
	if (_pilotClass isEqualTo "") then {
		private _crew = createVehicleCrew _helicopter;
		(units _crew) joinSilent _group;
	} else {
		private _pilot = [_group,east,_pilotClass,_helicopter] call AW_fnc_createUnit;
		_pilot moveInDriver _helicopter;
	};

	_helicopter flyInHeight (200 + _extraHeight);

	private _seatCount = getNumber(configOf _helicopter >> "transportSoldier");
	private _infantryGroup = createGroup [east,true];
	for "_ii" from 1 to (ceil random _seatCount) do {
		private _unit = [_infantryGroup,east,selectRandom _infantryTypes,_helicopter] call AW_fnc_createUnit;
		removeBackpack _unit;
		_unit addBackpack "B_Parachute";
		_unit moveInCargo _helicopter;
	};
	[_group] call CBA_fnc_clearWaypoints;
	[_infantryGroup] call CBA_fnc_clearWaypoints;
	_allGroups pushBack [_helicopter,_group,_infantryGroup];
};

{
	_x params ["_helicopter","_pilotGroup","_infantryGroup"];
	for "_i" from 1 to 5 do {
		private _waypoint = _pilotGroup addWaypoint [_targetPos,(75 * _i)];
		_waypoint setWaypointType "SAD";
		_waypoint setWaypointBehaviour "COMBAT";
		_waypoint setWaypointCombatMode "RED";
		_waypoint setWaypointSpeed "NORMAL";
		_waypoint setWaypointCompletionRadius 100;
	};
	_waypoint = _pilotGroup addWaypoint [_targetPos,250];
	_waypoint setWaypointType "CYCLE";

	for "_i" from 0 to 4 do {
		_waypoint = _infantryGroup addWaypoint [_targetPos,100];
		_waypoint setWaypointType "SAD";
		_waypoint setWaypointBehaviour "COMBAT";
		_waypoint setWaypointCombatMode "RED";
		_waypoint setWaypointSpeed "FULL";
	};
	_waypoint = _infantryGroup addWaypoint [_targetPos,100];
	_waypoint setWaypointType "CYCLE";

	[
		{
			params ["_targetPos","_helicopter"];
			_targetPos distance2D _helicopter < 250 || {damage _helicopter > 0.9}
		},
		{
			params ["_targetPos","","_infantryGroup"];

			_infantryGroup spawn {
				{
					unassignVehicle _x;
					moveOut _x;
					uiSleep 0.5;
				} forEach units _this;
			};
		},
		[_targetPos,_helicopter,_infantryGroup]
	] call CBA_fnc_waitUntilAndExecute;
} forEach _allGroups;

private _return = +_allGroups;
{
	_x deleteAt 0;
} forEach _return; //remove helicopter from return
flatten _return;