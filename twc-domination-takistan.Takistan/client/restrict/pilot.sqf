//Script by Sa-Matra, heavily modified by Tacticles
true spawn {
    //helicopters
    _blackhawkpilot = ["B_Helipilot_F"];
    _blackhawk = ["B_Heli_Transport_01_F","B_Heli_Transport_03_F"];
	_armourCrew = ["B_crew_F"];
	_armour = ["B_MBT_01_TUSK_F","B_APC_Wheeled_01_cannon_F"];
	_crew = [""];


	//Enemy Vehicles

	_CSAT = ["O_MBT_02_cannon_F","O_APC_Tracked_02_cannon_F","O_APC_Wheeled_02_rcws_F","O_APC_Tracked_02_AA_F","O_Mortar_01_F"];
    _crewblacklist = ["C_man_1"];

    //Wait until player is fully loaded
    waitUntil {player == player};

    //Assigning units to variables used below
    _iamblackhawkpilot = ({typeOf player == _x} count _blackhawkpilot) > 0;
	_iamarmourcrewpilot = ({typeOf player == _x} count _armourcrew) > 0;
    _iamcrew = ({typeOf player == _x} count _crew) > 0;

	_blacklist = ({typeOf player == _x} count _crewblacklist) > 0;
    //While loop
    while{true} do {
        //Wait until player's vehicle changed
        _oldvehicle = vehicle player;
        waitUntil {vehicle player != _oldvehicle};

        //If player is inside vehicle and not on foot
        if(vehicle player != player) then {
            _veh = vehicle player;



            //Vehicle Pilot Check for blackhawk
            if(({typeOf _veh == _x} count _blackhawk) > 0 && !_iamblackhawkpilot && !_iamcrew) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden =  [gunner _veh] + [driver _veh] + [commander _veh];
                if(player in _forbidden) then {
                    systemChat "You are not pilot and not allowed to pilot or gun this helicopter";
                    player action ["getout", _veh];
					player action ["eject", _veh];
                };
				if (driver _veh isEqualTo objNull) then{
					systemChat "A pilot needs to be in the helicopter before you may enter";
					player action ["getout", _veh];
					player action ["eject", _veh];
				};
            };
			
			//vehicle check for armour Crew
			if(({typeOf _veh == _x} count _armour) > 0 && !_iamarmourcrewpilot && !_iamcrew) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden =  [gunner _veh] + [driver _veh] + [commander _veh];
                if(player in _forbidden) then {
                    systemChat "You are not in the armour crew and not allowed to drive, gun, or command this vehicle";
                    player action ["getout", _veh];
					player action ["eject", _veh];
                };
				if (driver _veh isEqualTo objNull) then{
					systemChat "A driver needs to be in the vehicle before you may enter";
					player action ["getout", _veh];
					player action ["eject", _veh];
				};
            };



           //restrict Russian vehicles


		   //restrict Shilka
            if(({typeOf _veh == _x} count _CSAT) > 0 && !_blacklist) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden = [crew _veh];
                if(player in _forbidden) then {
                    systemChat "This is a CSAT vehicle! You are not able to drive, command, or gun it";
                    player action ["eject", _veh];
					player action ["getout", _veh];
                };
            };

        };
    };
};