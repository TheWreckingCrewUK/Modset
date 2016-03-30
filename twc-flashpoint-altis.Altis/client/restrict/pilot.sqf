//Script by Sa-Matra, heavily modified by Tacticles
true spawn {
	//helos
    _blackhawkpilot = ["B_helicrew_F"];
    _wildcatPilot = ["B_helipilot_F"];
	
    _blackhawk = ["CUP_B_UH60M_US"];
    _wildcat = ["CUP_B_AW159_Cannon_GB"];
	_crew = []; //Unused
	
	//Enemy Vehicles
	_t72 = ["CUP_O_T72_SLA"];
	_bmp = ["CUP_O_BRDM2_SLA"];
    _crewblacklist = ["C_man_1"];

    //Wait until player is fully loaded
    waitUntil {player == player};

    //Assigning units to variables used below
    _iamBlackHawkpilot = ({typeOf player == _x} count _blackhawkpilot) > 0;
    _iamWildcatPilot = ({typeOf player == _x} count _wildcatPilot) > 0;
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
             if(({typeOf _veh == _x} count _blackhawk) > 0 && !_iamBlackHawkpilot && !_iamcrew) then {
                //Forbidden seats: copilot, pilot
                _forbidden = [_veh turretUnit [0]] + [driver _veh];
                if(player in _forbidden) then {
                    systemChat "You are not pilot and not allowed to pilot or gun this helicopter";
                    player action ["getout", _veh];
					player action ["eject", _veh];
                };
            };

            //Vehicle Pilot Check for wildcat
            if(({typeOf _veh == _x} count _wildcat) > 0 && !_iamWildcatPilot && !_iamcrew) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden = [_veh turretUnit [0]] + [gunner _veh] + [driver _veh];
                if(player in _forbidden) then {
                    systemChat "You are not pilot and not allowed to pilot or gun this helicopter";
                    player action ["getout", _veh];
					player action ["eject", _veh];
                };
            };

            //restrict Russian vehicles


		   //restrict T72
            if(({typeOf _veh == _x} count _t72) > 0 && !_blacklist) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden = [commander _veh] + [gunner _veh] + [driver _veh];
                if(player in _forbidden) then {
                    systemChat "This is a Russian vehicle!";
                    player action ["eject", _veh];
					player action ["getout", _veh];
                };
            };


             //restrict BMP
            if(({typeOf _veh == _x} count _bmp) > 0 && !_blacklist) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden = [commander _veh] + [gunner _veh] + [driver _veh];
                if(player in _forbidden) then {
                    systemChat "This is a Russian vehicle!";
                    player action ["eject", _veh];
					player action ["getout", _veh];
                };
            };

        };
    };
};