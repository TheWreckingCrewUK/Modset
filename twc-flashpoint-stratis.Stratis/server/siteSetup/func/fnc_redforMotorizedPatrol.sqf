/*
*
*
*/


_startingPoint = remainingArray call BIS_fnc_selectRandom;
_marker = remainingArray call BIS_fnc_selectRandom;

while{_startingPoint == _marker}do{
_marker = remainingArray call BIS_fnc_selectRandom
};

squad = ["CUP_O_SLA_Soldier","CUP_O_SLA_Soldier","CUP_O_SLA_Soldier_GL","CUP_O_SLA_Soldier_AT","CUP_O_SLA_Soldier_AT","CUP_O_SLA_Soldier_MG","CUP_O_SLA_Soldier","CUP_O_SLA_Soldier_GL","CUP_O_SLA_Soldier_AT","CUP_O_SLA_Soldier_AT","CUP_O_SLA_Soldier_MG"];

if isServer then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _startingPoint,[300,400],random 360,0,[0,200],[300, "Air"]] call SHK_pos;
	_PatrolSquad = [_pos, Independent, squad] call BIS_fnc_spawnGroup;
	_vehicle = ural createVehicle _pos;
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
	_pos = [getMarkerpos _marker,[100,200],_dir,0,[0,200],[300, "Air"]] call SHK_pos;
	
	_wp = _PatrolSquad addWaypoint [_pos, 0];
	_wp setWaypointType "MOVE";
	_wp setWaypointBehaviour "AWARE";
	_wp setWaypointSpeed "NORMAL";
	_wp setWaypointTimeout [30,30,30];
	_wp setWaypointStatements ["True","_trucks = NearestObjects [getPos this, ['Truck','Car','Support'], 30]; {deleteVehicle _x}foreach _trucks;{deleteVehicle _x}foreach thisList"];
};