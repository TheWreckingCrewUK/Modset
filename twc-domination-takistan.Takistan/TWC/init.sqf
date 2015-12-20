
//TWC init file
execVM "TWC\restrict\init.sqf";
[] call compile preprocessfilelinenumbers "TWC\shk_taskmaster.sqf";
execVM "TWC\Members\MainPopulate.sqf";
execVM "TWC\cleanup\deadbodies.sqf";

