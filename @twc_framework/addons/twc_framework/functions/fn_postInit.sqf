if (!hasInterface) exitWith {};

_action = ["CheckID", "Check Vehicle ID", "", {[_target] call twc_fnc_checkvehicleid}, {true}] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

["twc_evh_fnc_setSpectator", {
	[(_this select 0)] call twc_fnc_toggleSpectator;
}] call CBA_fnc_addEventHandler;

["twc_evh_createDiaryRecord", {
	player createDiaryRecord ["Diary", ["Radio Message", (_this select 0)]];
}] call CBA_fnc_addEventHandler;

["twc_evh_createConvoRecord", {
	player createDiaryRecord ["Diary", ["Conversation", (_this select 0)]];
}] call CBA_fnc_addEventHandler;

//suspending not allowed thus spawn
[]spawn{
	if (isNil {missionNameSpace getVariable "twcModuleEnabled"}) exitWith {
		systemChat "TWC Mission Module wasn't placed down, or enabled.";
	};

	
	waitUntil { missionNameSpace getVariable ["twcModuleFinished", false] };

	[(missionNameSpace getVariable ["era", "modern"])] spawn twc_fnc_era;
	[(missionNameSpace getVariable ["rollSleeves", false])] spawn twc_fnc_rollShirt;
	[(missionNameSpace getVariable ["run", 0])] spawn twc_fnc_run;
	[(missionNameSpace getVariable ["safeZone", 0])] spawn twc_fnc_safeZone;
	[(missionNameSpace getVariable ["zuesObjects", true])] spawn twc_fnc_zeus;
	
	/* _worldName = missionNameSpace getVariable ["TWC_worldName", worldName];
	_hasWorld = isClass (configFile >> "CfgWorlds" >> _worldName);
	
	if !(_hasWorld) then {
		for [{_i=0}, {_i<5}, {_i=_i+1}] do {
			systemChat "You are missing the map required for this mission!";
		};
	}; */

	["twc_framework_initComplete", []] call CBA_fnc_localEvent;
};