//initial defines
_roadPos = 0;
_newVehicle = 0;
_selectVehicle = 0;
_newVehicle = 0;

_spawnMarker = _this select 0;
_spawnRadius = _this select 1;
_amountToSpawn = _this select 2;

_roadList = (getMarkerPos _spawnMarker) nearRoads _spawnRadius;
_vehicle = 0;
_vehicleList = ["CUP_O_LR_MG_TKM"];
_iedTypes = ["IEDLandBig_F", "IEDLandSmall_F"];

while {_vehicle < _amountToSpawn} do {
	_roadPos = _roadList call BIS_fnc_selectRandom;
	_selectVehicle = _vehicleList select (floor(random(count _vehicleList)));
	_newVehicle = _selectVehicle createVehicle (getPos _roadPos);
	
	while {isOnRoad _newVehicle} do {
		_xAxis = 3;
		_yAxis = 3;
		
		if ((random 100) > 50) then {
			_xAxis = -3;
		};
		
		if ((random 100) > 50) then {
			_yAxis = -3;
		};
		
		_newVehicle setPosATL [(getPosATL _newVehicle select 0) + _xAxis,(getPosATL _newVehicle select 1) + _yAxis, 0];
		_newVehicle setDir (random 360);
		
		_ied = "IEDLandBig_F" createVehicle position player;
		_ied attachto [_newVehicle,[0,-2.5,-.7]];
		_position = getPos _ied;
		
		
		_ied addEventHandler ["Killed", {
			params["_unit", "_killer"];
			_iedExplosive = createMine [typeOf _unit, getPos _unit, [], 0];
			_iedExplosive setDamage 1;
			deleteVehicle (_unit getVariable ["InsP_trigger", objNull]);
			deleteVehicle _unit;
		}];
	
		// Create trigger for setting off the explosive
		_trigger = createTrigger ["EmptyDetector", _position, true];
		_trigger setTriggerArea [_triggerRadius, _triggerRadius, 0, false];
		_trigger setTriggerActivation ["WEST", "PRESENT", true];
		_trigger setTriggerStatements [
			"{
				if (abs (speed _x) >= 12 && (getPosATL _x select 2) < 4) exitWith {true};
				false
			} forEach thisList;",
			"(thisTrigger getVariable ['InsP_vbied', objNull]) setDamage 1;",
			""
		];
		// Make trigger and object known to each other
		_trigger setVariable ["InsP_vbied", _ied, true];
		_ied setVariable ["InsP_trigger", _trigger, true];

	};
	
	_vehicle = _vehicle + 1;

};