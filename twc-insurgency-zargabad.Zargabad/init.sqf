/*
* Start of HeadlessClient Addition
* If you are not a server it waits until a player is a player
* The has a check if the Headless Client is present or not.
* If the Headless Client is present and doesn't have an interface or is the the server it does Everything in server folder
* If the Headless Client is present isn't dedicated, but is a server it runs the server folder. This is for the editor
* Else if the Headless Client isn't connected it gives a warning and then runs the server folder off of the dedicated server.
*/
if(!isServer) then {waitUntil {!isNull player}};

HCPresent = if(isNil "HC") then{False} else {True};
if(HCPresent) then{
	if(!hasInterface && !isServer) then{
		#include "server\init.sqf"
	};
	if(!isDedicated && isServer) then{
		#include "server\init.sqf"
	};
} else{
	if(isDedicated) then{
		systemChat "HeadlessClient Not Connected!";
		#include "server\init.sqf"
	};
};
execVM "Zues.sqf";
execVM "Zues-Fakematty.sqf";
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

memberIDArray = ["_SP_PLAYER_","76561198078628958", "76561198010598279", "76561198061214513", "76561198051847668","76561198050512686", "76561198050180681", "76561198039562456", "76561198018609662","76561198013509033", "76561198010876571", "76561198007975082", "76561198001649761", "76561197985821395", "76561197981096983", "76561197970591603", "76561198100339755", "76561198084557194","76561198077371253", "76561198076461963", "76561198072105856", "76561198067385164", "76561198062338085", "76561198061797079","76561198054727971","76561198070630639","76561198018806047","76561197981208292", "76561197996044352"];

//execVM "tao\restrict\RadioChannels.sqf";
execVM "lib\cleanup.sqf";
execVM "lib\bodyremove.sqf";
//execVM "tao\restrict\base.sqf";
execVM "tao\restrict\pilot.sqf";
//execVM "tao\restrict\Radio.sqf";
execVM "SHK_pos\shk_pos_init.sqf";

russiancheck = 0;

if(isServer) then
{
	_serverID = str(round((random(100000)) + random 10000));
	profileNameSpace setVariable ["TWC_ServerID",_serverID];
	TWCserverID = profileNameSpace getVariable "TWC_ServerID";
	publicVariable "TWCserverID";
};

if (isDedicated) then {
	[["patrol1", "patrol2", "patrol3", "patrol4", "patrol5", "patrol6"]] call InsP_fnc_patrolGroup;
};

waitUntil {!isNull player};
waitUntil {player == player};

/*
null = execVM "client\sys_Member\Timeplayed.sqf";

if ((getplayerUID player) in memberIDArray) then {

_Time = ['TWC_Timeplayed','Time Played','', {[] call TWC_fnc_timePlayed},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _Time] call ace_interact_menu_fnc_addActionToObject;
};
*/

if (InsP_playerCiv) then {
	execVM "client\sys_humanCiv\Markers.sqf";
	call InsP_fnc_spawnSelect;
};

if (isNil "nonQuestionableList") then {
	nonQuestionableList = [];
	publicVariable "nonQuestionableList";
};

if (isNil "nonGiveableList") then {
	nonGiveableList = [];
	publicVariable "nonGiveableList";
};

QuestionPersonAction = ["QuestionPerson","Question Person","",{call InsP_fnc_questionDisplay},{alive (_this select 0)}] call ace_interact_menu_fnc_createAction;
["LOP_TAK_CIV_Man_01", 0, ["ACE_MainActions"], QuestionPersonAction] call ace_interact_menu_fnc_addActionToClass;


// IED defuse action
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


_pilots = ["p21", "p22"];
_apachepilots = ["p23", "p24"];
_humanCivs = ["humanCiv1", "humanCiv2", "humanCiv3"];

if ((str player) in _pilots && (count playableUnits) < 5) then {
    ["end4", false, 0] call BIS_fnc_endMission;
};

if ((str player) in _apachepilots && ((count playableUnits) <= 13 || !((getPlayerUID player) in memberIDArray))) then {
    ["end7", false, 0] call BIS_fnc_endMission;
};

if ((str player) in _humanCivs && ((count playableUnits) <= 15 || !((getPlayerUID player) in memberIDArray || (getPlayerUID player) in DeadInsurgents))) then {
    ["end6", false, 0] call BIS_fnc_endMission;
};

cutText ["", "BLACK IN", 2];

titleText ["Enjoy your stay", "PLAIN"];
titleFadeOut 4;

//execVM "client\sys_ambient\ambientCiv.sqf";
