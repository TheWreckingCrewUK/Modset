params["_unit"];

_unit = player;

_action = ["ConstructionMenu","Construction","",{},{true}] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["BuildCorner","Build Corner","",{[_player,"Land_BagFence_Corner_F",15] call twc_fnc_build},{{"ACE_Item_Sandbag_empty" == _x}count (items _player) >= 15 && "ACE_EntrenchingTool" in (items player)}] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions","ConstructionMenu"], _action] call ace_interact_menu_fnc_addActionToObject;