params ["_caller", "_target"];

_unCon = _target getVariable ["ace_medical_inReviveState", false];

if (_unCon) then {
	_maxTime = missionNamespace getVariable ["ace_medical_maxReviveTime", 180];
	_reviveStartTime = _target getVariable ["ace_medical_reviveStartTime", 0];


	if (_reviveStartTime > 0) then {
		_bloodVolume = [_caller, _target] call twc_medical_fnc_getBloodVolume;
		_numOfNearPeople = count ((allUnits select {_x distance _target < 2}) - [_caller, _target]);

		if (_numOfNearPeople > 0) then {
			_timeToAdd = (_reviveStartTime + 15) + ((30 * _bloodVolume) / _numOfNearPeople);
		} else {
			_timeToAdd = (_reviveStartTime + 15) + (30 * _bloodVolume);
		};

		if ((_reviveStartTime + _maxTime) > CBA_missionTime) then {
			_timeToAdd = (_reviveStartTime + 5); // severly reduce effectiveness when stacked over 3 minutes of life
		};

		_target setVariable ["ace_medical_reviveStartTime", _timeToAdd min CBA_missionTime, true];
	};
};

_target getVariable "ace_medical_reviveStartTime";