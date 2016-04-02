_HelicopterTypeArray = ["CUP_B_AW159_Cannon_GB","CUP_B_UH60M_US","CUP_B_UH60M_US"];

while {true} do {
	{
		if (!(markercolor "Radar1" == "colorWEST")) then {
			if (isEngineOn _x) then {
				if ((getpos _x) select 2 > 20) then {
					if ((TypeOf _x) in _HelicopterTypeArray) then{
						if (_x distance getmarkerpos "radar1" < 3000)then{
							if (vehicle player == _x) then{
								playSound3D ["A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor.wss", _x];
							};
						};
					};
				};
			};
		};
	}foreach vehicles;
	sleep 1.5;
};