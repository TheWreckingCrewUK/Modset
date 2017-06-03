params [["_target", objNull, [objNull]]];

private _maxTime = missionNamespace getVariable ["ace_medical_maxReviveTime",900];
private _startTime = _target getVariable ["ace_medical_reviveStartTime",0];
private _unCon = _target getVariable ["ace_medical_inReviveState",false];

//return:
if (_unCon && (_startTime+_maxTime) > CBA_missionTime) exitWith {
	true;
};
false;