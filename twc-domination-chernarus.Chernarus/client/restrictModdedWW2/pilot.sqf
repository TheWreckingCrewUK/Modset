//Script by Sa-Matra, heavily modified by Tacticles
true spawn {
    //helicopters
    _blackhawkpilot = ["B_Helipilot_F"];
    _blackhawk = ["UK3CB_BAF_Wildcat_AH1_CAS_8A","UK3CB_BAF_Merlin_HC3_32","RHS_UH60M","CUP_B_MV22_USMC_RAMPGUN","RHS_UH1Y_d","rhsusf_CH53E_USMC"];
	_armourCrew = ["B_crew_F"];
	_armour = ["LIB_T34_85","LIB_SU85","LIB_M4A3_75"];
	_jetPilot = ["B_Pilot_F"];
	_jet = ["LIB_P47"];
	_crew = [""];


	//Enemy Vehicles

	_CSAT = ["rhs_t72ba_tv","rhs_bmp1_msv","rhs_btr70_msv","rhs_zsu234_aa","O_Mortar_01_F"];
    _crewblacklist = ["C_man_1"];

    //Wait until player is fully loaded
    waitUntil {player == player};

    //Assigning units to variables used below
    _iamblackhawkpilot = ({typeOf player == _x} count _blackhawkpilot) > 0;
	_iamarmourcrewpilot = ({typeOf player == _x} count _armourcrew) > 0;
	_iamjetpilot = ({typeOf player == _x} count _jetpilot) > 0;
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
			
			//vehicle check for jet
			if(({typeOf _veh == _x} count _jet) > 0 && !_iamjetpilot && !_iamcrew) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden = [driver _veh];
                if(player in _forbidden) then {
                    systemChat "You are not in the jet pilot and not allowed to fly this vehicle";
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