if((str capturedArray) == "[]")exitWith{};

_type = ["Mechanized", "Motorized","Airborne"] call BIS_fnc_selectRandom;

if (_type == "Mechanized") then {
	[] call twc_redforAttackMechanized;
};
if (_type == "Motorized") then {
	[] call twc_redforAttackMotorized;
};
if (_type == "Motorized") then {
	[] call twc_redforAttackAirborne;
};