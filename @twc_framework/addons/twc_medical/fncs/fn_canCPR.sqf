params [["_target", objNull, [objNull]]];

private _unCon = _target getVariable ["ace_medical_inReviveState", false];

if (_unCon && (alive _target)) exitWith {
	true;
};

false;