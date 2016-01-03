//Script by Sa-Matra, heavily modified by Tacticles
true spawn {
    //helicopters
    _MI8pilot = ["B_soldier_M_F"];
    _hindpilot = ["B_soldier_LAT_F"];
    _A10pilot = ["rhsusf_airforce_jetpilot"];
    _crew = ["B_helicrew_F"];
    _A10 = ["JS_JC_FA18F"];
    _MI8 = ["RHS_Mi8mt_vvsc"];
    _hind = ["RHS_Mi24V_FAB_vvs"];


	 _armourcrew = ["B_soldier_PG_F"];
	 _abrams = ["rhs_bmp3mera_msv"];

	//Enemy Vehicles

	_t72 = ["rhs_t72bd_tv"];
	_shilka = ["rhs_bmp2_msv"];
	_bmp = ["rhs_zsu234_aa"];
    _crewblacklist = ["C_man_1"];

    //Wait until player is fully loaded
    waitUntil {player == player};

    //Assigning units to variables used below
    _iamMI8pilot = ({typeOf player == _x} count _MI8pilot) > 0;
    _iamWildcatPilot = ({typeOf player == _x} count _hindpilot) > 0;
    _iamA10pilot = ({typeOf player == _x} count _A10pilot) > 0;
    _iamcrew = ({typeOf player == _x} count _crew) > 0;

	_blacklist = ({typeOf player == _x} count _crewblacklist) > 0;

	_armourc = ({typeOf player == _x} count _armourcrew) > 0;
    //While loop
    while{true} do {
        //Wait until player's vehicle changed
        _oldvehicle = vehicle player;
        waitUntil {vehicle player != _oldvehicle};

        //If player is inside vehicle and not on foot
        if(vehicle player != player) then {
            _veh = vehicle player;




            //Vehicle Pilot Check for MI8
            if(({typeOf _veh == _x} count _MI8) > 0 && !_iamMI8pilot && !_iamcrew) then {
                //Forbidden seats: copilot, pilot
                _forbidden = [_veh turretUnit [0]] + [driver _veh];
                if(player in _forbidden) then {
                    systemChat "You are not pilot and not allowed to pilot or gun this helicopter";
                    player action ["getout", _veh];
					player action ["eject", _veh];
                };
            };

            //Vehicle Pilot Check for wildcat
            if(({typeOf _veh == _x} count _hind) > 0 && !_hindpilot && !_iamcrew) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden =  [gunner _veh] + [driver _veh];
                if(player in _forbidden) then {
                    systemChat "You are not pilot and not allowed to pilot or gun this helicopter";
                    player action ["getout", _veh];
					player action ["eject", _veh];
                };
            };

            //Vehicle Pilot Check for A10
            if(({typeOf _veh == _x} count _A10) > 0 && !_iamA10pilot && !_iamcrew) then {
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


         //restrict shilka
            if(({typeOf _veh == _x} count _shilka) > 0 && !_blacklist) then {
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
            if(({typeOf _veh == _x} count _abrams) > 0 && !_armourc) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden = [commander _veh] + [gunner _veh] + [driver _veh];
                if(player in _forbidden) then {
                    systemChat "Join Armour Crew to use this vehicle!";
                    player action ["eject", _veh];
					player action ["getout", _veh];
                };
            };

        };
    };
};