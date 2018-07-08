params ["_args", "_elapsedTime", "_totalTime"];
_args params ["_caller", "_target"];

private _bandagedWounds = _target getVariable ["ace_medical_bandagedWounds", []];

//In case two people stitch up one patient and the last wound has already been closed we can stop already
if (count _bandagedWounds == 0) exitWith { false };

// check if the treater has at least one suture thread
if ({_x isKindOf "TWC_Item_Medical_SutureKit_1"} count (items _caller) < 1) exitWith { false };

//Has enough time elapsed that we can close another wound?
if ((_totalTime - _elapsedTime) <= (((count _bandagedWounds) - 1) * 20)) then {
	_bandagedWounds deleteAt 0;
	_target setVariable ["ace_medical_bandagedWounds", _bandagedWounds, true];
	[_caller] call twc_medical_fnc_removeSutureThread;
};

true