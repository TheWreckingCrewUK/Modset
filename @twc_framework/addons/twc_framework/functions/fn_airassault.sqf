/*
/ Required parameters
/ 0 - Spawn Marker
/ 1 - Location that the helicopter will drop the troops
/ 2 - Location that the troops will move to after being dropped off
/ 
/ Additional Parameters
/ 3 - Era that Troops\helicopter will be, standard is russian, default:"Modern" Options:"Modern","Cold",Custom
/ 4 - Only if Custom ERA: Class Name of Helicopter  
/ 5 - Only if Custom ERA: Config classname of Group
*/
if (isServer) then {
	params ["_spawnmarker", "_dropmarker", "_movemarker", ["_ERA", "Modern"], ["_helicopterType", ""], ["_infantryType", ""]];
	_pos = switch (typeName _spawnmarker) do {
		case "STRING": {getMarkerPos _spawnmarker};
		case "ARRAY": {_spawnmarker};
		default {throw "Incorrect Position Type"};
	};

	if (_Era == "Modern") then {
		_helicopterType = "CUP_O_Mi8_RU"; // attempted to rename
		_infantryType = (configfile >> "CfgGroups" >> "East" >> "CUP_O_RU" >> "Infantry" >> "CUP_O_RU_InfSection_VDV_EMR");
	};

	if (_Era == "Cold") then {
		_helicopterType = "BCCCCP_Mi8T";
		_infantryType = (configfile >> "CfgGroups" >> "EAST" >> "BCCCCP" >> "BBC" >> "Dismounted_Section");
	};

	private _side = east; // define default
	_side = switch (getNumber (configFile >> "CfgVehicles" >> _helicopterType >> "side")) do {
		case 0: {east};
		case 1: {west};
		case 2: {resistance};
		case 3: {civilian};
	};

	_helipadSpawn =  "HeliHEmpty" createVehicle getMarkerPos _dropMarker;
	_helicopterPilots = createGroup _side;
	_helicopterVehicle = [_pos, 180, _helicopterType, _helicopterPilots] call BIS_fnc_spawnVehicle;
	_infantryGroup = [_pos, _side, _infantryType] call BIS_fnc_spawnGroup; 
	_helicopterMCargo = _helicopterVehicle select 0;

	{
		_x moveInCargo _helicopterMCargo;
	} foreach (units _infantryGroup);

	_moveToUnloadLocation = _helicopterPilots addWaypoint [getMarkerPos _dropmarker, 1];
	[_helicopterPilots, 1] setWaypointType "TR UNLOAD";
	[_helicopterPilots, 1] setWaypointBehaviour "CARELESS";

	_moveToDeleteLocation = _helicopterPilots addWaypoint [_pos, 2];
	[_helicopterPilots, 2] setWaypointType "MOVE";
	[_helicopterPilots, 2] setWaypointStatements ["true", "deleteVehicle (vehicle this); {deleteVehicle _x} forEach (units this);"];

	_infantryGetOutLocation = _infantryGroup addWaypoint [getMarkerPos _dropmarker, 1];
	[_infantryGroup, 1] setWaypointType "GETOUT";

	_infantryMoveLocation = _infantryGroup addWaypoint [getMarkerPos _moveMarker, 2];
	[_infantryGroup, 2] setWaypointType "MOVE";
};
