
/*
 * Author: Glowbal
 * Action for diagnosing in basic medical
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorObject] call ace_medical_treatment_fnc_diagnose
 *
 * Public: No
 */

params ["_medic", "_patient"];

private _messages = ["tett", [_patient] call ace_common_fnc_getName];
systemchat "fn diagnose";
if (alive _patient) then {
    _messages pushBack "alivemsg";
} else {
    _messages pushBack "deadmsg";
};

private _hemorrhage = _patient getVariable ["ace_medical_HEMORRHAGE", 0];
if (_hemorrhage > 0) then {
    if (_hemorrhage > 1) then {
        _messages pushBack "The Patient is clearly anaemic";
    } else {
        _messages pushBack "lostbloodmsg";
    };
} else {
    _messages pushBack "nobloodlossmsg";
};


if (alive _patient) then {
	
    if (_patient getVariable ["ace_medical_IN_PAIN", false]) then {
        _messages pushBack "painmsg";
    } else {
        _messages pushBack "noopainmsg";
    };
};

[_messages, 3] call ace_common_fnc_displayTextStructured;