_object = _this;

_type = typeOf _object;

x_reload_time_factor = 1;

_object lock true;

_object setVehicleAmmo 1;

_object vehicleChat format ["Servicing %1... Please stand by...", _type];

_magazines = getArray(configFile >> "CfgVehicles" >> _type >> "magazines");

if (count _magazines > 0) then {
	_removed = [];
	{
		if (!(_x in _removed)) then {
			_object removeMagazines _x;
			_removed = _removed + [_x];
		};
	} forEach _magazines;
	{
		_object vehicleChat format ["Reloading %1", _x];
		sleep x_reload_time_factor;
		_object addMagazine _x;
	} forEach _magazines;
};

_count = count (configFile >> "CfgVehicles" >> _type >> "Turrets");

if (_count > 0) then {
	for "_i" from 0 to (_count - 1) do {
		scopeName "xx_reload2_xx";
		_config = (configFile >> "CfgVehicles" >> _type >> "Turrets") select _i;
		_magazines = getArray(_config >> "magazines");
		_removed = [];
		{
			if (!(_x in _removed)) then {
				_object removeMagazines _x;
				_removed = _removed + [_x];
			};
		} forEach _magazines;
		{
			_object vehicleChat format ["Reloading %1", _x];
			sleep x_reload_time_factor;
			_object addMagazine _x;
			sleep x_reload_time_factor;
		} forEach _magazines;
		_count_other = count (_config >> "Turrets");
		if (_count_other > 0) then {
			for "_i" from 0 to (_count_other - 1) do {
				_config2 = (_config >> "Turrets") select _i;
				_magazines = getArray(_config2 >> "magazines");
				_removed = [];
				{
					if (!(_x in _removed)) then {
						_object removeMagazines _x;
						_removed = _removed + [_x];
					};
				} forEach _magazines;
				{
					_object vehicleChat format ["Reloading %1", _x];
					sleep x_reload_time_factor;
					_object addMagazine _x;
					sleep x_reload_time_factor;
				} forEach _magazines;
			};
		};
	};
};
_object setVehicleAmmo 1;	// Reload turrets / drivers magazine

sleep x_reload_time_factor;
_object vehicleChat "Repairing...";
while {(damage _object > 0.001)} do{
        sleep 0.01;
	_object setdamage (damage _object - 0.001);

};

_object vehicleChat "Refueling...";

while {(fuel _object) < 0.99 } do {
        sleep 0.01;
        if (speed _object != 0) then {_object setVelocity [0,0,-0.4]};
        _object setFuel (fuel _object + 0.00425);
				if (isengineOn _object) then {_object engineon False;};
    };

sleep x_reload_time_factor;

_object lock false;

_object vehicleChat format ["%1 is ready...", _type];

if (true) exitWith {};
