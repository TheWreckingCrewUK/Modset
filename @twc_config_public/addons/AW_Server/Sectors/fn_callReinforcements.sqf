/*
	File: fn_callReinforcements.sqf
	Author: Dom
	Description: Calls reinforcements into a sector
*/
params [
	["_sector","",[""]],
	["_sectorCentre",[],[[]]]
];

private _responseTime = (getNumber(missionConfigFile >> "Core_Settings" >> "AW_reinforcementTime")) * 60;
private _maxDistance = worldSize / 5;
private _radioTowers = ["tower"] call AW_fnc_getSectorsByType;
private _nearestTowerIndex = _radioTowers findIf {(markerPos _x) distance _sectorCentre < _maxDistance && {!(_x in AW_bluforSectors)}};
private _nearestTowerSector = "";
if (_nearestTowerIndex isNotEqualTo -1) then {
	_responseTime = _responseTime * 0.5;
	_nearestTowerSector = _radioTowers select _nearestTowerIndex;
};

[
	{
		params ["_sector"];
		!(_sector in AW_activeSectors)
	},
	{
		nil
	},
	[_sector,_sectorCentre,_nearestTowerSector],
	_responseTime,
	{
		params ["_sector","_sectorCentre","_nearTower"];
		if (_sector in AW_bluforSectors) exitWith {};
		
		[format["Reinforcements are incoming at %1.",markerText _sector],"failedNotif","Enemy Reinforcements"] remoteExecCall ["AW_fnc_notify",-2];
		private _count = ceil (AW_opforThreat / 50);
		private _reinforcementGroups = [];

		if (_nearTower isNotEqualTo "") then {
			for "_i" from 1 to _count do {
				private _group = [markerPos _nearTower,[200]] call AW_fnc_spawnTroopCarrier;
				_reinforcementGroups pushBack _group;
			};

			{
				private _waypoint = _x addWaypoint [_sectorCentre,10];
				_waypoint setWaypointType "MOVE";
				_waypoint setWaypointBehaviour "AWARE";
				_waypoint setWaypointCombatMode "RED";
				_waypoint setWaypointSpeed "FULL";
				_waypoint setWaypointCompletionRadius 10;
			} forEach _reinforcementGroups;
		};
		_reinforcementGroups append ([_count,_sectorCentre] call AW_fnc_spawnHelicopters);

		[
			{
				params ["_sector","_sectorPosition"];
				!(_sector in AW_activeSectors) &&
				{(playableUnits findIf {_x distance _sectorPosition < 1000}) isEqualTo -1} //no players nearby
			},
			{
				params ["_sector","_sectorPosition","_groups"];

				{
					[_x] call AW_fnc_deleteGroup;
				} forEach _groups;
			},
			[_sector,_sectorCentre,_reinforcementGroups]
		] call CBA_fnc_waitUntilAndExecute;
	}
] call CBA_fnc_waitUntilAndExecute;