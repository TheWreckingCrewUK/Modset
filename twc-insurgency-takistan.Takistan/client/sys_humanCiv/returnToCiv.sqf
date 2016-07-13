if (side player != EAST) exitWith {hint "You are not a player Insurgent"};

cutText ["Returning to Civlian", "BLACK IN", 2];
	
_beforePos = getPosATL player;
_beforeDir = getDir player;
player setPosATL [((getMarkerPos "respawn_civilian" select 0) + (random 10)),((getMarkerPos "respawn_civilian" select 1) + (random 10)),0];
	
_switchScript = ["C_man_1"] spawn CBA_fnc_switchPlayer;
hintSilent "You are now a Civilian.";

[]spawn{
titleText ["In 15 minutes you will return to Civillian","BLACK",1];
sleep 900;
titleFadeout 2;
};

player setPosATL _beforePos;
player setDir _beforeDir;
_resGroup = createGroup Civilian;
[player] joinSilent _resGroup;
removeallweapons player;
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};

hint "Because you have already been an insurgent you are not permitted to go insurgent again unless morale becomes strong.";
sleep 20;
hint "If you turn Insurgent before the morale goes strong your game will end and you won't be able to go Civlian.";
InsP_MissionStatus = ["MissionStatus","Mission Status","",{execVM "client\sys_intel\missionStatus.sqf"},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], InsP_MissionStatus] call ace_interact_menu_fnc_addActionToObject;

_selectedCache = [cacheBoxA,cacheBoxB,cacheBoxC] call BIS_fnc_selectRandom;
while {!alive _selectedCache} do{
_selectedCache = [cacheBoxA,cacheBoxB,cacheBoxC] call BIS_fnc_selectRandom;
};

_marker = createMarker ["TurnedMarker", getPos _selectedCache];
_marker setMarkerType "mil_triangle";
_marker setMarkerColor "ColorOrange";
_marker setMarkerText ("Surrendered Insurgent Marker");
_marker setMarkerSize [0.75, 0.75];
[_marker, true] call CBA_fnc_setMarkerPersistent;

player execVM "client\sys_humanCiv\playerSwitch.sqf";