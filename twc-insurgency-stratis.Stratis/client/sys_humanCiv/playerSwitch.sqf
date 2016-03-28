if (floor InsP_enemyMorale > -2 && InsP_ammoCaches < 2) exitWith{
	[] spawn{hint "You are not permitted to be an Insurgent at this time. Morale must be Strong or 2 caches already destroyed."; sleep 8;player call InsP_fnc_spawnSelect; player removeAction carAction
	};
};

cutText ["Receiving...", "BLACK", 0.001];

_beforePos = getPosATL player;
_beforeDir = getDir player;
player setPosATL [((getMarkerPos "respawn_civilian" select 0) + (random 10)),((getMarkerPos "respawn_civilian" select 1) + (random 10)),0];

player removeMPEventHandler ["MPKilled", 0];
_switchScript = ["C_man_1", "LEAVEWEPS"] spawn CBA_fnc_switchPlayer;

waitUntil {scriptDone _switchScript};
_resGroup = createGroup opfor;
[player] joinSilent _resGroup;
[player, 1, ["ACE_SelfActions"], InsP_MissionStatus] call ace_interact_menu_fnc_addActionToObject;

player addItem "ACE_EarPlugs";
removeheadgear player;
player forceAddUniform "CUP_U_I_GUE_Flecktarn2";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addVest "CUP_V_I_Carrier_Belt";
hintSilent "You are now an insurgent.";

InsP_MissionStatus = ["MissionStatus","Mission Status","",{execVM "client\sys_intel\missionStatus.sqf"},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], InsP_MissionStatus] call ace_interact_menu_fnc_addActionToObject;
numTimesInsurgent = 1;
	
player addEventHandler ["Killed", {
	InsP_playersKilledAsCivs = InsP_playersKilledAsCivs + [str player];
	publicVariable "InsP_playersKilledAsCivs";
	["End3", false, 0] call BIS_fnc_endMission
}];

cutText ["","BLACK IN",0];

player setPosATL _beforePos;
player setDir _beforeDir;