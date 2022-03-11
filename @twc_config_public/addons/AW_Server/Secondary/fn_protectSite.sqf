	/*
	File: fn_protectSite.sqf
	Author: Stanhope - Edited by Dom for new functionality
	Description: Secondary objective to protect a building
*/
if (AW_secondaryActive isNotEqualTo "") exitWith {["A secondary mission is in already progress."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner]};
private _buildingPosition = ["neutralObjective",[worldSize / 2,worldSize / 2,0]] call AW_fnc_findSafePosition;
if (_buildingPosition isEqualTo []) exitWith {
	["No suitable position was found."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner];
};

[-10] call AW_fnc_adjustIntel;
AW_secondaryActive = "Heritage";
publicVariable "AW_secondaryActive";

private _buildingClasses = ["Land_OrthodoxChurch_02_F","Land_Church_03","Land_Church_04_red_F","Land_A_Mosque_small_1_EP1","Land_Temple_Native_01_F","Land_A_Mosque_small_2_EP1"];
private _building = createVehicle [(selectRandom _buildingClasses),_buildingPosition];
_building setVectorUp surfaceNormal (getPosATL _building);

private _marker = createMarker ["heritageSite",_buildingPosition];
_marker setMarkerType "mil_objective";
_marker setMarkerColor "ColorYellow";
_marker setMarkerText "Heritage Site";
["The heritage site is marked, head there now.","generalNotif","Heritage Site"] remoteExecCall ["AW_fnc_notify",-2];
[
	{
		params ["_building","_buildingPosition","_marker"];
		["The enemy are moving on the heritage site.","generalNotif","Heritage Site"] remoteExecCall ["AW_fnc_notify",-2];
	
		private _squadCount = (ceil(count playableUnits / 4)) max 2;
		private _vehCount = ceil(AW_opforThreat / 33);
	
		private _enemyPos = [_buildingPosition,1250,1750,5,0,10,0] call BIS_fnc_findSafePos;
		private _objectiveGroups = [];
		private _objectiveUnits = [];
		for "_i" from 1 to _squadCount do {
			private _group = ["AW_opforBalancedSquad",_enemyPos] call AW_fnc_createSquad;
			_objectiveGroups pushBack _group;
			_objectiveUnits append (units _group);
		};
	
		private _vehicles = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforLightVehicles");
		_vehicles append (getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforMediumVehicles"));
		for "_i" from 1 to _vehCount do {
			private _group = [selectRandom _vehicles,_enemyPos,[1000]] call AW_fnc_createVehicle;
			_objectiveGroups pushBack _group;
			_objectiveUnits append (units _group);
		};
	
		{
			private _waypoint = _x addWaypoint [_buildingPosition,0];
			_waypoint setWaypointType "MOVE";
			_waypoint setWaypointBehaviour "AWARE";
			_waypoint setWaypointCombatMode "RED";
			_waypoint setWaypointCompletionRadius 10;
		} forEach _objectiveGroups;
	
		[
			{
				params ["_building","_units"];
				private _nearUnits = _units findIf {_x distance _building < 30};
				private _nearPlayers = playableUnits findIf {_x distance _building < 30};
				(_nearUnits isNotEqualTo -1 && {_nearPlayers isEqualTo -1}) || {damage _building isEqualTo 1}
			},
			{
				params ["_building","_units","_marker"];
				["The heritage site was destroyed.","failedNotif","Heritage Site"] remoteExecCall ["AW_fnc_notify",-2];
				[-30] call AW_fnc_adjustCivRep;
				_building setDamage 1;
				AW_secondaryMissionsFailed = AW_secondaryMissionsFailed + 1;
				deleteMarker _marker;
				AW_secondaryActive = "";
				publicVariable "AW_secondaryActive";
				call AW_fnc_saveGame;
				[
					{
						params ["_building"];
						private _nearPlayers = playableUnits findIf {_x distance _building < 1000};
						(_nearPlayers isEqualTo -1)
					},
					{
						params ["_building","_units"];
						deleteVehicle _building;

						private _vehicles = [];
						{
							private _vehicle = objectParent _x;
							if (isNull _vehicle) then {
								deleteVehicle _x;
							} else {
								_vehicle deleteVehicleCrew _x;
								_vehicles pushBack _vehicle;
							};
						} forEach _units;

						_vehicles = _vehicles arrayIntersect _vehicles;
						{
							deleteVehicle _x;
						} forEach _vehicles;
					},
					[_building,_units]
				] call CBA_fnc_waitUntilAndExecute;
			},
			[_building,_objectiveUnits,_marker],
			900,
			{
				params ["_building","_units","_marker"];
				["The heritage site was successfully defended.","successNotif","Heritage Site"] remoteExecCall ["AW_fnc_notify",-2];
				[30] call AW_fnc_adjustCivRep;
				deleteMarker _marker;
				AW_secondaryMissionsCompleted = AW_secondaryMissionsCompleted + 1;
				AW_secondaryActive = "";
				publicVariable "AW_secondaryActive";
				call AW_fnc_saveGame;
				[
					{
						params ["_building"];
						private _nearPlayers = playableUnits findIf {_x distance _building < 1000};
						(_nearPlayers isEqualTo -1)
					},
					{
						params ["_building","_units"];
						deleteVehicle _building;

						private _vehicles = [];
						{
							private _vehicle = objectParent _x;
							if (isNull _vehicle) then {
								deleteVehicle _x;
							} else {
								_vehicle deleteVehicleCrew _x;
								_vehicles pushBack _vehicle;
							};
						} forEach _units;

						_vehicles = _vehicles arrayIntersect _vehicles;
						{
							deleteVehicle _x;
						} forEach _vehicles;
					},
					[_building,_units]
				] call CBA_fnc_waitUntilAndExecute;
			}
		] call CBA_fnc_waitUntilAndExecute;
	},
	[_building,_buildingPosition,_marker],
	300
] call CBA_fnc_waitAndExecute;