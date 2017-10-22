params["_unit"];

_unit = player;

_action = ["ConstructionMenu","Construction","",{},{true}] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["BuildCorner","Build Corner","",{[_player,"Land_BagFence_Corner_F",15] call twc_construct_fnc_build},{{"ACE_Sandbag_empty" == _x}count (items _player) >= 15 && "ACE_EntrenchingTool" in (items _player)}] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions","ConstructionMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["BuildEnd","Build End","",{[_player,"Land_BagFence_End_F",7] call twc_construct_fnc_build},{{"ACE_Sandbag_empty" == _x}count (items _player) >= 15 && "ACE_EntrenchingTool" in (items _player)}] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions","ConstructionMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["BuildEnd","Build Long","",{[_player,"Land_BagFence_Long_F",25] call twc_construct_fnc_build},{{"ACE_Sandbag_empty" == _x}count (items _player) >= 15 && "ACE_EntrenchingTool" in (items _player)}] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions","ConstructionMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["BuildEnd","Build Round","",{[_player,"Land_BagFence_Round_F",25] call twc_construct_fnc_build},{{"ACE_Sandbag_empty" == _x}count (items _player) >= 15 && "ACE_EntrenchingTool" in (items _player)}] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions","ConstructionMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["BuildEnd","Build Short","",{[_player,"Land_BagFence_Short_F",15] call twc_construct_fnc_build},{{"ACE_Sandbag_empty" == _x}count (items _player) >= 15 && "ACE_EntrenchingTool" in (items _player)}] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions","ConstructionMenu"], _action] call ace_interact_menu_fnc_addActionToObject;