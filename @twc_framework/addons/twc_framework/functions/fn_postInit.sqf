if (!hasInterface) exitWith {};

private _action = ["CheckID", "Check Vehicle ID", "", {[_target] call twc_fnc_checkvehicleid}, {true}] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

["TWC_createDiaryRecord", {
	player createDiaryRecord ["Diary", ["Radio Message", (_this select 0)]];
}] call CBA_fnc_addEventHandler;

["TWC_createConvoRecord", {
	player createDiaryRecord ["Diary", ["Conversation", (_this select 0)]];
}] call CBA_fnc_addEventHandler;

/**
	Mission Module prep stuff. All code below this point won't execute, unless the module is placed down.
**/
if (isNil {missionNameSpace getVariable "twcModuleEnabled"}) exitWith {
	systemChat "TWC Mission Module wasn't placed down, or enabled.";
};

// Called by the end of the mission module
["twc_framework_initStart", {
	[(missionNameSpace getVariable ["era", "modern"])] call twc_framework_fnc_setEra;
	[(missionNameSpace getVariable ["rollSleeves", false])] call twc_framework_fnc_toggleRollShirt;
	[(missionNameSpace getVariable ["safeZone", 0])] call twc_framework_fnc_toggleSafeZone;
	[(missionNameSpace getVariable ["zuesObjects", true])] spawn twc_framework_fnc_enableZeusObjects;
	
	// DISABLED. Steam Workshop SHOULD mitigate this issue now.
	/* _worldName = missionNameSpace getVariable ["TWC_worldName", worldName];
	_hasWorld = isClass (configFile >> "CfgWorlds" >> _worldName);
	
	if !(_hasWorld) then {
		for [{_i=0}, {_i<5}, {_i=_i+1}] do {
			systemChat "You are missing the map required for this mission!";
		};
	}; */
	
	["twc_framework_initComplete", []] call CBA_fnc_localEvent;
}] call CBA_fnc_addEventHandler;