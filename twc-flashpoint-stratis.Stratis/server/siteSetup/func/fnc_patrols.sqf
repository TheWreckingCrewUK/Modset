/*
*
*
*/

_type = ["Infantry", "Motorized"] call BIS_fnc_selectRandom;

if (_type == "Infantry") then {
	[] call twc_redforInfantryPatrol;
};
if (_type == "Motorized") then {
	[] call twc_redforMotorizedPatrol;
};
patrolCounter = 0;
publicVariable "patrolCounter";