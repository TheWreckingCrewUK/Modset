//Action to create a forward Base



ForwardBase = ["twcActions","Forward Base","", {},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], ForwardBase] call ace_interact_menu_fnc_addActionToObject;

CreateBase = ["ForwardBaseAction","Create Forward Base","", {[10, [], {[] spawn twc_fnc_createForwardBase;}, {}, "Creating Forward Base..."] call ace_common_fnc_progressBar;},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "twcActions"], CreateBase] call ace_interact_menu_fnc_addActionToObject;