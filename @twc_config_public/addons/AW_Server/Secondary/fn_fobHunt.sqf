/*
	File: fn_fobHunt.sqf
	Author: Dom - Idea from KP's Liberation
	Description: Secondary objective to hunt a FOB
*/
if (AW_secondaryActive isNotEqualTo "") exitWith {["A secondary mission is in already progress."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner]};
private _buildingPosition = ["opforObjective"] call AW_fnc_findSafePosition;
if (_buildingPosition isEqualTo []) exitWith {
	["No suitable position was found."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner];
};
_buildingPosition params ["_xPos","_yPos"];

[-25] call AW_fnc_adjustIntel;
AW_secondaryActive = "fobHunt";
publicVariable "AW_secondaryActive";

private _fobObjects = [];
private _fobObjectives = [];
private _fobDefenders = [];

private _fobArray = selectRandom (getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforFOBs"));
_fobArray params ["_objects","_objectives"];
{
	_x params ["_class","_pos","_dir"];
	_pos = _pos vectorAdd [_xPos,_yPos,0];
	private _object = createVehicle [_class,_pos,[],0,"CAN_COLLIDE"];
	_object setPosATL _pos;
	_object setVectorUp [0,0,1];
	_object setDir _dir;

	_fobObjects pushBack _object;
} forEach _objects;

{
	_x params ["_class","_pos","_dir"];
	_pos = _pos vectorAdd [_xPos,_yPos,0];
	private _object = createVehicle [_class,_pos,[],0,"CAN_COLLIDE"];
	_object setPosATL _pos;
	_object setVectorUp [0,0,1];
	_object setDir _dir;
	_object lock 2;

	if (_class isEqualTo "Land_Laptop_unfolded_F") then {
		[_object] remoteExecCall ["AW_fnc_destroyItem",-2,_object];
	};

	_fobObjectives pushBack _object;
} forEach _objectives;

private _sentryCount = (count playableUnits) max 5;
private _squadCount = (ceil(count playableUnits / 3)) max 2;

if (AW_isLambsEnabled) then {
	_squadCount = _squadCount + 1;
} else {
	private _spawnBuildingPositions = [];
	{
		_spawnBuildingPositions append (_x buildingPos -1);
	} forEach (nearestObjects [_buildingPosition,["Building"],35]);
	private _sentryCount = _sentryCount min (count _spawnBuildingPositions);
	[_spawnBuildingPositions,true] call CBA_fnc_shuffle;
	private _group = ["AW_opforBasicSquad",_spawnBuildingPositions,_sentryCount] call AW_fnc_createSquadInBuilding;
	_fobDefenders pushBack _group;
};

private _squadTypes = ["AW_opforBasicSquad","AW_opforATSquad","AW_opforAASquad","AW_balancedSquad"];
for "_i" from 1 to _squadCount do {
	private _group = [selectRandom _squadTypes,_buildingPosition] call AW_fnc_createSquad;
	_fobDefenders pushBack _group;
};
[[_fobDefenders,_buildingPosition,75],AW_fnc_initSectorPatrol] call AW_fnc_waitForTransferAndExecute;

private _markerPos = _buildingPosition getPos [random 750,random 360];
private _marker = createMarker ["fobHunt",_markerPos];
_marker setMarkerColor "ColorOPFOR";
_marker setMarkerShape "ELLIPSE";
_marker setMarkerBrush "FDiagonal";
_marker setMarkerSize [1500,1500];

["The area the FOB is in has been marked.","generalNotif","FOB Hunting"] remoteExecCall ["AW_fnc_notify",-2];
[
	{
		params ["_objectives"];
		(_objectives select {alive _x}) isEqualTo []
	},
	{
		params ["","","_marker"];
		["The FOB has been destroyed.","successNotif","FOB Hunting"] remoteExecCall ["AW_fnc_notify",-2];
		[-40] call AW_fnc_adjustThreat;
		AW_secondaryMissionsCompleted = AW_secondaryMissionsCompleted + 1;
		deleteMarker _marker;
		AW_secondaryActive = "";
		publicVariable "AW_secondaryActive";
		call AW_fnc_saveGame;
		[
			{
				params ["","_buildingPosition"];
				(playableUnits findIf {_x distance _buildingPosition < 1000}) isEqualTo -1
			},
			{
				params ["_objectives","_buildingPosition","","_objects","_groups"];
				{
					deleteVehicle _x;
				} forEach _objectives;

				{
					if !(_x getVariable ["AW_playerUsed",false]) then {
						deleteVehicle _x;
					};
				} forEach _objects;

				{
					deleteVehicle _x;
				} forEach (nearestObjects [_buildingPosition,["Ruins"],45]);

				{
					{
						if (alive _x) then {
							deleteVehicle _x;
						};
					} forEach units _x;
				} forEach _groups;
			},
			_this
		] call CBA_fnc_waitUntilAndExecute;
	},
	[_fobObjectives,_buildingPosition,_marker,_fobObjects,_fobDefenders]
] call CBA_fnc_waitUntilAndExecute;