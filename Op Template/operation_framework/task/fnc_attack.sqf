
params["_unit","_task","_marker","_distance"];


_action = ["addtogroup", "Follow me", "", {oo = _this}, {true}] call ace_interact_menu_fnc_createAction;
[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToClass;



_action = ["vip_cyanide", "Take Cyanide Capsule", "", {oo = _this}, {true}] call ace_interact_menu_fnc_createAction;
[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToClass;