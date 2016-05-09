while {true} do {
	{

		if (!(markercolor "radar1" == "colorWEST")) then {
			if (isEngineOn _x) then {
				if ((getpos _x) select 2 > 25) then {
					if (_x distance getmarkerpos "radar1" < 3000)then{
						if (vehicle player == _x) then{
							playSound3D ["A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor.wss", _x];
							if(jetSpawned < 1) then {
								_rand = (random 100);
								if(_rand < 20)then{
									_target = getPos player;
									_spawn = [_target, 3000] call CBA_fnc_randPos;
									[_target, _spawn] execVM "client\radar\radarJet.sqf";
									hint "Hostile Jet Approaching";
									jetSpawned = 1;
								};
							};							
						};
					};
				};
			};
		};
	}foreach vehicles;
sleep 3;
};