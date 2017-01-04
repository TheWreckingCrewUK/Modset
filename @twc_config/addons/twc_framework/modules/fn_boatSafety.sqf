params ["_enabled"];

if !(_enabled) exitWith {};

While {true} do {
	{
		if (typeof _x == "B_G_Boat_Transport_01_F") then {
			_x addEventHandler ["GetOut", {_player = _this select 2; _player allowDamage False;
			_twc = [_player] spawn {
			sleep 3;
			_this select 0 allowDamage True;
			}
			}];
		};
	}foreach Vehicles;
	sleep 120;
};
