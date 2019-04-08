/*
 * Resuscitate Unit. Used in CPR & Defib. Central location for the calculation.
 * Log is done by the calling scope. Additional effects done by them, too.
 * DO THIS FUNCTION LOCALLY!
 */
params ["_unit", ["_heartRateArray", [30, 35, 40]], ["_addBlood", false], ["_wakeUpUnit", false]];

_unit setVariable ["ace_medical_inReviveState", false, true];
_unit setVariable ["ace_medical_inCardiacArrest", false, true];

_unit setVariable ["ace_medical_heartRate", (round(random _heartRateArray)), true];

// Q  = 19.04761
// bV = 60
// HR = 40

// (60/19.04761) + (40/80-1)
// 3.1500 [...] + -0.5
// 2.65

// (2.65 * 0.229)
// bPH = 0.60685 (*100)
// (2.65 * 0.1524)
// bPL = 0.40386 (*100)

if (_addBlood) then {
	if ((_unit getVariable ["ace_medical_bloodVolume", 0]) < 60) then {
		_unit setVariable ["ace_medical_bloodVolume", 60, true];

		_bloodPressureH = (0.60685 * _resistance);
		_bloodPressureL = (0.40386 * _resistance);
		_unit setVariable ["ace_medical_bloodPressure", [_bloodPressureL, _bloodPressureH], true];
	};
};

if (_wakeUpUnit) then {
	_unit setVariable ["ACE_isUnconscious", false, true];
};

_forceSync = (CBA_missionTime - 60);
_unit setVariable ["ACE_medical_lastMomentValuesSynced", _forceSync, true];