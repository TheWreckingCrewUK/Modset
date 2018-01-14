params [["_unit", objNull]];

_currentState = (_unit getVariable ["ACE_isUnconscious", false]);

if (_currentState) then {
	_unit setVariable ["ACE_isUnconscious", false, true];
	
	if (_unit getVariable ["ace_medical_inReviveState", false]) then {
		_unit setVariable ["ace_medical_inReviveState", false, true];
	};
} else {
	_unit setVariable ["ACE_isUnconscious", true, true];
	
	if (_unit getVariable ["ace_medical_inReviveState", false]) then {
		_unit setVariable ["ace_medical_inReviveState", true, true];
	};
};