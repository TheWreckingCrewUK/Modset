/*
	File: fn_spawnResistance.sqf
	Author: Dom
	Description: Starts a guerilla attack on a sector
*/
params [
	["_sector","",[""]],
	["_action","",[""]]
];

private _sectorCentre = markerPos _sector;
private _startPos = _sectorCentre getPos [1000 + (random 500),random 360];
private _position = ["opforSquad",_startPos,250] call AW_fnc_findSafePosition;
if (_position isEqualTo []) exitWith {[format["Guerillas could not be spawned at %1",_sector]] call AW_fnc_logIt};
[format["Guerilla forces are on the way to %1.",markerText _sector],"generalNotif","Guerilla Forces"] remoteExecCall ["AW_fnc_notify",-2];

private _squadComposition = getArray(missionConfigFile >> "Guerilla_Setup" >> "AW_guerillaSquad");
private _guerillaGroups = [];
private _group = createGroup [independent,true];
{
	[_group,independent,_x,_position,10] call AW_fnc_createUnit;
} forEach _squadComposition;
[_group] call CBA_fnc_clearWaypoints;
_guerillaGroups pushBack _group;

if ((AW_civRep < 0 && {abs AW_civRep > 50}) || {_action in ["mechAttack","sectorDefence"]}) then {
	private _guerillaVehicles = getArray(missionConfigFile >> "Guerilla_Setup" >> "AW_guerillaVehicles");
	private _group = [selectRandom _guerillaVehicles,_startPos,[250],independent] call AW_fnc_createVehicle;
	_guerillaGroups pushBack _group;
};

private _waypoints = [];
while {count _waypoints < 5} do {
	private _newPos = _sectorCentre getPos [random 100,random 360];
	if !(surfaceIsWater _newPos) then {
		_waypoints pushBack _newPos;
	};
};
[_waypoints,true] call CBA_fnc_shuffle;

{
	private _waypoint = _x addWaypoint [_waypoints select 0,10];
	_waypoint setWaypointType "MOVE";
	_waypoint setWaypointBehaviour "AWARE";
	_waypoint setWaypointCombatMode "YELLOW";
	_waypoint setWaypointSpeed "FULL";
	_waypoint setWaypointCompletionRadius 15;

	for "_i" from 1 to 3 do {
		_waypoint = _x addWaypoint [_waypoints select _i,15];
		_waypoint setWaypointType "SAD";
	};

	_waypoint = _x addWaypoint [_waypoints select 4,15];
	_waypoint setWaypointType "CYCLE";
} forEach _guerillaGroups;

[
	{
		params ["_sector","_sectorPosition"];
		!(_sector in AW_activeSectors) &&
		{(playableUnits findIf {_x distance _sectorPosition < 500}) isEqualTo -1} //no players nearby
	},
	{
		params ["_sector","_sectorPosition","_groups"];

		{
			[_x] call AW_fnc_deleteGroup;
		} forEach _groups;
	},
	[_sector,_sectorCentre,_guerillaGroups]
] call CBA_fnc_waitUntilAndExecute;