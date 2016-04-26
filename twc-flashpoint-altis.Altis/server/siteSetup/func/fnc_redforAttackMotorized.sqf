/*
*
*
*/



if((getMarkerColor "hq1") != "ColorEAST")exitWith{hint "enemy base not colorEAST"};
_startingPoint = "hq1";

_marker = capturedArray call BIS_fnc_selectRandom;

if (getMarkerColor "commanderBase" == "colorWest")then{_marker = "commanderBase"};

format["An enemy motorized unit has left their HQ heading for %1", _marker] remoteExec ["hint"]; 

if isServer then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _startingPoint,[300,400],random 360,0,[1],[300, "Air"]] call SHK_pos;
	_PatrolSquad = [_pos, EAST, squad] call BIS_fnc_spawnGroup;
	_vehicle = ural createVehicle getmarkerPos _startingpoint;
	_men = units _PatrolSquad;
	
	_leader = leader _PatrolSquad;
	_leader moveInDriver _vehicle;
	
	_vehicle addEventHandler ["hit",{player sidechat str (_this select 0) ;{(_this select 0) setHit [_x,0] } foreach ["wheel_1_1_steering","wheel_1_2_steering","wheel_2_1_steering","wheel_2_2_steering"] } ];
	
	_men = _men - [_leader];
	_count = 0;
	{
		_count = _count + 1;
		_x assignAsCargo _vehicle;
		_x moveInCargo [_vehicle, _count];
	}forEach _men;
	

	_dir = [getMarkerPos _marker, getMarkerPos _startingPoint] call BIS_fnc_dirTo;
	_pos = [getmarkerpos _marker,[200,300],_dir,0,[1,50]] call SHK_pos;
	
	_wp = _PatrolSquad addWaypoint [_pos, 0];
	_wp setWaypointType "GETOUT";
	_wp setWaypointBehaviour "CARELESS";
	_wp setWaypointSpeed "FULL";
	_wp setWaypointStatements ["True", format["['%1'] call twc_siteContestedCounter", _marker]];
	
	[_PatrolSquad, getmarkerPos _marker,20] call CBA_fnc_taskAttack;
};