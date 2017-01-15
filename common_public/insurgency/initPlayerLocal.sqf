if (!hasInterface) exitWith {};

execVM "steam\acreCheck.sqf";
execVM "client\init.sqf";

memberIDArray = [
	"_SP_PLAYER_","76561197970591603","76561197981096983","76561198035369460","76561197981208292","76561198024456870","76561197985821395","76561197988506092","76561197992669373","76561197996044352","76561198001649761","76561198005456546","76561198007975082","76561198010876571","76561198011283748","76561198013509033","76561198014078972","76561198016635135","76561198018609662","76561198018806047","76561198021236275","76561198027413658","76561198037881029","76561198039562456","76561198046761459","76561198049111014","76561198050180681","76561198050512686","76561198051847668","76561198054727971","76561198056177819","76561198056234590","76561198060979584","76561198061797079","76561198062338085","76561198063449316","76561198066275591","76561198067385164","76561198072029517","76561198072105856","76561198077371253","76561198078628958","76561198084557194","76561198095246437","76561198100339755","76561198105044351","76561198148511288","76561198161685880","76561198212968121","76561198269225193","76561198070630639","76561198010598279","76561198061214513","76561198022227167"
];

InsP_playerCiv = str(side player) == "CIV";

// IED defuse action
_ied = "";
_defuseAction = [
    "InsP_defuse_ied",
    "Disarm",
    "",
    {
        params ["_args"];
        _args params ["_ied"];
        [
            5,
            [_ied],
            {
                params ["_args"];
                _args params ["_ied"];
                _trigger = _ied getVariable ["InsP_trigger", objNull];
                deleteVehicle _trigger;
                deleteVehicle _ied;
                InsP_iedDestroyed = InsP_iedDestroyed + 1;
                InsP_civTrust = InsP_civTrust + 0.1;
                publicVariable "InsP_iedDestroyed";
                publicVariable "InsP_civTrust";
				_rand = (random 5);
				if(_rand < 1)then{
					
				[player] remoteExecCall ["TWC_fnc_iedAttack",2];
				};
				_markerstr = createMarker [str random 10000, player];
				_markerstr setMarkerShape "ICON";
				_markerstr setMarkerType "mil_triangle";
				_markerstr setMarkerColor "ColorYellow";
				_markerstr setMarkerText "IED Defused";
				[_markerstr, true] call CBA_fnc_setMarkerPersistent;
				[]
				
            },
            {},
            "Disarming... No sudden moves..."
        ] call ACE_common_fnc_progressBar;
    },
    {true},
    nil,
    [_ied]
] call ACE_interact_menu_fnc_createAction;

["IEDLandBig_F", 0, ["ACE_MainActions"], _defuseAction] call ace_interact_menu_fnc_addActionToClass;
["IEDLandSmall_F", 0, ["ACE_MainActions"], _defuseAction] call ace_interact_menu_fnc_addActionToClass;

if(isMultiplayer)then{
	cutText ["Receiving...", "BLACK", .001];

	titleText ["The Wrecking Crew","PLAIN DOWN"];
	titleFadeOut 7;
	sleep 5;
	titleText ["Insurgency Plus 4","PLAIN DOWN"];
	titleFadeOut 7;
	sleep 5;
	titleText ["Join us at: www.thewreckingcrew.eu","PLAIN DOWN"];
	titleFadeOut 7;
	sleep 5;
	titleText ["TS3: ts.thewreckingcrew.eu","PLAIN DOWN"];
	titleFadeOut 7;
	sleep 5;
};

_specialSlots = ["P501","P502","P503","P504","P505", "P506","P601","P602","P603","P507", "P508", "P901"];

if ((str player) in _specialSlots)then{
	
	_UID = getPlayerUID player;
	if((_UID) != "_SP_PLAYER_" && (_UID) != "76561198070630639")then{	
		_pilots = ["P501", "P502","P503", "P504"];
		_armourCrew = ["P601","P602","P603"];
		_jet = ["P505", "P506"];
		_apache = ["P507", "P508"];
		_numPlayers = switch (str player) do{
			case "P501";
			case "P502";
			case "P503";
			case "P504": {5};
			case "P601";
			case "P602";
			case "P603": {12};
			case "P505";
			case "P506": {15};
			case "P507";
			case "P508": {20};
			default {hint "Please send a message to [TWC] Adam saying the FIRST init.sqf switch statement defaulted and what slot you are in."};
		};
		_justPlayers = count(allPlayers - entities "HeadlessClient_F");
		
		_pilotMultiplier = 0;
		if(isPlayer P501)then{_pilotMultiplier = _pilotMultiplier + 1};
		if(isPlayer P502)then{_pilotMultiplier = _pilotMultiplier + 1};
		if(isPlayer P503)then{_pilotMultiplier = _pilotMultiplier + 1};
		if(isPlayer P504)then{_pilotMultiplier = _pilotMultiplier + 1};
		hint str (_justPlayers * _pilotMultiplier);
		
		if ((str player) in _pilots && (_justPlayers * _pilotMultiplier) < _numPlayers) then {
			["End2", false, 0] call BIS_fnc_endMission;
		};
		
		if ((str player) in _armourCrew && (count playableUnits) < _numPlayers) then{
			["End3", false, 0] call BIS_fnc_endMission;
		};

		if ((str player) in _jet && (count playableUnits) < _numPlayers) then{
			["End4", false, 0] call BIS_fnc_endMission;
		};

		if ((str player) in _apache && (count playableUnits) < _numPlayers) then{
			["End5", false, 0] call BIS_fnc_endMission;
		};

		//lock Quartermaster slot for management NOT WORKING YET
//		if((_UID) != "_SP_PLAYER_" && (_UID) = "76561198005456546" || "76561198103286410" || "76561198070630639" || "76561198050180681")then{	
//		_management = ["qm"];
//		};

//		if ((str player) !in _management) then{
//			["End9", false, 0] call BIS_fnc_endMission;
//		};
	};
};

if(isMultiplayer)then{
	cutText ["", "BLACK IN", 2];

	titleText ["Enjoy your stay at The Wrecking Crew Public Server", "PLAIN"];
	titleFadeOut 4;
};

player enableFatigue false;
player setCustomAimCoef 0.4;
player addEventHandler ["Respawn",{player enableFatigue false; player setCustomAimCoef 0.4;}];