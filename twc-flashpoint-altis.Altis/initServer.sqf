_script = execVM "SHK_pos\shk_pos_init.sqf";
waitUntil {scriptDone _script};

counterAttackCounter = 0;
publicVariable "counterAttackCounter";
patrolCounter = 0;
publicVariable "patrolCounter";
#include "server\init.sqf";
twc_enemySupply = -3;
publicVariable "twc_enemySupply";
timePlayedArray = [];
publicVariable "timePlayedArray";
commanderBaseCount = 0;
publicVariable "commanderBaseCount";
enemyCommander = 0;
publicVariable "enemyCommander";

patrolCounter = 0;
publicVariable "patrolCounter";
counterAttackCounter = 0;
publicVariable "counterAttackCounter";



[West,["aa1"],["","Anti Air Site",""],objNull,True,1,False,"",False] call BIS_fnc_taskCreate;
[West,["airbase2"],["","AirBase Site",""],objNull,True,1,False,"",False] call BIS_fnc_taskCreate;
[West,["hq1"],["","HQ Site",""],objNull,True,1,False,"",False] call BIS_fnc_taskCreate;
[West,["inf1"],["","Molos",""],objNull,False,1,True,"",False] call BIS_fnc_taskCreate;
[West,["inf2"],["","Iraklia",""],objNull,False,1,True,"",False] call BIS_fnc_taskCreate;
[West,["inf3"],["","Forest Site",""],objNull,False,1,True,"",False] call BIS_fnc_taskCreate;
[West,["inf4"],["","Sofia",""],objNull,True,1,False,"",False] call BIS_fnc_taskCreate;
[West,["installation1"],["","Installation Site",""],objNull,True,1,False,"",False] call BIS_fnc_taskCreate;
[West,["mainHQ"],["","Main HQ",""],objNull,True,1,False,"",False] call BIS_fnc_taskCreate;
[West,["mech1"],["","Mechanized Site",""],objNull,True,1,False,"",False] call BIS_fnc_taskCreate;
[West,["motorized1"],["","Motorized Site",""],objNull,True,1,False,"",False] call BIS_fnc_taskCreate;
[West,["outpost1"],["","Outpost Site",""],objNull,True,1,False,"",False] call BIS_fnc_taskCreate;
[West,["outpost2"],["","Outpost Site",""],objNull,True,1,False,"",False] call BIS_fnc_taskCreate;
[West,["radar1"],["","Radar Site",""],objNull,True,1,False,"",False] call BIS_fnc_taskCreate;
[West,["radar2"],["","Radar Site",""],objNull,True,1,False,"",False] call BIS_fnc_taskCreate;
[West,["support1"],["","Mortar Site",""],objNull,True,1,False,"",False] call BIS_fnc_taskCreate;
