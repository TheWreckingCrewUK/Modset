waitUntil {!isNull player};
waitUntil {player == player};

InsP_fnc_questionDisplay = compile preProcessFileLineNumbers "client\sys_intel\fnc_questionDisplay.sqf";
InsP_fnc_questionInsurgent = compile preProcessFileLineNumbers "client\sys_intel\fnc_questionInsurgent.sqf";
InsP_fnc_possibleIntel = compile preProcessFileLineNumbers "client\sys_intel\fnc_possibleIntel.sqf";
InsP_fnc_possibleIntelInsurgent = compile preProcessFileLineNumbers "client\sys_intel\fnc_possibleIntelInsurgent.sqf";
InsP_fnc_spawnSelect = compile preprocessFileLineNumbers "client\sys_humanCiv\fnc_spawnSelect.sqf";

InsP_fnc_questionHostage = compile preProcessFileLineNumbers "client\sys_intel\fnc_questionHostage.sqf";
InsP_fnc_possibleIntelHostage = compile preProcessFileLineNumbers "client\sys_intel\fnc_possibleIntelHostage.sqf";

if (InsP_playerCiv) then {
	execVM "client\sys_humanCiv\init.sqf";
}else{

	player addEventHandler ["Killed",{
		if (side (_this select 1) == WEST) then{
			InsP_enemyMorale = InsP_enemyMorale - .5; publicVariable "InsP_enemyMorale";
		}else{
			InsP_enemyMorale = InsP_enemyMorale - .1; publicVariable "InsP_enemyMorale";
			InsP_civTrust = InsP_civTrust + .1; publicVariable "InsP_enemyMorale";
		};
	}];
	execVM "client\sys_blufor\bluWeaponRestrict.sqf";
};

InsP_MissionStatus = ["MissionStatus","Mission Status","",{execVM "client\sys_intel\missionStatus.sqf"},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], InsP_MissionStatus] call ace_interact_menu_fnc_addActionToObject;


execVM "client\restrict\vehicles.sqf";
execVM "client\restrict\base.sqf";
execVM "client\cleanup\gear.sqf";



//Actions to make AI questionable

QuestionPersonAction = ["QuestionPerson","Question Person","",{call InsP_fnc_questionDisplay},{alive (_this select 0)}] call ace_interact_menu_fnc_createAction;
["C_man_1", 0, ["ACE_MainActions"], QuestionPersonAction] call ace_interact_menu_fnc_addActionToClass;

QuestionInsurgentAction2 = ["QuestionPerson","Interrogate Insurgent","",{call InsP_fnc_questionInsurgent; (_this select 0) disableAI "MOVE"},{alive (_this select 0) && ((player distance InterrogationFlag) < 20)}] call ace_interact_menu_fnc_createAction;
["CUP_I_GUE_Commander", 0, ["ACE_MainActions"], QuestionInsurgentAction2] call ace_interact_menu_fnc_addActionToClass;

QuestionInsurgentAction3 = ["QuestionPerson","Interrogate Insurgent","",{call InsP_fnc_questionInsurgent; (_this select 0) disableAI "MOVE"},{alive (_this select 0) && ((player distance InterrogationFlag) < 20)}] call ace_interact_menu_fnc_createAction;
["CUP_I_GUE_Soldier_GL", 0, ["ACE_MainActions"], QuestionInsurgentAction3] call ace_interact_menu_fnc_addActionToClass;

QuestionInsurgentAction4 = ["QuestionPerson","Interrogate Insurgent","",{call InsP_fnc_questionInsurgent; (_this select 0) disableAI "MOVE"},{alive (_this select 0) && ((player distance InterrogationFlag) < 20)}] call ace_interact_menu_fnc_createAction;
["CUP_I_GUE_Soldier_AKM", 0, ["ACE_MainActions"], QuestionInsurgentAction4] call ace_interact_menu_fnc_addActionToClass;

QuestionInsurgentAction5 = ["QuestionPerson","Interrogate Insurgent","",{call InsP_fnc_questionInsurgent; (_this select 0) disableAI "MOVE"},{alive (_this select 0) && ((player distance InterrogationFlag) < 20)}] call ace_interact_menu_fnc_createAction;
["CUP_I_GUE_Soldier_AR", 0, ["ACE_MainActions"], QuestionInsurgentAction5] call ace_interact_menu_fnc_addActionToClass;

QuestionInsurgentAction6 = ["QuestionPerson","Interrogate Insurgent","",{call InsP_fnc_questionInsurgent; (_this select 0) disableAI "MOVE"},{alive (_this select 0) && ((player distance InterrogationFlag) < 20)}] call ace_interact_menu_fnc_createAction;
["CUP_I_GUE_Soldier_AKSU", 0, ["ACE_MainActions"], QuestionInsurgentAction6] call ace_interact_menu_fnc_addActionToClass;

QuestionInsurgentAction7 = ["QuestionPerson","Interrogate Insurgent","",{call InsP_fnc_questionInsurgent; (_this select 0) disableAI "MOVE"},{alive (_this select 0) && ((player distance InterrogationFlag) < 20)}] call ace_interact_menu_fnc_createAction;
["CUP_I_GUE_Soldier_AT", 0, ["ACE_MainActions"], QuestionInsurgentAction7] call ace_interact_menu_fnc_addActionToClass;

QuestionInsurgentAction7 = ["QuestionPerson","Interrogate Insurgent","",{call InsP_fnc_questionInsurgent; (_this select 0) disableAI "MOVE"},{alive (_this select 0) && ((player distance InterrogationFlag) < 20)}] call ace_interact_menu_fnc_createAction;
["CUP_I_GUE_Soldier_AKS74", 0, ["ACE_MainActions"], QuestionInsurgentAction7] call ace_interact_menu_fnc_addActionToClass;