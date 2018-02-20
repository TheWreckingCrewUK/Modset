params [["_target", objNull]];

_unCon = _target getVariable ["ace_medical_inReviveState", false];
_inCardiac = _target getVariable ["ace_medical_inCardiacArrest", false];

if ((_unCon || _inCardiac) && (alive _target)) exitWith {
	true;
};

false;