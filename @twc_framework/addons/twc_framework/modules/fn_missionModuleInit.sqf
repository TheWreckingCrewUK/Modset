params ["_logic","_units","_activated"];

if !(_activated) exitWith {};
if !(isServer)exitWith{};
_enabled = _logic getVariable "enabled";
if !(_enabled) exitWith {};


/*
//[(_logic getVariable "era")] call twc_fnc_era; //Currently returns and does nothing, but the era value is used other places
[(_logic getVariable "boatSafety")] spawn twc_fnc_boatSafety;
[(_logic getVariable "civilianEquipment")] spawn twc_fnc_civilianEquipment;
[(_logic getVariable "deadBodies")] spawn twc_fnc_deadBodies;
[(_logic getVariable "forwardBase")] spawn twc_fnc_forwardBase;
[(_logic getVariable "giveRadio")] spawn twc_fnc_giveRadio;
[(_logic getVariable "nightGear"),(_logic getVariable "era")] spawn twc_fnc_nightGear;
[(_logic getVariable "rollSleeves")] spawn twc_fnc_rollShirt;
[(_logic getVariable "run")] spawn twc_fnc_run;
[(_logic getVariable "safeZone")] spawn twc_fnc_safeZone;
[(_logic getVariable "stats")] call twc_fnc_stats;
[(_logic getVariable "zuesObjects")] spawn twc_fnc_zeus;
