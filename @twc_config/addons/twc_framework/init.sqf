
//                           Setting up tasks                         \\
[] call compile preprocessfilelinenumbers "twc_framework\tasks\init.sqf";


//                           waituntil player                          \\
waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

call compile preprocessFileLineNumbers "twc_framework\functions.sqf";

if (getPlayerUID player == "_SP_PLAYER_" || name player == "FakeMatty" || name player == "Jayman" || name player == "Patty Evans") then {
execvm "twc_framework\debug\init.sqf";
};