//Calls all the functions on player start.
if(!hasInterface)exitWith{};

if (isNil {missionNameSpace getVariable "twcModuleEnabled"})exitWith {};


waitUntil{missionNameSpace getVariable "twcModuleFinished"};

[(missionNameSpace getVariable "era")] call twc_fnc_era;
[(missionNameSpace getVariable "forwardBase")] spawn twc_fnc_forwardBase;
[(missionNameSpace getVariable "giveRadio")] spawn twc_fnc_giveRadio;
[(missionNameSpace getVariable "nightGear"),(missionNameSpace getVariable "era")] spawn twc_fnc_nightGear;
[(missionNameSpace getVariable "rollSleeves")] spawn twc_fnc_rollShirt;
[(missionNameSpace getVariable "run")] spawn twc_fnc_run;
[(missionNameSpace getVariable "safeZone")] spawn twc_fnc_safeZone;
[(missionNameSpace getVariable "zuesObjects")] spawn twc_fnc_zeus;