/*
_endingPoint = remainingArray call BIS_fnc_selectRandom;
[_endingPoint] call twc_basicLogistics;
* 
*/

Params ["_endingPoint"];

_startingPoint = "hq2";
_car = "CUP_O_Ural_Reammo_SLA";
_fuel = "CUP_O_Ural_Refuel_SLA";
_squad = ["CUP_O_SLA_Soldier","CUP_O_SLA_Soldier_AT","CUP_O_SLA_Soldier_AT"];



if isServer then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _startingPoint,[300,400],random 360,0,[1],[300, "Air"]] call SHK_pos;
	_PatrolSquad = [_pos, EAST, _squad] call BIS_fnc_spawnGroup;
	_vehicle = _car createVehicle _pos;
	_pos = [getmarkerpos _startingPoint,[300,400],random 360,0,[1],[300, "Air"]] call SHK_pos;
	_vehiclefuel = _fuel createVehicle _pos;
	_men = units _PatrolSquad;
	
	_leader = leader _PatrolSquad;
	_leader moveInDriver _vehicle;
	
	_vehicle addEventHandler ["hit",{player sidechat str (_this select 0) ;{(_this select 0) setHit [_x,0] } foreach ["wheel_1_1_steering","wheel_1_2_steering","wheel_2_1_steering","wheel_2_2_steering"] } ];
	
	_vehicle addEventHandler ["Killed",{if(TWC_enemySupply < 3)then{TWC_enemySupply = TWC_enemySupply + 1}} ];
	
	_vehiclefuel addEventHandler ["hit",{player sidechat str (_this select 0) ;{(_this select 0) setHit [_x,0] } foreach ["wheel_1_1_steering","wheel_1_2_steering","wheel_2_1_steering","wheel_2_2_steering"] } ];
	
	_men = _men - [_leader];
	(_men select 0) moveInDriver _vehiclefuel;
	_men = _men - [(_men select 0)];
	_count = 0;
	{
		_count = _count + 1;
		_x assignAsCargo _vehicle;
		_x moveInCargo [_vehicle, _count];
	}forEach _men;
	_dir = [getMarkerPos _endingPoint, getMarkerPos _startingPoint] call BIS_fnc_dirTo;
	_pos = [getmarkerpos _endingPoint,[100,200],_dir,0,[1],[300, "Air"]] call SHK_pos;
	_wp = _PatrolSquad addWaypoint [_pos, 0];
	_wp setWaypointType "MOVE";
	_wp setWaypointBehaviour "SAFE";
	_wp setWaypointSpeed "NORMAL";
	_wp setWaypointFormation "COLUMN";
	_wp setWaypointTimeout [30,30,30];
	[_patrolSquad, _endingPoint, _startingPoint, _wp] spawn {
		while{!isNull (_this select 0)} do {
			sleep 10;
			if (getMarkerColor (_this select 1) != "colorEAST") then {
				deleteWaypoint (_this select 3);
			};
		};
	};
	_wp2 = _PatrolSquad addWaypoint [getMarkerPos _startingPoint, 1];
	_wp2 setWaypointType "MOVE";
	_wp2 setWaypointBehaviour "SAFE";
	_wp2 setWaypointSpeed "NORMAL";
	_wp2 setWaypointFormation "COLUMN";
	_wp2 setWaypointTimeout [20,20,20];
	_wp2 setWaypointStatements ["True", "if(TWC_enemySupply > -3)then{TWC_enemySupply = TWC_enemySupply - .25; publicVariable 'TWC_enemySuply'}; _trucks = NearestObjects [
	getPos this, ['Truck','Car','Support'], 60]; {deleteVehicle _x}foreach _trucks;{deleteVehicle _x}foreach thisList"];
};