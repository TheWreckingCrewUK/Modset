[] execVM "server\vehicles\sa_ropes.sqf";
[] execVM "server\vehicles\advancedTowing.sqf";

execVM "client\zeus\zeus.sqf";

airfield_is_Captured = 0;
publicVariable "airfield_is_Captured";