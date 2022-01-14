/*
	File: fn_raidSupplyDepot.sqf
	Author: Dom
	Description: Secondary objective to raid a supply depot
*/
if (AW_secondaryActive isNotEqualTo "") exitWith {["A secondary mission is in already progress."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner]};
private _buildingPosition = ["opforObjective"] call AW_fnc_findSafePosition;
if (_buildingPosition isEqualTo []) exitWith {
	["No suitable position was found."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner];
};
_buildingPosition params ["_xPos","_yPos"];

[-15] call AW_fnc_adjustIntel;
AW_secondaryActive = "supplyDepot";
publicVariable "AW_secondaryActive";

private _depotObjects = [];
private _depotObjectives = [];
private _depotDefenders = [];

private _depotArray = selectRandom (getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforSupplyDepot"));
_depotArray params ["_objects","_objectives"];
{
	_x params ["_class","_pos","_dir"];
	_pos = _pos vectorAdd [_xPos,_yPos,0];
	private _object = createVehicle [_class,_pos,[],0,"CAN_COLLIDE"];
	_object setPosATL _pos;
	_object setVectorUp [0,0,1];
	_object setDir _dir;

	_depotObjects pushBack _object;
} forEach _objects;

{
	_x params ["_class","_pos","_dir","_resourceType"];
	_pos = _pos vectorAdd [_xPos,_yPos,0];
	private _object = createVehicle [_class,_pos,[],0,"CAN_COLLIDE"];
	_object setPosATL _pos;
	_object setVectorUp [0,0,1];
	_object setDir _dir;
	[_object,_resourceType] remoteExecCall ["AW_fnc_addResourceAction",-2,_object];

	_depotObjectives pushBack _object;
} forEach _objectives;

private _sentryCount = (count playableUnits) max 3;
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
	_depotDefenders pushBack _group;
};

private _squadTypes = ["AW_opforBasicSquad","AW_opforATSquad","AW_opforAASquad","AW_balancedSquad"];
for "_i" from 1 to _squadCount do {
	private _group = [selectRandom _squadTypes,_buildingPosition] call AW_fnc_createSquad;
	_depotDefenders pushBack _group;
};
[[_depotDefenders,_buildingPosition,75],AW_fnc_initSectorPatrol] call AW_fnc_waitForTransferAndExecute;

private _markerPos = _buildingPosition getPos [random 250,random 360];
private _marker = createMarker ["supplyDepot",_markerPos];
_marker setMarkerColor "ColorOPFOR";
_marker setMarkerShape "ELLIPSE";
_marker setMarkerBrush "FDiagonal";
_marker setMarkerSize [500,500];

["The area the depot is in has been marked.","generalNotif","Depot Raid"] remoteExecCall ["AW_fnc_notify",-2];
[
	{
		params ["_objectives","_position"];
		(_objectives select {alive _x && {(_x distance _position) < 100}}) isEqualTo []
	},
	{
		params ["","_position","_marker","_objects","_groups"];
		["The raid is complete.","successNotif","Depot Raid"] remoteExecCall ["AW_fnc_notify",-2];
		[-5] call AW_fnc_adjustThreat;
		deleteMarker _marker;
		AW_secondaryMissionsCompleted = AW_secondaryMissionsCompleted + 1;
		AW_secondaryActive = "";
		publicVariable "AW_secondaryActive";
		call AW_fnc_saveGame;
		[
			{
				params ["_position"];
				(playableUnits findIf {_x distance _position < 1000}) isEqualTo -1
			},
			{
				params ["_position","_objects","_groups"];
				{
					if !(_x getVariable ["AW_playerUsed",false]) then {
						deleteVehicle _x;
					};
				} forEach _objects;

				{
					deleteVehicle _x;
				} forEach (nearestObjects [_position,["Ruins"],45]);

				{
					{
						if (alive _x) then {
							deleteVehicle _x;
						};
					} forEach units _x;
				} forEach _groups;
			},
			[_position,_objects,_groups]
		] call CBA_fnc_waitUntilAndExecute;
	},
	[_depotObjectives,_buildingPosition,_marker,_depotObjects,_depotDefenders]
] call CBA_fnc_waitUntilAndExecute;