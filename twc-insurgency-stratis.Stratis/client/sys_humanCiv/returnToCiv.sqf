if (side player != EAST) exitWith {hint "You are not a player Insurgent"};

cutText ["Returning to Civlian", "BLACK IN", 2];
	
_beforePos = getPosATL player;
_beforeDir = getDir player;
player setPosATL [((getMarkerPos "respawn_civilian" select 0) + (random 10)),((getMarkerPos "respawn_civilian" select 1) + (random 10)),0];
	
_switchScript = ["C_man_1"] spawn CBA_fnc_switchPlayer;
hintSilent "You are now a Civilian.";
	
cutText ["","BLACK IN",0];

player setPosATL _beforePos;
player setDir _beforeDir;
_resGroup = createGroup Civilian;
[player] joinSilent _resGroup;
removeallweapons player;
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};

titleText ["You are now a Civilian Again", "PLAIN"];
titleFadeOut 4;

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