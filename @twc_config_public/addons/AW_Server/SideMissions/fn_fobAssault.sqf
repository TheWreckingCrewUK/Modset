/*
	File: fn_fobAssault.sqf
	Author: Dom
	Description: Side mission for an assault on player controlled FOB
*/
params [
	["_playerCount",1,[0]]
];

private _difficultyModifier = round (_playerCount / 5);

private _infantryCount = 3 * _difficultyModifier;
private _vehicleCount = round(1.5 * _difficultyModifier);
private _heliCount =  _difficultyModifier;

private _vehicleCounts = [];
{
	_x params ["","_pos"];
	_vehicleCounts pushBack count(nearestObjects [_pos,["AllVehicles"],150,true]);
} forEach AW_fobDetails;
private _index = (_vehicleCounts call CBA_fnc_findMax) select 1;

(AW_fobDetails select _index) params ["_fobName","_fobPosition"];
private _sectors = AW_radioTowerSectors;
_sectors append AW_militarySectors;

([_fobPosition,_sectors,true] call AW_fnc_findNearestSector) params [["_sector",""]];
private _spawnPos = markerPos _sector;
if (_spawnPos isEqualTo [0,0,0]) then {
	_infantryCount = 0;
};

[format["Intel suggests the enemy are planning to attack %1 in 10 minutes.",_fobName],"generalNotif","FOB Assault"] remoteExecCall ["AW_fnc_notify",-2];

[
	{
		params ["_targetPos","_squadCount","_vehicleCount","_heliCount","_spawnPos"];

		for "_i" from 1 to _squadCount do {
			private _group = [_spawnPos,[250]] call AW_fnc_spawnTroopCarrier;
			private _waypoint = _group addWaypoint [_targetPos,10];
			_waypoint setWaypointType "MOVE";
			_waypoint setWaypointBehaviour "AWARE";
			_waypoint setWaypointCombatMode "RED";
			_waypoint setWaypointCompletionRadius 10;
		};

		private _vehicleTypes = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforMediumVehicles");
		_vehicleTypes append (getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforHeavyVehicles"));
		for "_i" from 1 to _vehicleCount do {
			private _group = [selectRandom _vehicleTypes,_spawnPos,[250]] call AW_fnc_createVehicle;

			private _waypoint = _group addWaypoint [_targetPos,30];
			_waypoint setWaypointType "MOVE";
			_waypoint setWaypointBehaviour "AWARE";
			_waypoint setWaypointCombatMode "RED";
			_waypoint setWaypointSpeed "FULL";
			_waypoint setWaypointCompletionRadius 10;
		};

		[_heliCount,_targetPos] call AW_fnc_spawnHelicopters;
		[1,_targetPos] call AW_fnc_spawnJet;
	},
	[_fobPosition,_infantryCount,_vehicleCount,_heliCount,_spawnPos],
	600
] call CBA_fnc_waitAndExecute;