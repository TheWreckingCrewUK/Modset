/*
	File: fn_sectorCounterAttack.sqf
	Author: Dom
	Description: Side mission for a sector counterattack
*/

private _targetSector = [AW_bluforSectors] call AW_fnc_findFrontlineSector;
private _targetPos = markerPos _targetSector;
private _inactiveSectors = AW_allSectors select {!(_x in AW_activeSectors)};
([_targetPos,_inactiveSectors,true] call AW_fnc_findNearestSector) params ["_nearSector","","_distance"];
private _sectorSpawnPos = markerPos _nearSector;
private _count = (round (AW_opforThreat / 25)) max 1;
private _marker = createMarker ["counterAttack",_targetPos];
_marker setMarkerType "mil_objective";
_marker setMarkerColor "ColorRed";
_marker setMarkerText "Enemy Counter-Attack";
if ((AW_activeSectors pushBackUnique _targetSector) isNotEqualTo -1) then {
	publicVariable "AW_activeSectors";
};
[format["The enemy have begun a counter-attack at %1.",markerText _targetSector],"failedNotif","Enemy Counter-Attack"] remoteExecCall ["AW_fnc_notify",-2];


private _groups = [];
if (_distance < 5000) then {
	private _squadTypes = ["AW_opforBasicSquad","AW_opforATSquad","AW_opforAASquad","AW_balancedSquad"];
	for "_i" from 1 to _count do {
		private _group = [selectRandom _squadTypes,_sectorSpawnPos] call AW_fnc_createSquad;
		_groups pushBack _group;
	};

	private _vehicles = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforLightVehicles");
	if (AW_opforThreat > 45) then {
		_vehicles append (getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforMediumVehicles"));
		if (AW_opforThreat > 75) then {
			_vehicles append (getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforHeavyVehicles"));
		};
	};

	private _vehCount = ceil (_count / 2);
	for "_i" from 1 to _vehCount do {
		private _group = [selectRandom _vehicles,_sectorSpawnPos,[250]] call AW_fnc_createVehicle;
		_groups pushBack _group;
	};

	{
		private _waypoint = _x addWaypoint [_targetPos,100];
		_waypoint setWaypointType "MOVE";
		_waypoint setWaypointBehaviour "AWARE";
		_waypoint setWaypointCombatMode "RED";
		_waypoint setWaypointSpeed "NORMAL";
		_waypoint setWaypointCompletionRadius 10;

		for "_i" from 1 to 3 do {
			_waypoint = _x addWaypoint [_targetPos,100];
			_waypoint setWaypointType "MOVE";
		};

		_waypoint = _x addWaypoint [_targetPos,100];
		_waypoint setWaypointType "CYCLE";
	} forEach _groups;
} else {
	private _allHeliGroups = [_count,_targetPos] call AW_fnc_spawnHelicopters;
	{
		_x params ["","","_infantryGroup"];
		_groups pushBack _infantryGroup;
	} forEach _allHeliGroups;
};

[
	{
		[
			{
				params ["_targetPos","_groups","_sector"];
				private _requiredCaptureRatio = getNumber(missionConfigFile >> "Core_Settings" >> "AW_sectorCaptureRatio");
				([_targetPos,_sector] call AW_fnc_getCaptureRatio) > _requiredCaptureRatio || {_groups findIf {!isNull _x} isEqualTo -1}
			},
			{
				params ["_targetPos","_groups","_sector","_marker"];
				["The counter-attack was successfully repelled.","successNotif","Sector Safe"] remoteExecCall ["AW_fnc_notify",-2];
				deleteMarker _marker;
				AW_activeSectors deleteAt (AW_activeSectors find _sector);
				publicVariable "AW_activeSectors";

				[
					{
						params ["_targetPos"];
						(playableUnits findIf {_x distance _targetPos < 1000}) isEqualTo -1
					},
					{
						params ["","_groups"];
						{
							[_x] call AW_fnc_deleteGroup;
						} forEach _groups;
					},
					[_targetPos,_groups]
				] call CBA_fnc_waitUntilAndExecute;
			},
			_this,
			1200,
			{
				params ["_targetPos","_groups","_targetSector","_marker"];
				[format["The enemy have re-taken %1.",markerText _targetSector],"failedNotif","Sector Lost"] remoteExecCall ["AW_fnc_notify",-2];
				AW_bluforSectors deleteAt (AW_bluforSectors find _targetSector);
				publicVariable "AW_bluforSectors";
				AW_activeSectors deleteAt (AW_activeSectors find _targetSector);
				publicVariable "AW_activeSectors";
				_targetSector setMarkerColor "colorOPFOR";
				[_targetSector,(["average"] call AW_fnc_getGarrisonStrength)] call AW_fnc_setGarrisonStrength;
				
				private _factoryIndex = AW_factorySetup findIf {_x select 0 isEqualTo _targetSector};
				if (_factoryIndex isNotEqualTo -1) then {
					AW_factorySetup deleteAt _factoryIndex;
					publicVariable "AW_factorySetup";
				};
				if (_targetSector in AW_radioTowerSectors) then {
					[_targetSector,false] call AW_fnc_setTower;
				};
				deleteMarker _marker;
				AW_sectorsLost = AW_sectorsLost + 1;
				call AW_fnc_saveGame;

				[
					{
						params ["_targetPos"];
						(playableUnits findIf {_x distance _targetPos < 1000}) isEqualTo -1
					},
					{
						params ["","_groups"];
						{
							[_x] call AW_fnc_deleteGroup;
						} forEach _groups;
					},
					[_targetPos,_groups]
				] call CBA_fnc_waitUntilAndExecute;
			}
		] call CBA_fnc_waitUntilAndExecute;
	},
	[_targetPos,_groups,_targetSector,_marker],
	600
] call CBA_fnc_waitAndExecute;