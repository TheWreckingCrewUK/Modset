TWC_fnc_timePlayed = compile preprocessFile "client\sys_Member\MainPopulate.sqf";


_UID = getPlayerUID player;

_Time = ['TWC_Timeplayed','Time Played','', {[] call TWC_fnc_timePlayed},{_UID in memberIDArray}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _Time] call ace_interact_menu_fnc_addActionToObject;

nul = execVM "client\sys_Member\Timeplayed.sqf";