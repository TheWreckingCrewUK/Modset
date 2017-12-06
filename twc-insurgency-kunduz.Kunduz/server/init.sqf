#include "defines.sqf";
#include "func\init.sqf";
#include "functions\init.sqf";
#include "cleanup\init.sqf";

#include "sys_aa\init.sqf";

if (isNil "InsP_enemyMorale") then {
	InsP_enemyMorale = 0.5;
	publicVariable "InsP_enemyMorale";
};

if(isNil "InsP_civTrust") then{
	InsP_civTrust = -0.5;
	publicVariable "InsP_civTrust";
};

if(isNil "basemode") then{
	basemode = 0;
	publicVariable "basemode";
};

if(isNil "idfon") then{
	idfon = 0;
	publicVariable "idfon";
};

if(isNil "idfsafe") then{
	idfsafe = 1;
	publicVariable "idfsafe";
};

if(isNil "alarm") then{
	alarm = 0;
	publicvariable "alarm";
};

#include "sys_ied\init.sqf";
#include "sys_vehicles\init.sqf";

//#include "sys_smallTown\init.sqf";
#include "sys_townLocations\init.sqf";
#include "sys_cache\init.sqf";
#include "sys_idf\idf.sqf";
//#include "sys_sideMissions\init.sqf";