_script = execVM "SHK_pos\shk_pos_init.sqf";
waitUntil{scriptDone _script};

"iedRestrictionZone" setMarkerAlpha 0;

nonQuestionableList = [];
publicVariable "nonQuestionableList";

#include "server\init.sqf";