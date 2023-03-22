params ["_medic", "_patient", "_bodyPart", "_bandage"];

if ((_bandage == "BasicBandage") isEqualTo (ace_medical_advancedBandages != 0)) exitWith {false};

// removed checking if open wound for conditional
true