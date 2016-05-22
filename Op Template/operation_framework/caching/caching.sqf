if !(isServer) exitwith {};
waituntil {time >  5};
{
	if (side _x == EAST || side _x == resistance || side _x == civilian) then {
		if (_x getVariable ["ToBeCached",true]) then {
			_x enablesimulationGlobal false;
			_x hideObjectGlobal True;
			if (vehicle _x != _x) then {
				_veh = vehicle _x;
				_veh enablesimulationGlobal false;
				_veh hideObjectGlobal True;
			};
			_x setVariable ["isCached", true, true];
		};
	};
}foreach allunits;
[] spawn  {
	while {true} do {
		twc_players = (switchableUnits + playableUnits);
		sleep 0.5
	};
};
[] spawn  {
	While {true} do {
		{
			if (_x getVariable ["ToBeCached",true] ) then {
				if (side _x == EAST || side _x == resistance || side _x == civilian) then{
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
								_x setVariable ["isCached", false, true];
							};
							if ({_x distance _leader < 2500} count twc_players == 0) then {
								if !(_x getvariable ["isCached",false]) then {
									_x enablesimulationGlobal false;
									_x hideObjectGlobal true;
									if (vehicle _x != _x) then {
										_veh = vehicle _x;
										_veh enablesimulationGlobal false;
										_veh hideObjectGlobal true;
									};
									_x setVariable ["isCached", true, true];
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
								_x setVariable ["isCached", false, true];
							};
							if ({_x distance _leader < 3000} count twc_players == 0) then {
								if !(_x getvariable ["isCached",false]) then {
									_x enablesimulationGlobal false;
									_x hideObjectGlobal true;
									if (vehicle _x != _x) then {
										_veh = vehicle _x;
										_veh enablesimulationGlobal True;
										_veh hideObjectGlobal false;
									};
									_x setVariable ["isCached", true, true];
								};
							};
						};
					};
				};
			};
		}foreach allunits;
		sleep 5;
	};
};

