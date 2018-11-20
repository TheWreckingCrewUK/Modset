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

if (!_isBandagedWound) then {
	_bandagedWounds deleteAt (_bandagedWounds find _bandagedWoundData);
	_target setVariable ["ACE_Medical_bandagedWounds", _bandagedWounds, true];
};

[_caller] call twc_medical_fnc_removeSutureThread;

[_target, "activity", localize "STR_TWC_SUTURE_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_TWC_SUTURE_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

true