params ["_unit"];

// If the unit died the loop is finished
if (!alive _unit) exitWith {};
if (!local _unit) exitWith {};

[_unit] call ace_medical_vitals_fnc_handleUnitVitals;

private _timeDiff = CBA_missionTime - (_unit getVariable ["ace_medical_statemachine_cardiacArrestTimeLastUpdate", 0]);

if (_timeDiff >= 1) then {
	_timeDiff = _timeDiff min 10;
	_unit setVariable ["ace_medical_statemachine_cardiacArrestTimeLastUpdate", CBA_missionTime];
	
	private _receivingCPR = alive (_unit getVariable ["ace_medical_CPR_provider", objNull]);
	private _timeLeft = _unit getVariable ["ace_medical_statemachine_cardiacArrestTimeLeft", -1];
	
	// offset the conditional - greater than this might result in weird behaviour, not sure how often statemachine executes
	// this is the edit that makes those under CPR effectively not die
	if (_receivingCPR) then { _timeDiff = -1; };
	
	_timeLeft = _timeLeft - _timeDiff; // negative values are fine
	_unit setVariable ["ace_medical_statemachine_cardiacArrestTimeLeft", _timeLeft];
};

