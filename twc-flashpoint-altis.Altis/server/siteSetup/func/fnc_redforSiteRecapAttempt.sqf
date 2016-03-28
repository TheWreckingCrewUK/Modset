_type = ["Mechanized", "Motorized"] call BIS_fnc_selectRandom;

if(capturedArray == [])exitWith{};

if (_type == "Mechanized") then {
[] call twc_redforAttackMechanized;
};
if (_type == "Motorized") then {
[] call twc_redforAttackMotorized;
};
