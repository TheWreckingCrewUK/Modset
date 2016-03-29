waitUntil{bluforDeath > 20};

bluforDeath = 0;
publicVariable "bluforDeath";

_type = ["Mechanized", "Motorized"] call BIS_fnc_selectRandom;

if((str capturedArray) == "[]")exitWith{};

if (_type == "Mechanized") then {
[] call twc_redforAttackMechanized;
};
if (_type == "Motorized") then {
[] call twc_redforAttackMotorized;
};

[] call twc_redforSiteRecapAttempt;
