DebugM = ["DebugMenu","Debug","",{},{getPlayerUID == "_SP_PLAYER_" || name player == "FakeMatty" || name player == "Jayman" }] call ace_interact_menu_fnc_createAction;
[player, 0, ["ACE_MainActions"], DebugM] call ace_interact_menu_fnc_addActionToClass;

Markers = ["DebugMarkers","Debug Markers","",{DebugMarkers = True},{getPlayerUID == "_SP_PLAYER_" || name player == "FakeMatty" || name player == "Jayman"}] call ace_interact_menu_fnc_createAction;
[player, 0, ["ACE_MainActions","DebugMenu"], Markers] call ace_interact_menu_fnc_addActionToClass;

execVM "twc_framework\debug\DebugMarkers.sqf";