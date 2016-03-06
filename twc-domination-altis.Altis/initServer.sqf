call compile preprocessfilelinenumbers "SHK_pos\shk_pos_init.sqf";
[] call compile preprocessfilelinenumbers "server\task\shk_taskmaster.sqf";
TaskIncrease = 0;

TWC_fnc_AO = compile preprocessfilelinenumbers "server\func\fnc_AO.sqf";

TaskArray=["Pyrgos","Charkia","Rodopoli","Paros","Frini","Galati","Syrta","Agios Dionysios","Poliakko","Neochori"];
execVM "server\ao\RandomArray.sqf";

execVM "client\playerlist\init.sqf";