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

boatRespawn = [west, "boatSpawn"] call BIS_fnc_addRespawnPosition;
publicVariable "boatRespawn";
