params ["_logic","_units","_activated"];

if !(_activated) exitWith {};

_enabled = _logic getVariable "enabled";

if !(_enabled) exitWith {};

[(_logic getVariable "boatSafety")] spawn twc_fnc_boatSafety;
[(_logic getVariable "civilianEquipment")] spawn twc_fnc_civilianEquipment;
[(_logic getVariable "deadBodies")] spawn twc_fnc_deadBodies;
[(_logic getVariable "giveRadio")] spawn twc_fnc_giveRadio;
[(_logic getVariable "run")] spawn twc_fnc_run;
[(_logic getVariable "safeZone")] call twc_fnc_safeZone;
[(_logic getVariable "zuesObjects")] spawn twc_fnc_zeus;
