//Script by Sa-Matra, heavily modified by Tacticles
true spawn {
    //helicopters
    _blackhawkpilot = ["B_Helipilot_F"];
    _blackhawk = ["CUP_B_UH60M_US","CUP_B_CH53E_USMC", "CUP_B_MV22_USMC_RAMPGUN"];
	_wildcatpilot = ["B_Helicrew_F"];
    _wildcat = ["CUP_B_AW159_Cannon_GB","CUP_B_Merlin_HC3A_Armed_GB","CUP_B_CH47F_GB"];
	_planepilot = ["B_Pilot_F"];
    _plane = ["CUP_B_AV8B_MK82_USMC"];
	_armourCrew = ["B_crew_F"];
	_armour = ["CUP_B_M2Bradley_USA_W","rhsusf_m1a2sep1tuskiiwd_usarmy", "CUP_B_M1128_MGS_Woodland_Slat"];
	_crew = [""];


	//Enemy Vehicles

	_CSAT = ["O_MBT_02_cannon_F","O_APC_Tracked_02_cannon_F","O_APC_Wheeled_02_rcws_F","O_APC_Tracked_02_AA_F","O_Mortar_01_F"];
    _crewblacklist = ["C_man_1"];

    //Wait until player is fully loaded
    waitUntil {player == player};

    //Assigning units to variables used below
    _iamblackhawkpilot = ({typeOf player == _x} count _blackhawkpilot) > 0;
	_iamwildcatpilot = ({typeOf player == _x} count _wildcatpilot) > 0;
	_iamplanepilot = ({typeOf player == _x} count _planepilot) > 0;
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
			
			//Vehicle Pilot Check for wildcat
            if(({typeOf _veh == _x} count _wildcat) > 0 && !_iamwildcatpilot && !_iamcrew) then {
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
			
			//Vehicle Pilot Check for plane
            if(({typeOf _veh == _x} count _plane) > 0 && !_iamplanepilot && !_iamcrew) then {
                //Forbidden seats: copilot, gunner, pilot
                _forbidden =  [gunner _veh] + [driver _veh] + [commander _veh];
                if(player in _forbidden) then {
                    systemChat "You are not pilot and not allowed to pilot plane";
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