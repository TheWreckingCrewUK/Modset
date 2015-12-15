private ["_helipad", "_crew1", "_helicopter", "_spawnedInfantry"];

params ["_spawnMarker", "_dropMarker", "_movesMarker"];

_helipad = [getMarkerPos _dropMarker, 180, "Land_HelipadEmpty_F"] call BIS_fnc_spawnVehicle;
_crew1 = createGroup EAST;
_helicopter = [getMarkerPos _spawnMarker, 180, "RHS_Mi8mt_Cargo_vvsc", _crew1] call BIS_fnc_spawnVehicle;
_helicopter params ["_vehicle"];
_spawnedInfantry = [getMarkerPos "functions", EAST, (configfile >> "CfgGroups" >> "East" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry" >> "rhs_group_rus_msv_infantry_squad")] call BIS_fnc_spawnGroup;

{
    _x assignAsCargo _vehicle;
	_x moveInCargo _vehicle;
} forEach (units _spawnedInfantry);

_droploc = _crew1 addWaypoint [getMarkerPos _dropMarker, 0]; // heli transport unload
_droploc setWaypointType "TR UNLOAD";

_deletemove = _crew1 addWaypoint [getMarkerPos "functions", 0]; // heli transport unload
_deletemove setWaypointType "MOVE";

_moveloc = _spawnedInfantry addWaypoint [getMarkerPos _movesMarker, 0, 2]; // inf move
_moveloc setWaypointType "MOVE";
