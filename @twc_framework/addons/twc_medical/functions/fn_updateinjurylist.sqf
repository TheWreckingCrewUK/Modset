
/*
 * Author: mharis001
 * Updates injury list for given body part for the target.
 *
 * Arguments:
 * 0: Injury list <CONTROL>
 * 1: Target <OBJECT>
 * 2: Body part <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_ctrlInjuries, _target, 0] call ace_medical_gui_fnc_updateInjuryList
 *
 * Public: No
 */

params ["_ctrl", "_target", "_selectionN"];

private _entries = [];

// Add selected body part name
private _bodyPartName = [
    "head",
    "torso",
    "leftarm",
    "rightarm",
    "leftleg",
    "rightleg"
] select _selectionN;

_entries pushBack [localize ("STR_ACE_Medical_GUI_" + _bodyPartName), [1, 1, 1, 1]];

// Indicate if unit is bleeding at all
if ((_target getvariable ["ace_medical_woundBleeding", 0]) > 0) then {
    _entries pushBack [localize "STR_ACE_Medical_GUI_STATUS_BLEEDING", [1, 0, 0, 1]];
};

/*
// Give a qualitative description of the blood volume lost
switch (GET_HEMORRHAGE(_target)) do {
    case 1: {
        _entries pushBack [localize LSTRING(Lost_Blood1), [1, 0, 0, 1]];
    };
    case 2: {
        _entries pushBack [localize LSTRING(Lost_Blood2), [1, 0, 0, 1]];
    };
    case 3: {
        _entries pushBack [localize LSTRING(Lost_Blood3), [1, 0, 0, 1]];
    };
    case 4: {
        _entries pushBack [localize LSTRING(Lost_Blood4), [1, 0, 0, 1]];
    };
};
*/

if ((_target getvariable ["ace_medical_hemorrhage", 0]) >= 3) then {
	_entries pushBack ["Pale", [1, 0, 0, 1]];
};

_tourniquets = _target getVariable ["ace_medical_TOURNIQUETs", [0,0,0,0,0,0]];

// Indicate if a tourniquet is applied
if ((_tourniquets select _selectionN) > 1) then {
    _entries pushBack [localize "STR_ACE_Medical_GUI_STATUS_TOURNIQUET_APPLIED", [0.77, 0.51, 0.08, 1]];
};

// Indicate current body part fracture status
switch ((_target getvariable ["ace_medical_FRACTURES", [0,0,0,0,0,0]]) select _selectionN) do {
    case 1: {
        _entries pushBack [localize "STR_ACE_Medical_GUI_Status_Fractured", [1, 0, 0, 1]];
    };
    case -1: {
        if ((missionnamespace getvariable ["ace_medical_fractures", 1]) == 2) then { // Ignore if the splint has no effect
            _entries pushBack [localize "STR_ACE_Medical_GUI_Status_SplintApplied", [1, 1, 1, 1]];
        };
    };
};
/*
// Indicate the amount of pain the unit is in
if ([_target] call EFUNC(common,isAwake)) then {
    private _pain = GET_PAIN_PERCEIVED(_target);
    if (_pain > 0) then {
        private _painText = switch (true) do {
            case (_pain > 0.5): {
                ELSTRING(medical_treatment,Status_SeverePain);
            };
            case (_pain > 0.1): {
                ELSTRING(medical_treatment,Status_Pain);
            };
            default {
                ELSTRING(medical_treatment,Status_MildPain);
            };
        };
        _entries pushBack [localize _painText, [1, 1, 1, 1]];
    };
};
*/
// Show receiving IV volume remaining
private _totalIvVolume = 0;
{
    _x params ["_volumeRemaining"];
    _totalIvVolume = _totalIvVolume + _volumeRemaining;
} forEach (_target getVariable ["ace_medical_ivBags", []]);

if (_totalIvVolume >= 1) then {
    _entries pushBack [format [localize "STR_ace_medical_treatment_receivingIvVolume", floor _totalIvVolume], [1, 1, 1, 1]];
};

// Add entries for open, bandaged, and stitched wounds
private _woundEntries = [];

private _fnc_getWoundDescription = {
    private _classIndex = _woundClassID / 10;
    private _category = _woundClassID % 10;
    private _className = (missionnamespace getvariable ["ace_medical_damage_woundsdata", []]) select _classIndex select 6;
    private _suffix = ["Minor", "Medium", "Large"] select _category;
    //private _woundName = localize format [ELSTRING(medical_damage,%1_%2), _className, _suffix];
    private _woundName = localize format ["STR_ace_medical_damage_%1_%2", _className, _suffix];
    if (_amountOf >= 1) then {
        format ["%1x %2", ceil _amountOf, _woundName];
    } else {
        format ["Partial %1", _woundName];
    };
};

{
    _x params ["_woundClassID", "_bodyPartN", "_amountOf"];
    if (_selectionN == _bodyPartN) then {
        if (_amountOf > 0) then {
            _woundEntries pushBack [call _fnc_getWoundDescription, [1, 1, 1, 1]];
        } else {
            if !((missionnamespace getvariable ["ace_medical_treatment_advancedBandages", false]) && {(missionnamespace getvariable ["ace_medical_treatment_woundReopening", false])}) then {
                _woundEntries pushBack [format ["[B] %1", call _fnc_getWoundDescription], [0.7, 0.7, 0.7, 1]];
            };
        };
    };
} forEach (_target getVariable ["ace_medical_OPENWOUNDS", []]);

{
    _x params ["_woundClassID", "_bodyPartN", "_amountOf"];
    if (_selectionN == _bodyPartN && {_amountOf > 0}) then {
        _woundEntries pushBack [format ["[B] %1", call _fnc_getWoundDescription], [0.88, 0.7, 0.65, 1]];
    };
} forEach (_target getVariable ["ace_medical_bandagedWOUNDS", []]);

{
    _x params ["_woundClassID", "_bodyPartN", "_amountOf"];
    if (_selectionN == _bodyPartN && {_amountOf > 0}) then {
        _woundEntries pushBack [format ["[S] %1", call _fnc_getWoundDescription], [0.7, 0.7, 0.7, 1]];
    };
} forEach (_target getVariable ["ace_medical_stitchedWOUNDS", []]);

// Handle no wound entries
if (_woundEntries isEqualTo []) then {
    _entries pushBack [localize "STR_ace_medical_treatment_NoInjuriesBodypart", [1, 1, 1, 1]];
} else {
    _entries append _woundEntries;
};

// Add all entries to injury list
lbClear _ctrl;

{
    _x params ["_text", "_color"];
    private _index = _ctrl lbAdd _text;
    _ctrl lbSetColor [_index, _color];
    _ctrl lbSetSelectColor [_index, _color];
} forEach _entries;