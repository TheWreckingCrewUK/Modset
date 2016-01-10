
waitUntil {!isNull player};
waitUntil {player == player};
execvM "client\sys_blufor\Armourcrew.sqf";
#include "init\setDefines.sqf";

InsP_fnc_questionDisplay = compile preProcessFileLineNumbers "client\sys_intel\fnc_questionDisplay.sqf";
InsP_fnc_possibleIntel = compile preProcessFileLineNumbers "client\sys_intel\fnc_possibleIntel.sqf";
InsP_fnc_aidDisplay = compile preProcessFileLineNumbers "client\sys_aid\fnc_giveaiddisplay.sqf";
InsP_fnc_cangiveaid = compile preProcessFileLineNumbers "client\sys_aid\fnc_checkgiveaid.sqf";
InsP_fnc_spawnSelect = compile preprocessFileLineNumbers "client\sys_humanCiv\fnc_spawnSelect.sqf";

if (InsP_playerCiv) then {
	execVM "client\sys_humanCiv\init.sqf";
}else{
	player addMPEventHandler ["MPRespawn", {InsP_bluDeath = InsP_bluDeath + 1; publicVariable "InsP_bluDeath"}];
	execVM "client\sys_blufor\bluWeaponRestrict.sqf";
};

InsP_MissionStatus = ["MissionStatus","Mission Status","",{execVM "client\sys_intel\missionStatus.sqf"},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], InsP_MissionStatus] call ace_interact_menu_fnc_addActionToObject;
