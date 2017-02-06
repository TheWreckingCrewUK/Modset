params ["_logic","_units","_activated"];

if !(_activated) exitWith {};
if !(isServer)exitWith{};

_enabled = _logic getVariable "enabled";
if !(_enabled) exitWith {};

missionNameSpace setVariable ["twcModuleEnabled",true,true];

missionNameSpace setVariable ["era",(_logic getVariable "era"),true];
missionNameSpace setVariable ["boatSafety",(_logic getVariable "boatSafety"),true];
missionNameSpace setVariable ["civilianEquipment",(_logic getVariable "boatSafety"),true];
missionNameSpace setVariable ["deadBodies",(_logic getVariable "boatSafety"),true];
missionNameSpace setVariable ["forwardBase",(_logic getVariable "forwardBase"),true];
missionNameSpace setVariable ["giveRadio",(_logic getVariable "giveRadio"),true];
missionNameSpace setVariable ["nightGear",(_logic getVariable "nightGear"),true];
missionNameSpace setVariable ["rollSleeves",(_logic getVariable "rollSleeves"),true];
missionNameSpace setVariable ["run",(_logic getVariable "run"),true];
missionNameSpace setVariable ["safeZone",(_logic getVariable "safeZone"),true];
missionNameSpace setVariable ["stats",(_logic getVariable "stats"),true];
missionNameSpace setVariable ["zuesObjects",(_logic getVariable "zuesObjects"),true];

