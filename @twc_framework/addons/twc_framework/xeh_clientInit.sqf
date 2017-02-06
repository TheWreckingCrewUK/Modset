//Calls all the functions on player start.
if(!hasInterface)exitWith{};

if (isNil {missionNameSpace getVariable "twcModuleEnabled"})exitWith {};

[(missionNameSpace getVariable "era")] call twc_fnc_era;
[(missionNameSpace getVariable "boatSafety")] spawn twc_fnc_boatSafety;
[(missionNameSpace getVariable "civilianEquipment")] spawn twc_fnc_civilianEquipment;
[(missionNameSpace getVariable "deadBodies")] spawn twc_fnc_deadBodies;
[(missionNameSpace getVariable "forwardBase")] spawn twc_fnc_forwardBase;
[(missionNameSpace getVariable "giveRadio")] spawn twc_fnc_giveRadio;
[(missionNameSpace getVariable "nightGear"),(missionNameSpace getVariable "era")] spawn twc_fnc_nightGear;
[(missionNameSpace getVariable "rollSleeves")] spawn twc_fnc_rollShirt;
[(missionNameSpace getVariable "run")] spawn twc_fnc_run;
[(missionNameSpace getVariable "safeZone")] spawn twc_fnc_safeZone;
[(missionNameSpace getVariable "stats")] call twc_fnc_stats;
[(missionNameSpace getVariable "zuesObjects")] spawn twc_fnc_zeus;