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
missionNameSpace setVariable ["run", (_logic getVariable "run")];
missionNameSpace setVariable ["safeZone", (_logic getVariable "safeZone")];
missionNameSpace setVariable ["zuesObjects", (_logic getVariable "zuesObjects")];
missionNameSpace setVariable ["TWC_Intro_isDisabled", (_logic getVariable "disableIntro")];
missionNameSpace setVariable ["TWC_Intro_specialSong", (_logic getVariable ["specialIntro", ""])];

// Server side part below
if !(hasInterface) exitWith {};

missionNameSpace setVariable ["TWC_Intro_Started", false, true];
missionNameSpace setVariable ["TWC_worldName", worldName, true]; // share world name from server, for clients to check against

missionNameSpace setVariable ["twcModuleFinished", true, true];

[{ getClientStateNumber > 9 }, {
	// This measure is used to inform clients whether or not the mission has started.
	// There needs to be a delay, to account for latency etc.
	[{ missionNameSpace setVariable ["TWC_Intro_Started", true, true]; }, [], 30] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_waitUntilAndExecute;

//Runs the server side part of the module.
[(_logic getVariable "boatSafety")] call twc_fnc_boatSafety;
[(_logic getVariable "civilianEquipment")] call twc_fnc_civilianEquipment;
[(_logic getVariable "deadBodies")] call twc_fnc_deadBodies;
[(_logic getVariable "disconectGear")] call twc_fnc_disconnectGear;