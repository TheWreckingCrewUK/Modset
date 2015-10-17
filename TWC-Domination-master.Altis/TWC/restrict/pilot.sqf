//Script by Sa-Matra, heavily modified by Tacticles
true spawn {
    //helicopters
    _blackhawkpilot = ["rhsusf_army_ucp_crewman"];
    _Merlinpilot = ["BAF_Pilot_Infantry_R_M_DG1"];
    _A10pilot = ["B_Pilot_F"];
    _crew = ["B_helicrew_F"];
    _A10 = ["RHS_A10"];
    _blackhawk = ["RHS_UH60M"];
    _Merlin = ["BAF_AW159_Wildcat_Armed_DG1"];


	 _armourcrew = ["rhsusf_army_ocp_rifleman_1stcav"];
	 _abrams = ["RHS_M2A3_BUSKIII_wd"];

	//Enemy Vehicles

	_t72 = ["rhs_t72bd_tv"];
	_shilka = ["rhs_bmp2_msv"];
	_bmp = ["rhs_zsu234_aa"];
    _crewblacklist = ["C_man_1"];

    //Wait until player is fully loaded
    waitUntil {player == player};

    //Assigning units to variables used below
    _iamBlackHawkpilot = ({typeOf player == _x} count _blackhawkpilot) > 0;
    _iamWildcatPilot = ({typeOf player == _x} count _Merlinpilot) > 0;
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




            //Vehicle Pilot Check for blackhawk
            if(({typeOf _veh == _x} count _blackhawk) > 0 && !_iamBlackHawkpilot && !_iamcrew) then {
                //Forbidden seats: copilot, pilot
                _forbidden = [_veh turretUnit [0]] + [driver _veh];
                if(player in _forbidden) then {
                    systemChat "You are not pilot and not allowed to pilot or gun this helicopter";
                    player action ["getout", _veh];
                };
            };

            //Vehicle Pilot Check for wildcat
            if(({typeOf _veh == _x} count _Merlin) > 0 && !_iamWildcatPilot && !_iamcrew) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden = [_veh turretUnit [0]] + [gunner _veh] + [driver _veh];
                if(player in _forbidden) then {
                    systemChat "You are not pilot and not allowed to pilot or gun this helicopter";
                    player action ["getout", _veh];
                };
            };

            //Vehicle Pilot Check for wildcat
            if(({typeOf _veh == _x} count _A10) > 0 && !_iamA10pilot && !_iamcrew) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden = [_veh turretUnit [0]] + [gunner _veh] + [driver _veh];
                if(player in _forbidden) then {
                    systemChat "You are not pilot and not allowed to pilot or gun this helicopter";
                    player action ["getout", _veh];
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
                };
            };


         //restrict shilka
            if(({typeOf _veh == _x} count _shilka) > 0 && !_blacklist) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden = [commander _veh] + [gunner _veh] + [driver _veh];
                if(player in _forbidden) then {
                    systemChat "This is a Russian vehicle!";
                    player action ["eject", _veh];
                };
            };

             //restrict BMP
            if(({typeOf _veh == _x} count _bmp) > 0 && !_blacklist) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden = [commander _veh] + [gunner _veh] + [driver _veh];
                if(player in _forbidden) then {
                    systemChat "This is a Russian vehicle!";
                    player action ["eject", _veh];
                };
            };
            if(({typeOf _veh == _x} count _abrams) > 0 && !_armourc) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden = [commander _veh] + [gunner _veh] + [driver _veh];
                if(player in _forbidden) then {
                    systemChat "Join Armour Crew to use this vehicle!";
                    player action ["eject", _veh];
                };
            };

        };
    };
};