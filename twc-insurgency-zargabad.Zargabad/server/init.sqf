#include "defines.sqf";
#include "func\init.sqf";
#include "functions\init.sqf";
#include "cleanup\init.sqf";

#include "sys_aa\init.sqf";

if (isNil "InsP_enemyMorale") then {
	InsP_enemyMorale = 0;
	publicVariable "InsP_enemyMorale";
};

if(isNil "InsP_civTrust") then{
	InsP_civTrust = 0;
	publicVariable "InsP_civTrust";
};

#include "sys_ied\init.sqf";
#include "sys_vehicles\init.sqf";

#include "sys_smallTown\init.sqf";
#include "sys_townLocations\init.sqf";
#include "sys_cache\init.sqf";
//#include "sys_sideMissions\init.sqf";