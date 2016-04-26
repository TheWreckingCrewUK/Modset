TWC_fnc_GlobalCleanup = {
	_start = diag_tickTime;
	{
		deleteVehicle _x
	} forEach allDead;
	_groundWeapons = nearestObjects [getPos player, ["WeaponHolder","GroundWeaponHolder"], 7000];
	hint format["Global Cleanup took %1 seconds", diag_tickTime - _start];
    
};

ServerAction = ["thisStartsTheServer","Server Actions","", {},{true}] call ace_interact_menu_fnc_createAction;
GlobalCleanupAction = ["GlobalCleanup","Global Cleanup","", {call TWC_fnc_GlobalCleanup;},{true}] call ace_interact_menu_fnc_createAction;


[player, 1, ["ACE_SelfActions"], ServerAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer"], GlobalCleanupAction] call ace_interact_menu_fnc_addActionToObject;