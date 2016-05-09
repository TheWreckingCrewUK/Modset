/*
/ Required parameters
/ 0 - Spawn Marker
/ 1 - Location that the helicopter will drop the troops
/ 2 - Location that the troops will move to after being dropped off
/ 3 - Location that the helicopter will land after dropping off troops
/ 4 - Only if Custom ERA: Class Name of Helicopter  
/ 5 - Only if Custom ERA: Config classname of Group
*/
private ["_SpawnPos","_DropPos","_movePos","_helipad","_crew1","_helicopter","_heliselect","_p1"];

params ["_SpawnPos","_DropPos","_movePos","_LandPos",["_helicopterspawn",""],"_group"];

_RUsquad = (configfile >> "CfgGroups" >> "East" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry" >> "rhs_group_rus_msv_infantry_squad");
_USSRsquad = (configfile >> "CfgGroups" >> "East" >> "SUD_USSR" >> "Infantry" >> "SU_InfSquad");

_helipad = [getMarkerPos _DropPos, 180, "Land_HelipadEmpty_F"] call BIS_fnc_spawnVehicle;
 _crew1 = creategroup EAST;
 _helicopter = [getMarkerPos _SpawnPos, 180, _helicopterspawn,_crew1] call BIS_fnc_spawnVehicle;
 _heliselect = _helicopter select 0;
 _p1 = [[0,0,0], EAST, _group] call BIS_fnc_spawnGroup;
 
{
    _x assignAsCargo _heliselect;
	_x moveInCargo _heliselect;
    } forEach (units _p1);

_droploc = _crew1 addwaypoint[getmarkerpos _DropPos,0];// heli transport unload
_droploc setwaypointtype"TR UNLOAD"; 

_deletemove = _crew1 addwaypoint[_LandPos,0];// heli transport unload
_deletemove setwaypointtype"LAND"; 
_deletemove setWaypointStatements ["true", ""];

_moveloc = _p1 addwaypoint[getmarkerpos _movePos,0,2];// inf move 
_moveloc setwaypointtype"MOVE"; 
