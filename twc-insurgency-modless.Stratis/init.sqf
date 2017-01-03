//Everything here is here because [TWC] jayman doesn't know if the server or player needs it. So I do both.
[] execVM "server\sys_vehicles\sa_ropes.sqf";
[] execVM "server\sys_vehicles\advancedTowing.sqf";

execVM "client\zeus\zeus.sqf";
execVM "client\zeus\zeus-jayman.sqf";