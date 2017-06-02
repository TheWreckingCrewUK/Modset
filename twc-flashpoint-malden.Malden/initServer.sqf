_script = execVM "SHK_pos\shk_pos_init.sqf";
waitUntil {scriptDone _script};

#include "server\init.sqf";