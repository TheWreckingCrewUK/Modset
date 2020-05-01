/*
	Author: Bosenator

	Description:
	Spawns an ambient air unit, makes it move and deletes it when it reaches destination
	Vehicle will never engage and will be flagged as captive
	Good for simple creation of ambient fly by's
	(This is a better version of the BI one)

	Parameter(s):
	_this select 0:	ARRAY - The position where vehicle will spawn
	_this select 1:	ARRAY - The end position of the vehicle, it will be deleted here
	_this select 2:	NUMBER - The spawn and flight height of the vehicle
	_this select 3:	STRING - The speed the vehicle will move ("LIMITED", "NORMAL", "FULL")
	_this select 4:	STRING - The classname of the vehicle to spawn
	_this select 5:	SIDE - The side the vehicle belongs
	
	Returns:
	BOOL - true on success
*/

//Params
private ["_start", "_end", "_height", "_speed", "_class", "_side"];
_start 		= _this param [0, [0,0,0], [[]]];
_end 		= _this param [1, [100,100,100], [[]]];
_height 	= _this param [2, 100, [0]];
_speed		= _this param [3, "NORMAL", [""]];
_class 		= _this param [4, "B_Heli_Light_01_F", [""]];
_side		= _this param [5, WEST, [WEST]];

//Set spawn height
_start set [2, _height];

//The starting direction of the vehicle
private "_direction";
_direction = _start getDir _end;

//Spawn the vehicle
private ["_vehicleContainer", "_vehicle", "_vehicleCrew", "_vehicleGroup"];
_vehicleContainer	= [_start, _direction, _class, _side] call BIS_fnc_spawnVehicle;
_vehicle 		= _vehicleContainer select 0;
_vehicleCrew		= _vehicleContainer select 1;
_vehicleGroup		= _vehicleContainer select 2;

//The vehicle/group should ignore it's surroundings
_vehicle disableAi "TARGET";
_vehicle disableAi "AUTOTARGET";
_vehicle setCaptive true;
_vehicleGroup allowFleeing 0;

_maxSpeed = [(configFile >> "CfgVehicles" >> _class), "maxSpeed", 100] call BIS_fnc_returnConfigEntry;
_vehicle setVelocityModelSpace [0, _maxspeed / 3, 0]; // start them flying at maxspeed

//Fly height
_vehicle flyInHeightASL [_height, _height, _height];

//Add waypoint
private "_waypoint";
_waypoint = _vehicleGroup addWaypoint [_end, 0];

//Set waypoint properties
_waypoint setWaypointType "MOVE";
_waypoint setWaypointBehaviour "CARELESS";
_waypoint setWaypointCombatMode "BLUE";
_waypoint setWaypointSpeed _speed;

//The waypoint statements
//Once unit completes waypoint we clean up crew/vehicle/group
_waypoint setWaypointStatements [
	"true",
	"private ['_group', '_vehicle']; _group = group this; _vehicle = vehicle this; { deleteVehicle _x } forEach units _group; deleteVehicle _vehicle; deleteGroup _group;"
];

_vehicle