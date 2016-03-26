/*
*
*
*/

Params ["_startingPoint","_endingPoint"];

_car = "CUP_O_UAZ_OPEN_RU";
_squad = ["CUP_O_SLA_Soldier","CUP_O_SLA_Soldier","CUP_O_SLA_Soldier_GL","CUP_O_SLA_Soldier_AT","CUP_O_SLA_Soldier_AT","CUP_O_SLA_Soldier_MG"];



if isServer then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _startingPoint,[0,0],random 360,0,[1]] call SHK_pos;
	_PatrolSquad = [_pos, EAST, _squad] call BIS_fnc_spawnGroup;
	_vehicle = _car createVehicle getmarkerPos _startingpoint;
	_men = units _PatrolSquad;
	
	_leader = leader _PatrolSquad;
	_leader moveInDriver _vehicle;
	_men = _men - [_leader];
	_count = 0;
	{
		_count = _count + 1;
		_x assignAsCargo _vehicle;
		_x moveInCargo [_vehicle, _count];
	}forEach _men;
	

	
	_pos = [getmarkerpos _endingPoint,[200,300],180,0,[1,50]] call SHK_pos;
	
	_wp = _PatrolSquad addWaypoint [_pos, 0];
	_wp setWaypointType "GETOUT";
	_wp setWaypointBehaviour "CARELESS";
	_wp setWaypointSpeed "FULL";
	
	[_PatrolSquad, getmarkerPos _endingPoint,20] call CBA_fnc_taskAttack;
};

[_endingPoint]spawn{
	sleep 600;
	execVM format["server\siteSetup\%1\contested.sqf", (_this select 0)];
};