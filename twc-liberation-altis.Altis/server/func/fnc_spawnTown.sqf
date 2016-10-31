params["_location"];

_array = [_location] call twc_fnc_getTownInfo;
_name = _array select 0;
_pop = _array select 1;
_wealth = _array select 2;

_group = createGroup civilian;
[_group,_location,_pop,_name]spawn{
	for "_i" from 1 to (_this select 2) do {
		_individualCiv = (_this select 0) createUnit ["C_man_1", (_this select 1), [], 200, "NONE"];
		_individualCiv setVariable ["unitsHome",(_this select 1),false];
		_individualCiv addEventHandler ["killed", {
			if(_this select 0 != _this select 1 && !isNull (_this select 3))then{
				[(_this select 0),-1,0] call twc_fnc_editTownInfo;
			};
		}];
		_individualCiv disableAI "path";
		sleep 0.25;
	};
};

_num = 0;
_amountToSpawn = 5;
_roadList = _location nearRoads 200;
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
		_newVehicle setVariable ["unitsHome",_name,false];
		_newVehicle addEventHandler ["killed", {
			if(_this select 0 != _this select 1 && !isNull (_this select 1))then{
				[(_this select 0),0,-100] call twc_fnc_editTownInfo
			};
		}];
		_num = _num + 1;
};