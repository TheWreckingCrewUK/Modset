/*
	File: fn_listeningPost.sqf
	Author: Dom
	Description: Secondary objective to setup a listening post
*/
params [
	["_stage","init",[""]],
	["_data",objNull,[objNull,[]]]
];

switch _stage do {
	case "init": {
		if (AW_secondaryActive isNotEqualTo "") exitWith {["A secondary mission is in already progress."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner]};
		private _targetSector = [AW_bluforSectors] call AW_fnc_findFrontlineSector;

		AW_secondaryActive = "listeningPost";
		publicVariable "AW_secondaryActive";

		private _marker = createMarker ["listeningPost",markerPos _targetSector];
		_marker setMarkerType "mil_objective";
		_marker setMarkerColor "ColorYellow";
		_marker setMarkerText "Listening Post Setup Location";
		_marker setMarkerSize [1.5,1.5];
		["The location for the listening post is marked.","generalNotif","Listening Post"] remoteExecCall ["AW_fnc_notify",-2];
	};
	case "initPost": {
		if (owner _data isNotEqualTo 2) then {
			_data setOwner 2;
		};

		[_data,2] call ace_cargo_fnc_setSize;
		[_data,true,[0,1,1]] remoteExecCall ["ace_dragging_fnc_setCarryable",-2,_data];

		_data addEventHandler ["Deleted",{["postKilled",_this] call AW_fnc_listeningPost}];

		[
			{
				params ["_post","_targetPos"];
				!alive _post || {isNull attachedTo _post && {_post distance2D _targetPos < 50}}
			},
			{
				params ["_post"];

				if (alive _post) then {
					["The listening post is now active.","generalNotif","Listening Post"] remoteExecCall ["AW_fnc_notify",-2];
					["startPost",_post] call AW_fnc_listeningPost;
				};
			},
			[_data,markerPos "listeningPost"]
		] call CBA_fnc_waitUntilAndExecute;
	};
	case "postKilled": {
		AW_secondaryActive = "";
		publicVariable "AW_secondaryActive";

		deleteMarker "listeningPost";
		["The listening post was destroyed.","failedNotif","Listening Post"] remoteExecCall ["AW_fnc_notify",-2];
	};
	case "startPost": {
		private _counter = 1;
		[
			{
				params ["_args","_handle"];
				_args params ["_post","_count","_counterAttack"];

				if !(alive _post) exitWith {
					[_handle] call CBA_fnc_removePerFrameHandler;
				};

				if (_count mod 1800 isEqualTo 0) exitWith {
					[_handle] call CBA_fnc_removePerFrameHandler;
					_post removeAllEventHandlers "Deleted";
					deleteVehicle _post;
					deleteMarker "listeningPost";
					AW_secondaryActive = "";
					publicVariable "AW_secondaryActive";
					["The listening post mission finished.","successNotif","Listening Post"] remoteExecCall ["AW_fnc_notify",-2];
					["The full 60 intel was obtained."] remoteExecCall ["AW_fnc_notify",-2];
				};

				private _nearPlayers = playableUnits findIf {_x distance _post < 50};
				private _enemyCount = {side _x isEqualTo east} count (_post nearEntities ["CAManBase",30]);
				if (_nearPlayers isEqualTo -1 && {_enemyCount > 0}) exitWith {
					[5] call AW_fnc_adjustThreat;
					deleteVehicle _post;
				};

				if (_count mod 60 isEqualTo 0) then {
					[2] call AW_fnc_adjustIntel;
				};

				_args set [1,(_count + 1)];
			},
			1,
			[_data,_counter]
		] call CBA_fnc_addPerFrameHandler;

		private _counterAttackWaves = ceil(AW_opforThreat / 25);
		for "_i" from 1 to _counterAttackWaves do {
			private _counterAttackTime = round (150 + random 150);
			[
				{
					params ["_post"];

					private _targetPos = getPosATL _post;
					private _squadCount = (ceil(count playableUnits / 3)) max 2;
					([_targetPos,AW_allSectors,true] call AW_fnc_findNearestSector) params ["_nearSector"];

					private _groups = [];
					for "_i" from 1 to _squadCount do {
						private _group = [markerPos _nearSector,[200]] call AW_fnc_spawnTroopCarrier;
						_groups pushBack _group;
					};

					{
						private _waypoint = _x addWaypoint [_targetPos,20];
						_waypoint setWaypointType "SAD";
						_waypoint setWaypointBehaviour "AWARE";
						_waypoint setWaypointCombatMode "RED";
						_waypoint setWaypointSpeed "FULL";
						_waypoint setWaypointCompletionRadius 10;
					} forEach _groups;

					[
						{
							params ["_pos"];
							AW_secondaryActive isNotEqualTo "listeningPost" &&
							{(playableUnits findIf {_x distance _pos < 2000}) isEqualTo -1}
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
				[_data],
				(_counterAttackTime * _i)
			] call CBA_fnc_waitAndExecute;
		};
	};
};