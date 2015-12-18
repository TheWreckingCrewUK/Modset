call compile preprocessfilelinenumbers "shk_pos\shk_pos_init.sqf";

//AO Setup and SideMission

TaskArray=["Pygros","Charkia","Rodopoli","Paros","Frini","Galati","Syrta","Agios Dionysios","Poliakko","Neochori"];
execVM "ao\RandomArray.sqf";

SideMissionsMarkerArray = ["SideMission1","SideMission2","SideMission3"];
execVM "ao\RandomSideMission.sqf";

//calling init files
execVM "TWC\init.sqf";

// russian check set
russiancheck = 0;
TaskIncrease = 0;
SideMissonIncrease = 0;
DebugCheck = False;

//hc and playerlist start
if(isDedicated || isServer) then{
   execVM "hc\init.sqf";
   HeadlessClientCheck = false;
};

if(!hasInterface && !isDedicated) then {
   execVM "hc\init.sqf";
   HeadlessClientCheck = True;
};

if(isServer) then
{
	TWCserverID = profileNameSpace getVariable "TWC_ServerID";
	publicVariable "TWCserverID";
};

execVM "Zues.sqf";
execVM "zues-Fakematty.sqf";
execVM "zues-Harry.sqf";
execVM "zues-jayman.sqf";

waitUntil {!isNull player};
waitUntil {player == player};

execVM "TWC\Members\Timeplayed.sqf";

if ((getplayerUID player)in memberIDArray) then {
	_Time = ['TWC_Timeplayed','Time Played','', {[] call TWC_fnc_timePlayed},{true}] call ace_interact_menu_fnc_createAction;
	player, 1, ["ACE_SelfActions"], _Time] call ace_interact_menu_fnc_addActionToObject;
};

waituntil {!(g_name =="")};

_name = name player;
TWCServer globalchat format["%1 joined in as %2",_name,g_name];

/*
memberIDArray = ["_SP_PLAYER_","76561198078628958", "76561198010598279", "76561198061214513", "76561198051847668","76561198050512686", "76561198050180681", "76561198039562456", "76561198018609662","76561198013509033", "76561198010876571", "76561198007975082", "76561198001649761", "76561197985821395", "76561197981096983", "76561197970591603", "76561198100339755", "76561198084557194","76561198077371253", "76561198076461963", "76561198072105856", "76561198067385164", "76561198062338085", "76561198061797079","76561198054727971","76561198070630639","76561198018806047","76561197981208292", "76561197996044352"];
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
