/*
	Author: Bosenator

	Description:
	Spawns multiple aircraft as many as requested, and flies them in the required formation.

	Parameter(s):
	_this select 0:	ARRAY - The position where vehicle will spawn
	_this select 1:	ARRAY - The end position of the vehicle, it will be deleted here
	_this select 2:	NUMBER - The spawn and flight height of the vehicle
	_this select 3:	STRING - The speed the vehicle will move ("LIMITED", "NORMAL", "FULL")
	_this select 4:	STRING - The classname of the vehicle to spawn
	_this select 5:	SIDE - The side the vehicle belongs
	_this select 6:	STRING - The formation to use
	_this select 7:	NUMBER- How many to spawn
	_this select 7:	NUMBER- SPACING!!! REEE!!E!E!
	
	Returns:
	BOOL - true on success
*/

//Params
private ["_start", "_end", "_height", "_speed", "_class", "_side", "_formation", "_numberOf", "_spacing"];
_start 		= _this param [0, [0,0,0], [[]]];
_end 		= _this param [1, [100,100,100], [[]]];
_height 	= _this param [2, 100, [0]];
_speed		= _this param [3, "NORMAL", [""]];
_class 		= _this param [4, "B_Heli_Light_01_F", [""]];
_side		= _this param [5, WEST, [WEST]];
_formation 	= _this param [6, "WEDGE", [""]];
_numberOf	= _this param [7, 3, [0]];
_spacing	= _this param [8, 50, [0]];

if !(isServer) exitWith { };

_anchor = [_start, _end, _height, _speed, _class, _side] call TWC_fnc_ambientFlyBy;
_dirVector = vectorDirVisual _anchor;

for ("_i" from 1 to _numberOf) do {
	_offsetStart = _start;
	_offsetEnd = _end;

	switch (_formation) do {
		case "WEDGE": {
			if (_i % 2 == 0) then {
				_offsetStart = _anchor modelToWorld [(_i * _spacing), ((_i * _spacing) / 2), 0];
				_distanceVector = _offsetStart vectorDistance _end;
				_offsetEnd = [_distanceVector * (cos _dirVector), _distanceVector * (sin _dirVector), _height];
			} else {
				_offsetStart = _anchor modelToWorld [(_i * _spacing), (0 - ((_i * _spacing) / 2)), 0];
				_distanceVector = _offsetStart vectorDistance _end;
				_offsetEnd = [_distanceVector * (cos _dirVector), _distanceVector * (sin _dirVector), _height];
			};
		};
		default { // line 
			if (_i % 2 == 0) then {
				_offsetStart = _anchor modelToWorld [0, ((_i * _spacing) / 2), 0];
				_distanceVector = _offsetStart vectorDistance _end;
				_offsetEnd = [_distanceVector * (cos _dirVector), _distanceVector * (sin _dirVector), _height];
			} else {
				_offsetStart = _anchor modelToWorld [0, (0 - ((_i * _spacing) / 2)), 0];
				_distanceVector = _offsetStart vectorDistance _end;
				_offsetEnd = [_distanceVector * (cos _dirVector), _distanceVector * (sin _dirVector), _height];
			};
		};
	};
	
	[_offsetStart, _offsetEnd, _height, _speed, _class, _side] call TWC_fnc_ambientFlyBy;
};