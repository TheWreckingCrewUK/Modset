params["_marker"];
/*
_array = [_location] call twc_fnc_getTownInfo;
_location = _array select 0;
_name = _array select 1;
_pop = _array select 2;
_opinion = _array select 3;
*/

for "_i" from 1 to 15 do {
	_group = createGroup civilian;
	_individualCiv = _group createUnit ["C_man_1",(getMarkerPos _marker), [], 100, "NONE"];
	_individualCiv setVariable ["unitsHome",_marker,false];
/*
	_individualCiv addEventHandler ["killed", {
		if(_this select 0 != _this select 1 && !isNull (_this select 3))then{
			[(_this select 0),-1,-0.5] call twc_fnc_editTownInfo;
		};
	}];
*/
	sleep 0.2;
};

/*
if((ceil _opinion) < 1)then{
	_group = createGroup EAST;
	for "_i" from 0 to  (abs _opinion) do{
		_enemy = _group createUnit [(rebelSquad select _i),_pos,[],200,"FORM"];
		_enemy setVariable ["unitsHome",[_location,_pos],false];
	};
	[_group] call CBA_fnc_taskDefend;
};
*/

/*
_num = 0;
_amountToSpawn = 5;
_roadList = _pos nearRoads 200;
while{_num < _amountToSpawn}do{
	_roadPos = _roadList call BIS_fnc_selectRandom;
	_car = civillianCarList call BIS_fnc_selectRandom;
	_newVehicle = _car createVehicle (getPos _roadPos);
	while {isOnRoad _newVehicle} do {
			_xAxis = 3;
			_yAxis = 3;
		
			if ((random 100) > 50) then {
				_xAxis = -3;
			};
		
			if ((random 100) > 50) then {
				_yAxis = -3;
			};
		
			_newVehicle setPosATL [(getPosATL _newVehicle select 0) + _xAxis,
				(getPosATL _newVehicle select 1) + _yAxis, 0];
			_newVehicle setDir (random 360);
		};
		_newVehicle setVariable ["unitsHome",[_location,_name],false];
		_newVehicle addEventHandler ["killed", {
			if(_this select 0 != _this select 1 && !isNull (_this select 1))then{
				[(_this select 0),0,-100] call twc_fnc_editTownInfo
			};
		}];
		_num = _num + 1;
};