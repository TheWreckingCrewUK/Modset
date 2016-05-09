if !(isServer) exitwith {};
{
	if (side _x == EAST) then {
		_x enablesimulationGlobal false;
		_x hideObjectGlobal True;
		if (vehicle _x != _x) then {
			_veh = vehicle _x;
			_veh enablesimulationGlobal false;
			_veh hideObjectGlobal True;
		};
	};
}foreach allunits;
[] spawn  {
	while {true} do {
		twc_players = (switchableUnits + playableUnits);
	};
};
[] spawn  {
	While {true} do {
		{
			if (side _x == EAST) then{
				if (alive _x) then {
				_leader = leader _x;
					if (!((vehicle _x) iskindof "Air")) then {
						if ({_x distance _leader < 2500} count twc_players > 0) then {
							_x enablesimulationGlobal True;
							_x hideObjectGlobal false;
							if (vehicle _x != _x) then {
								_veh = vehicle _x;
								_veh enablesimulationGlobal True;
								_veh hideObjectGlobal false;
							};
						};
					};
					if ((vehicle _x) iskindof "Air") then {
						if ({_x distance _leader < 3000} count twc_players > 0) then {
							_x enablesimulationGlobal True;
							_x hideObjectGlobal false;
							if (vehicle _x != _x) then {
								_veh = vehicle _x;
								_veh enablesimulationGlobal True;
								_veh hideObjectGlobal false;
							};
						};
					};
				};
			};
		}foreach allunits;
		sleep 5;
	};
};

