execVM "Zues.sqf";
execVM "Zues-Fakematty.sqf";
execVM "Zues-Harry.sqf";
execVM "Zues-jayman.sqf";
execVM "SHK_pos\shk_pos_init.sqf";

if(!hasInterface && !isDedicated) then {
   execVM "hc\init.sqf";
};

if(isDedicated || isServer) then{
   execVM "hc\init.sqf";
};

waitUntil {!isNull player};
waitUntil {player == player};

memberIDArray = ["_SP_PLAYER_","76561197970591603","76561197981096983","76561197981208292","76561197985821395","76561197988506092","76561197992669373","76561197996044352","76561198001649761","76561198005456546","76561198007975082","76561198010876571","76561198011283748","76561198013509033","76561198014078972","76561198016635135","76561198018609662","76561198018806047","76561198021236275",",76561198027413658","76561198037881029","76561198039562456","76561198046761459","76561198050180681","76561198050512686","76561198051847668","76561198054727971","76561198056177819","76561198056234590","76561198060979584","76561198061797079","76561198062338085","76561198063449316","76561198066275591","76561198067385164","76561198072029517","76561198072105856","76561198077371253","76561198078628958","76561198084557194","76561198095246437","76561198100339755","76561198105044351","76561198148511288","76561198070630639","76561198010598279","76561198061214513"];

execVM "lib\Cleanup.sqf";
execVM "lib\bodyremove.sqf";
execVM "tao\restrict\pilot.sqf";

russiancheck = 0;

if (isNil "nonQuestionableList") then {
	nonQuestionableList = [];
	publicVariable "nonQuestionableList";
};

_civilians = ["humanciv1", "humanciv2", "humanciv3"];
/*
if ((str player) in _civilians && ((count playableUnits) <= 10 || !((getPlayerUID player) in memberIDArray))) then {
    ["end4", false, 0] call BIS_fnc_endMission;
};
*/
if ((str player) in _civilians && ((count playableUnits) >= 10 && ((getPlayerUID player) in memberIDArray))) then {
    execVM "client\sys_humanciv\init.sqf";
};

QuestionPersonAction = ["QuestionPerson","Question Person","",{call InsP_fnc_questionDisplay},{alive (_this select 0)}] call ace_interact_menu_fnc_createAction;
["LOP_TAK_CIV_Man_01", 0, ["ACE_MainActions"], QuestionPersonAction] call ace_interact_menu_fnc_addActionToClass;

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
                InsP_enemyMorale = InsP_enemyMorale + 0.1;
                publicVariable "InsP_iedDestroyed";
                publicVariable "InsP_enemyMorale";
				hint "Ied Diffused";
            },
            {},
            "Disarming..."
        ] call ACE_common_fnc_progressBar;
    },
    {true},
    nil,
    [_ied]
] call ACE_interact_menu_fnc_createAction;

["IEDLandBig_F", 0, ["ACE_MainActions"], _defuseAction] call ace_interact_menu_fnc_addActionToClass;
["IEDLandSmall_F", 0, ["ACE_MainActions"], _defuseAction] call ace_interact_menu_fnc_addActionToClass;


cutText ["Receiving...", "BLACK", .001];

titleText ["The Wrecking Crew","PLAIN DOWN"];
titleFadeOut 7;
sleep 5;

titleText ["Insurgency Plus","PLAIN DOWN"];
titleFadeOut 7;
sleep 5;


_pilots = ["p31", "p32"];
_apachepilots = ["p33", "p34"];

if ((str player) in _pilots && (count playableUnits) < 5) then {
    ["end4", false, 0] call BIS_fnc_endMission;
};

if ((str player) in _apachepilots && (count playableUnits) <= 13) then {
    ["end7", false, 0] call BIS_fnc_endMission;
};


cutText ["", "BLACK IN", 2];

titleText ["Enjoy your stay", "PLAIN"];
titleFadeOut 4;
