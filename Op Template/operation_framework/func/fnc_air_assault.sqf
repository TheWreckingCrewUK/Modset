private ["_spawnmarker","_dropmarker","_movemarker","_helipad","_crew1","_helicopter","_heliselect"
         ,"_p1"
];
_spawnmarker = _this select 0;
_dropmarker = _this select 1;
_movemarker = _this select 2;

_helipad = [getMarkerPos _dropmarker, 180, "Land_HelipadEmpty_F"] call BIS_fnc_spawnVehicle;
 _crew1 = creategroup EAST;
 _helicopter = [getMarkerPos _spawnmarker, 180, "RHS_Mi8mt_Cargo_vvsc",_crew1] call BIS_fnc_spawnVehicle;
 _heliselect = _helicopter select 0;
 _p1 = [getMarkerPos "functions", EAST, (configfile >> "CfgGroups" >> "East" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry" >> "rhs_group_rus_msv_infantry_squad")] call BIS_fnc_spawnGroup;

 
{
        _x assignAsCargo _heliselect;
	_x moveInCargo _heliselect;
    } forEach (units _p1);


	
	

_droploc = _crew1 addwaypoint[getmarkerpos _dropmarker,0];// heli transport unload
_droploc setwaypointtype"TR UNLOAD"; 

_deletemove = _crew1 addwaypoint[getmarkerpos "functions",0];// heli transport unload
_deletemove setwaypointtype"MOVE"; 
_deletemove setWaypointStatements ["true", ""];



_moveloc = _p1 addwaypoint[getmarkerpos _movemarker,0,2];// inf move 
_moveloc setwaypointtype"MOVE"; 

 
