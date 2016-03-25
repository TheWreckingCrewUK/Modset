execVM "SHK_pos\shk_pos_init.sqf";

[] execVM "client\slingLoading\sa_ropes.sqf";

if(isServer) then{
	#include "server\init.sqf";
};

execVM "client\zeus\zeus.sqf";
execVM "client\zeus\zeus-Fakematty.sqf";
execVM "client\zeus\zeus-jayman.sqf";