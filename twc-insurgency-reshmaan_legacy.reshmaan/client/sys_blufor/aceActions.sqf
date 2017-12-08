InsP_fnc_questionDisplay = compile preProcessFileLineNumbers "client\sys_intel\fnc_questionDisplay.sqf";
InsP_fnc_possibleIntel = compile preProcessFileLineNumbers "client\sys_intel\fnc_possibleIntel.sqf";

InsP_MissionStatus = ["MissionStatus","Mission Status","",{execVM "client\sys_intel\missionStatus.sqf"},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], InsP_MissionStatus] call ace_interact_menu_fnc_addActionToObject;

QuestionPersonAction = ["QuestionPerson","Question Person","",{[_this select 0] call InsP_fnc_questionDisplay},{alive (_this select 0)}] call ace_interact_menu_fnc_createAction;
["C_man_1", 0, ["ACE_MainActions"], QuestionPersonAction] call ace_interact_menu_fnc_addActionToClass;