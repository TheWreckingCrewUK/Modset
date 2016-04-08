/*
*
*
*/


waitUntil{bluforDeath2 > 5};

bluforDeath2 = 0;
publicVariable "bluforDeath2";

_type = ["Infantry", "Motorized"] call BIS_fnc_selectRandom;

if (_type == "Infantry") then {
	[] call twc_redforInfantryPatrol;
};
if (_type == "Motorized") then {
	[] call twc_redforMotorizedPatrol;
};
[] call twc_patrols;