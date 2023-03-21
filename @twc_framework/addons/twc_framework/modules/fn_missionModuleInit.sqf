params ["_logic","_units","_activated"];

if !(_activated) exitWith {};

_enabled = _logic getVariable "enabled";
if !(_enabled) exitWith {};

// Module is loaded locally, thanks to the transferred mission 
missionNameSpace setVariable ["twcModuleEnabled", true];

missionNameSpace setVariable ["era", (_logic getVariable "era")];
missionNameSpace setVariable ["forwardBase", (_logic getVariable "forwardBase")];
missionNameSpace setVariable ["TWC_NightGear", (_logic getVariable "nightGear")];
missionNameSpace setVariable ["rollSleeves", (_logic getVariable "rollSleeves")];
missionNameSpace setVariable ["safeZone", (_logic getVariable "safeZone")];
missionNameSpace setVariable ["zuesObjects", (_logic getVariable "zuesObjects")];
missionNameSpace setVariable ["TWC_Intro_isDisabled", (_logic getVariable "disableIntro")];
missionNameSpace setVariable ["TWC_Intro_specialSong", (_logic getVariable ["specialIntro", ""])];

[(_logic getVariable "boatSafety")] call twc_fnc_boatSafety;

//Needs to run on both
[(_logic getVariable "disconectGear")] call twc_fnc_disconnectGear;

// Run on headless clients & server
if (!hasInterface) then {
	[(_logic getVariable "civilianEquipment")] call twc_fnc_civilianEquipment;
	[(_logic getVariable "deadBodies")] call twc_fnc_deadBodies;
};

// Run on server only
if (isServer) then {
	missionNameSpace setVariable ["TWC_Intro_Started", false, true];
	// Steam Workshop integration has made this unnecessary
	//missionNameSpace setVariable ["TWC_worldName", worldName, true]; // share world name from server, for clients to check against

	[{ getClientStateNumber > 9 }, {
		// This is used to inform clients whether or not the mission has started in proper.
		// There needs to be a delay, to account for different client loading speeds etc.
		[{ missionNameSpace setVariable ["TWC_Intro_Started", true, true]; }, [], 30] call CBA_fnc_waitAndExecute;
	}] call CBA_fnc_waitUntilAndExecute;
};

// Variables should be sync'd for custom stuff, so start local init stuff!
// Should always be the last event called (and for all!)
["twc_framework_initStart", []] call CBA_fnc_localEvent;