#include "client\init.sqf";

if (((player isEqualTo "helo1") || (player isEqualTo "helo2") || (player isEqualTo "helo3") || (player isEqualTo "apache1") || (player isEqualTo "apache2") || (player isEqualTo "jet1")) && !(airfield_is_Captured == 1))then
{
	["End2", false, 0] call BIS_fnc_endMission;	
};