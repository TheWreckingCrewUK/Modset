
//                           waituntil player                          \\
waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

call compile preprocessFileLineNumbers "twc_framework\functions.sqf";

if (getPlayerUID player == "_SP_PLAYER_" || name player == "jayman") then {
execvm "twc_framework\debug\init.sqf";
};