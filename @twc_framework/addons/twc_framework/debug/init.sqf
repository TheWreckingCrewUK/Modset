DebugM = ["DebugMenu","Debug","", {},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], DebugM] call ace_interact_menu_fnc_addActionToObject;

airAction = ["DebugM","Debug Markers","", {if (DebugMarkers) then {DebugMarkers = false}else{DebugMarkers = true}},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "DebugMenu"], airAction] call ace_interact_menu_fnc_addActionToObject;

execVM "twc_framework\debug\DebugMarkers.sqf";