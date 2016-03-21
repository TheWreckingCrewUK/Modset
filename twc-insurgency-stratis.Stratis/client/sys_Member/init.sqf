TWC_fnc_timePlayed = compile preprocessFile "client\sys_Member\MainPopulate.sqf";


playerTimeaction = ["TWCMember","Play Time","", {},{true}] call ace_interact_menu_fnc_createAction;
TimeAction = ["TWC","Play Time","", {call TWC_fnc_timePlayed;},{true}] call ace_interact_menu_fnc_createAction;


[player, 1, ["ACE_SelfActions"], playerTimeAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "TWCMember"], TimeAction] call ace_interact_menu_fnc_addActionToObject;

nul = execVM "client\sys_Member\Timeplayed.sqf";