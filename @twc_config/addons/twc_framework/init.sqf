[] call compile preprocessfilelinenumbers "twc_framework\tasks\init.sqf";
waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

call compile preprocessFileLineNumbers "twc_framework\functions.sqf";


