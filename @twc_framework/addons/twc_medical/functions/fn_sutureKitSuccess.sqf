params ["_caller", "_target", "_selectionName", "_className", "_items", "", ["_specificSpot", -1]];

// reset sound boolean
_caller setVariable ["TWC_Played_Suture", false, true];

// check if the treater has at least one suture thread
if (({_x isKindOf ["TWC_Item_Medical_SutureKit_1", configFile >> "CfgWeapons"]} count (items _caller)) < 1) exitWith { false };

_returnData = [_target, _selectionName] call twc_medical_fnc_selectSutureWound;
_isBandagedWound = _returnData select 0;
_woundData = _returnData select 1;

_openWounds = _target getVariable ['ACE_Medical_openWounds', []];
_bandagedWounds = _target getVariable ['ACE_Medical_bandagedWounds', []];
if ((count _woundData) < 1) exitWith { false };

_openWoundData = +_woundData;
_bandagedWoundData = +_woundData;

if (!_isBandagedWound) then { _openWoundData set [3, 0]; };

_openWounds deleteAt (_openWounds find _openWoundData);
_target setVariable ["ACE_Medical_openWounds", _openWounds, true];

_bandagedWounds deleteAt (_bandagedWounds find _bandagedWoundData);
_target setVariable ["ACE_Medical_bandagedWounds", _bandagedWounds, true];

/*

if (!_isBandagedWound) then {
	_bandagedWounds deleteAt (_bandagedWounds find _bandagedWoundData);
	_target setVariable ["ACE_Medical_bandagedWounds", _bandagedWounds, true];
};

*/

// Tally of unbandaged wounds to each body part.
private _headWounds = 0;
private _bodyWounds = 0;
private _leftArmWounds = 0;
private _leftLegWounds = 0;
private _rightArmWounds = 0;
private _rightLegWounds = 0;

// Loop through all current wounds and add up the number of unbandaged wounds on each body part.
{
	_x params ["", "", "_bodyPart", "_numOpenWounds", "_bloodLoss"];

	// Use switch/case for early termination if wounded limb is found before all six are checked.
	// Number of wounds multiplied by blood loss will return zero for a fully
	// bandaged body part, not incrementing the wound counter; or it will return
	// some other number which will increment the wound counter.
	switch (_bodyPart) do {
		// Head
		case 0: {
			_headWounds = _headWounds + (_numOpenWounds * _bloodLoss);
		};

		// Body
		case 1: {
			_bodyWounds = _bodyWounds + (_numOpenWounds * _bloodLoss);
		};

		// Left Arm
		case 2: {
			_leftArmWounds = _leftArmWounds + (_numOpenWounds * _bloodLoss);
		};

		// Right Arm
		case 3: {
			_rightArmWounds = _rightArmWounds + (_numOpenWounds * _bloodLoss);
		};

		// Left Leg
		case 4: {
			_leftLegWounds = _leftLegWounds + (_numOpenWounds * _bloodLoss);
		};

		// Right Leg
		case 5: {
			_rightLegWounds = _rightLegWounds + (_numOpenWounds * _bloodLoss);
		};
	};
} forEach _openWounds + _bandagedWounds;

// ["head", "body", "hand_l", "hand_r", "leg_l", "leg_r"]
private _bodyStatus = _target getVariable ["ace_medical_bodyPartDamage", [0,0,0,0,0,0]];

// Any body part that has no wounds is healed to full health
if (_headWounds == 0) then {
	_bodyStatus set [0, 0];
};

if (_bodyWounds == 0) then {
	_bodyStatus set [1, 0];
};

if (_leftArmWounds == 0) then {
	_bodyStatus set [2, 0];
};

if (_rightArmWounds == 0) then {
	_bodyStatus set [3, 0];
};

if (_leftLegWounds == 0) then {
	_bodyStatus set [4, 0];
};

if (_rightLegWounds == 0) then {
	_bodyStatus set [5, 0];
};

_target setVariable ["ace_medical_bodyPartDamage", _bodyStatus, true];



[_caller, "TWC_Item_Medical_SutureKit_1"] call twc_medical_fnc_removeMedicalItem;
[_target, "activity", localize "STR_TWC_SUTURE_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_TWC_SUTURE_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

true