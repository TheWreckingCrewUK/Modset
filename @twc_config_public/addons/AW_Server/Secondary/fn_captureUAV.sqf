/*
	File: fn_captureUAV.sqf
	Author: Stanhope - Edited by Dom for new functionality
	Description: Secondary objective to secure an enemy UAV
*/
if (AW_secondaryActive isNotEqualTo "") exitWith {["A secondary mission is in already progress."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner]};
private _position = ["opforObjective"] call AW_fnc_findSafePosition;
if (_position isEqualTo []) exitWith {
	["No suitable position was found."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner];
};

[-10] call AW_fnc_adjustIntel;
AW_secondaryActive = "UAV";
publicVariable "AW_secondaryActive";

private _craters = [];
_craters pushBack (createVehicle ["CraterLong",_position,[],0,"CAN_COLLIDE"]);
_craters pushBack (createVehicle ["CraterLong",(_position getPos [6,180]),[],0,"CAN_COLLIDE"]);
_craters pushBack (createVehicle ["CraterLong",(_position getPos [12,180]),[],0,"CAN_COLLIDE"]);

private _uav = createVehicle ["O_UAV_02_F",_position,[],0,"CAN_COLLIDE"];
_uav attachTo [(_craters select 0),[0,-1,1]];
_uav allowDamage false;
_uav setDamage 0.75;
_uav setVectorUp [0.5,0,1];
[_uav] remoteExecCall ["AW_fnc_secureUAV",-2,_uav];

private _squadCount = (ceil(count playableUnits / 4)) max 2;
private _groups = [];
private _squadTypes = ["AW_opforBasicSquad","AW_opforATSquad","AW_opforAASquad","AW_balancedSquad"];
for "_i" from 1 to _squadCount do {
	private _group = [selectRandom _squadTypes,_position] call AW_fnc_createSquad;
	_groups pushBack _group;
};

private _vehicles = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforLightVehicles");
_vehicles append (getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforMediumVehicles"));
if (AW_opforThreat > 50) then {
	_groups pushBack ([selectRandom _vehicles,_position,[250]] call AW_fnc_createVehicle);
};
[[_groups,_position,100],AW_fnc_initSectorPatrol] call AW_fnc_waitForTransferAndExecute;

private _markerPos = _position getPos [random 500,random 360];
private _marker = createMarker ["captureUAV",_markerPos];
_marker setMarkerColor "ColorOPFOR";
_marker setMarkerShape "ELLIPSE";
_marker setMarkerBrush "FDiagonal";
_marker setMarkerSize [1000,1000];

["The area the UAV went down in has been marked.","generalNotif","Downed UAV"] remoteExecCall ["AW_fnc_notify",-2];
[
	{
		params ["_uav"];
		_uav getVariable ["AW_intelDownloaded",false]
	},
	{
		params ["_uav","_craters","_marker","_groups"];
		deleteMarker _marker;
		["The UAV data was downloaded.","successNotif","Downed UAV"] remoteExecCall ["AW_fnc_notify",-2];
		[30] call AW_fnc_adjustIntel;
		AW_secondaryMissionsCompleted = AW_secondaryMissionsCompleted + 1;
		AW_secondaryActive = "";
		publicVariable "AW_secondaryActive";
		call AW_fnc_saveGame;
		[
			{
				params ["_uav"];
				(playableUnits findIf {_x distance _uav < 1000}) isEqualTo -1
			},
			{
				params ["_uav","_craters","_groups"];
				deleteVehicle _uav;
				{
					deleteVehicle _x;
				} forEach _craters;

				{
					{
						if (alive _x) then {
							deleteVehicle _x;
						};
					} forEach units _x;
				} forEach _groups;
			},
			[_uav,_craters,_groups]
		] call CBA_fnc_waitUntilAndExecute;
	},
	[_uav,_craters,_marker,_groups],
	1200 + (random 300),
	{
		params ["_uav","_craters","_marker","_groups"];
		deleteMarker _marker;
		["The UAV data was downloaded by the enemy.","failedNotif","Downed UAV"] remoteExecCall ["AW_fnc_notify",-2];
		AW_secondaryMissionsFailed = AW_secondaryMissionsFailed + 1;
		AW_secondaryActive = "";
		publicVariable "AW_secondaryActive";

		[
			{
				params ["_uav"];
				(playableUnits findIf {_x distance _uav < 1000}) isEqualTo -1
			},
			{
				params ["_uav","_craters","_groups"];
				deleteVehicle _uav;
				{
					deleteVehicle _x;
				} forEach _craters;

				{
					{
						if (alive _x) then {
							deleteVehicle _x;
						};
					} forEach units _x;
				} forEach _groups;
			},
			[_uav,_craters,_groups]
		] call CBA_fnc_waitUntilAndExecute;
	}
] call CBA_fnc_waitUntilAndExecute;