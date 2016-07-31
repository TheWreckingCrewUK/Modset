TWCScopeAction = ["thisStartsTheScopeList","Change Scope","", {},{true}] call ace_interact_menu_fnc_createAction;
threeDAction = ["TWC_3D", "3D", "", {
	_scope = primaryWeaponItems player;
	_scope = (_scope select 2);
	if(_scope != "")then{
		player addPrimaryWeaponItem "UK3CB_BAF_SUSAT_3D";
	};
},{true}] call ace_interact_menu_fnc_createAction;
twoDAction = ["TWC_2D", "2D", "", {
	_scope = primaryWeaponItems player;
	_scope = (_scope select 2);
	if(_scope != "")then{
		player addPrimaryWeaponItem "UK3CB_BAF_SUSAT";
	};
},{true}] call ace_interact_menu_fnc_createAction;


[player, 1, ["ACE_SelfActions"], TWCScopeAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheScopeList"], ThreeDAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheScopeList"], twoDAction] call ace_interact_menu_fnc_addActionToObject;
