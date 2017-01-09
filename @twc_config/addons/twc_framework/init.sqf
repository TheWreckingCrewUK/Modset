
//                           waituntil player                          \\
waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

//Compile Functions
call compile preprocessFileLineNumbers "twc_framework\functions.sqf";

//Enable Debug Markers
if (getPlayerUID player == "_SP_PLAYER_" || name player == "jayman") then {
	execvm "twc_framework\debug\init.sqf";
};