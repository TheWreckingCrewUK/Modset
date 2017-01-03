//Mission Status:
InsP_fnc_MissionStatus = compile preProcessFileLineNumbers "client\sys_intel\MissionStatus.sqf";

InsP_fnc_questionDisplay = compile preProcessFileLineNumbers "client\sys_intel\fnc_questionDisplay.sqf";
InsP_fnc_possibleIntel = compile preProcessFileLineNumbers "client\sys_intel\fnc_possibleIntel.sqf";

/*
InsP_MissionStatus = ["MissionStatus","Mission Status","",{call InsP_fnc_MissionStatus},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], InsP_MissionStatus] call ace_interact_menu_fnc_addActionToObject;

//Questioning Civs
InsP_fnc_questionDisplay = compile preProcessFileLineNumbers "client\sys_intel\fnc_questionDisplay.sqf";
InsP_fnc_possibleIntel = compile preProcessFileLineNumbers "client\sys_intel\fnc_possibleIntel.sqf";
InsP_fnc_Evidence = compile preProcessFileLineNumbers "client\sys_intel\fnc_evidence.sqf";

QuestionPersonAction = ["QuestionPerson","Question Person","",{[_this select 0] call InsP_fnc_questionDisplay},{alive (_this select 0)}] call ace_interact_menu_fnc_createAction;
["C_man_1", 0, ["ACE_MainActions"], QuestionPersonAction] call ace_interact_menu_fnc_addActionToClass;

EvidenceAction = ["CollectEvidence","Collect Evidence","",{[5, [_this select 0], {[_this select 0] spawn InsP_fnc_Evidence;}, {}, "Examining Evidence..."] call ace_common_fnc_progressBar;},{alive (_this select 0)}] call ace_interact_menu_fnc_createAction;
["cwa_Tablemap_Desert", 0, ["ACE_MainActions"], EvidenceAction] call ace_interact_menu_fnc_addActionToClass;