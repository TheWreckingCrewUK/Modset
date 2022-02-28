#include "\z\ace\addons\main\script_macros.hpp"
#include "\z\ace\addons\medical_engine\script_macros_medical.hpp"

params ["_caller", "_target", "_selectionName", "_className", "_items", "", ["_specificSpot", -1]];

// reset sound boolean
_caller setVariable ["TWC_Played_Suture", false, true];

// check if the treater has at least one suture thread
if (({_x isKindOf ["TWC_Item_Medical_SutureKit_1", configFile >> "CfgWeapons"]} count (items _caller)) < 1) exitWith { false };

_returnData = [_target, _selectionName] call twc_medical_suture_fnc_selectSutureWound;
_isOpenWound = _returnData select 0;
_woundData = _returnData select 1;

if ((count _woundData) < 1) exitWith { false };

_openWounds = _target getVariable ["ace_medical_openWounds", []];//GET_OPEN_WOUNDS(_target);
_bandagedWounds = _target getVariable ["ace_medical_bandagedWounds", []];//GET_BANDAGED_WOUNDS(_target);
_stitchedWounds = _target getVariable ["ace_medical_stitchedWounds", []];//GET_STITCHED_WOUNDS(_target);

_treatedWound = [];
if (_isOpenWound) then {
	_treatedWound = _openWounds deleteAt (_openWounds find _woundData);
} else {
	_treatedWound = _bandagedWounds deleteAt (_bandagedWounds find _woundData);
};

_treatedWound params ["_treatedID", "_treatedBodyPartN", "_treatedAmountOf", "", "_treatedDamageOf"];

_woundIndex = _stitchedWounds findIf {
	_x params ["_classID", "_bodyPartN"];

	_classID == _treatedID && {_bodyPartN == _treatedBodyPartN}
};

if (_woundIndex == -1) then {
	_stitchedWounds pushBack _treatedWound;
} else {
	_wound = _stitchedWounds select _woundIndex;
	_wound set [2, (_wound select 2) + _treatedAmountOf];
};

//_bodyPartDamage = _target getVariable [QEGVAR(medical,bodyPartDamage), []];
_bodyPartDamage = _target getVariable ["ace_medical_bodyPartDamage", []];
_bodyPartDamage set [_treatedBodyPartN, (_bodyPartDamage select _treatedBodyPartN) - _treatedDamageOf];
_target setVariable ["ace_medical_bodyPartDamage", _bodyPartDamage, true];

_target setVariable ["ace_medical_openWounds", _openWounds, true];//VAR_OPEN_WOUNDS
_target setVariable ["ace_medical_bandagedWounds", _bandagedWounds, true];//VAR_BANDAGED_WOUNDS
_target setVariable ["ace_medical_stitchedWounds", _stitchedWounds, true];//VAR_STITCHED_WOUNDS

if (local _target) then {
	["twc_medical_evh_advancedSetDamage", _target] call CBA_fnc_localEvent;
} else {
	// else remote
	["twc_medical_evh_advancedSetDamage", _target, _target] call CBA_fnc_targetEvent;
};

[_target, true, true, true, true] call ace_medical_engine_fnc_updateBodyPartVisuals;
[_target] call ace_medical_engine_fnc_updateDamageEffects;
[_target] call ace_medical_status_fnc_updateWoundBloodLoss;

[_caller, "TWC_Item_Medical_SutureKit_1"] call twc_medical_fnc_removeMedicalItem;
[_target, "activity", localize "STR_TWC_SUTURE_EXECUTE"] call ace_medical_treatment_fnc_addToLog;
[_target, "activity_view", localize "STR_TWC_SUTURE_EXECUTE", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

true