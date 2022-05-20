/*
	File: fn_humanitarianRelief.sqf
	Author: Dom
	Description: Secondary objective to deliver humanitarian relief to a town/city
*/
params [
	["_stage","init",[""]],
	["_data",objNull,[objNull]]
];

switch _stage do {
	case "init": {
		if (AW_secondaryActive isNotEqualTo "") exitWith {["A secondary mission is in already progress."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner]};
		private _array = [["city","town"],true] call AW_fnc_getSectorsByType;
		private _targetSector = [_array] call AW_fnc_findFrontlineSector;

		AW_secondaryActive = "Relief";
		publicVariable "AW_secondaryActive";

		private _marker = createMarker ["reliefTarget",markerPos _targetSector];
		_marker setMarkerType "mil_objective";
		_marker setMarkerColor "ColorYellow";
		_marker setMarkerText "Humanitarian Relief Requested";
		_marker setMarkerSize [1.5,1.5];
		["The relief sector is marked, head there now.","generalNotif","Humanitarian Relief"] remoteExecCall ["AW_fnc_notify",-2];
	};

	case "addTruck": {
		AW_reliefTrucks pushBack _data;

		if (count AW_reliefTrucks isEqualTo 1) then {
			[
				{
					params ["_startPos"];
					private _convoyStart = AW_reliefTrucks findIf {_x distance _startPos > 300};
					_convoyStart isNotEqualTo -1
				},
				{
					params ["_startPos"];
					["startMonitor"] call AW_fnc_humanitarianRelief;
				},
				[getPosATL _data]
			] call CBA_fnc_waitUntilAndExecute;
		};
	};

	case "startMonitor": {
		([markerPos "reliefTarget",AW_allSectors,true] call AW_fnc_findNearestSector) params ["_sector"];

		private _groups = [];
		private _vehicles = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforLightVehicles");
		if (AW_opforThreat > 45) then {
			_vehicles append (getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforMediumVehicles"));
		};
		for "_i" from 1 to (count AW_reliefTrucks) do {
			private _group = [selectRandom _vehicles,markerPos _sector,[500]] call AW_fnc_createVehicle;
			_groups pushBack _group;
		};

		[
			{
				params ["_args","_handle"];
				_args params ["_scouts","_i"];

				if (AW_reliefTrucks isEqualTo []) exitWith {
					[_handle] call CBA_fnc_removePerFrameHandler;
					deleteMarker "reliefTarget";
					AW_secondaryMissionsCompleted = AW_secondaryMissionsCompleted + 1;
					AW_secondaryActive = "";
					publicVariable "AW_secondaryActive";
					["Humanitarian Relief finished.","generalNotif","Humanitarian Relief"] remoteExecCall ["AW_fnc_notify",-2];
					call AW_fnc_saveGame;

					{
						[_x] call AW_fnc_deleteGroup;
					} forEach _scouts;
				};

				private _toDelete = [];
				{
					if !(alive _x) then {
						["A truck was destroyed.","failedNotif","Humanitarian Relief"] remoteExecCall ["AW_fnc_notify",-2];
						_toDelete pushBack _forEachIndex;
					} else {
						if ((getPosATL _x) distance (markerPos "reliefTarget") < 100 && {crew _x isEqualTo []}) then {
							deleteVehicle _x;
							["A truck was delivered successfully.","successNotif","Humanitarian Relief"] remoteExecCall ["AW_fnc_notify",-2];
							[10] call AW_fnc_adjustCivRep;
							_toDelete pushBack _forEachIndex;
						};
					};
				} forEach AW_reliefTrucks;

				reverse _toDelete;
				{
					AW_reliefTrucks deleteAt _x;
				} forEach _toDelete;

				{
					private _group = _x;
					private _leader = leader _x;
					if !(isNull _group) then {
						if (_i mod 60 isEqualTo 0 || {waypoints _group isEqualTo []}) then {
							[_group] call CBA_fnc_clearWaypoints;
							private _newPos = (getPosATL (AW_reliefTrucks select 0)) getPos [random 300,random 360];
							private _waypoint = _group addWaypoint [_newPos,50];
							_waypoint setWaypointType "SAD";
							_waypoint setWaypointBehaviour "AWARE";
							_waypoint setWaypointCombatMode "YELLOW";
							_waypoint setWaypointSpeed "FULL";
							_waypoint setWaypointCompletionRadius 100;
							_waypoint setWayPointStatements ["true","deleteWaypoint [group this,currentWaypoint (group this)]"];
						};
					};
				} forEach _scouts;

				_args set [1,(_i + 1)];
			},
			1,
			[_groups,0]
		] call CBA_fnc_addPerFrameHandler;
	};
};
