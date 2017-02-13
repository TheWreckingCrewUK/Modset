_script = execVM "SHK_pos\shk_pos_init.sqf";
waitUntil {scriptDone _script};
#include "server\init.sqf";
easyGearPickup = true;

missionNameSpace setVariable ["playerBase_Marksman", true, true];
missionNameSpace setVariable ["playerBase_Roadblock", true,true];
missionNameSpace setVariable ["playerBase_Garage", true,true];