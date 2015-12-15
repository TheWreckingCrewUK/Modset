_object = _this;

_type = typeOf _object;

x_reload_time_factor = 1;

_object lock true;

_object vehicleChat format ["Servicing %1... Please stand by...", _type];

sleep x_reload_time_factor;
_object vehicleChat "Repairing...";
while {(damage _object > 0.001)} do{
        sleep 0.01;
	_object setdamage (damage _object - 0.001);

};

_object vehicleChat "Refueling...";

while {(fuel _object) < 0.99 } do {
        sleep 0.1;
        if (speed _object != 0) then {_object setVelocity [0,0,-0.4]};
        _object setFuel (fuel _object + 0.00425);
		if (isengineOn _object) then {_object engineon False;};
		hint format ["%1", fuel _object];
    };

sleep x_reload_time_factor;

_object lock false;

_object vehicleChat format ["%1 is ready...", _type];

if (true) exitWith {};
