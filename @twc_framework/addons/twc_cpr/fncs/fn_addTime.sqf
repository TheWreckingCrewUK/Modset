params ["_caller", "_target"];

private _unCon = _target getVariable ["ace_medical_inReviveState", false];

if (_unCon) then {
	private _reviveStartTime = _target getVariable ["ace_medical_reviveStartTime", 0];
	if (_reviveStartTime > 0) then {
		private _timeToAdd = _reviveStartTime + 15 + (random 20);
		_target setVariable ["ace_medical_reviveStartTime", _timeToAdd min CBA_missionTime];
	};
};

_target getVariable "ace_medical_reviveStartTime";