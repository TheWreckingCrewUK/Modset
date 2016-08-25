#include "defines.sqf";
#include "cba\init.sqf";
#include "cleanup\init.sqf";
#include "vehicles\init.sqf";
#include "ao\init.sqf";

if(useArsenal == 1)then{
	execVM "server\arsenal\arsenal.sqf";
};