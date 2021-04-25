params ["_logic","_units","_activated"];

if !(_activated) exitWith {};
if !(isServer) exitWith {};

_enabled = _logic getVariable "enabled";
if !(_enabled) exitWith {};

//Sets variables for connecting players to run the functions
missionNameSpace setVariable ["twcModuleEnabled", true, true];

missionNameSpace setVariable ["era", (_logic getVariable "era"), true];
missionNameSpace setVariable ["forwardBase", (_logic getVariable "forwardBase"), true];
missionNameSpace setVariable ["TWC_NightGear", (_logic getVariable "nightGear"), true];
missionNameSpace setVariable ["rollSleeves", (_logic getVariable "rollSleeves"), true];
missionNameSpace setVariable ["run", (_logic getVariable "run"), true];
missionNameSpace setVariable ["safeZone", (_logic getVariable "safeZone"), true];
missionNameSpace setVariable ["zuesObjects", (_logic getVariable "zuesObjects"), true];
missionNameSpace setVariable ["TWC_Intro_isDisabled", (_logic getVariable "disableIntro"), true];
missionNameSpace setVariable ["TWC_Intro_specialSong", (_logic getVariable ["specialIntro", ""]), true];
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