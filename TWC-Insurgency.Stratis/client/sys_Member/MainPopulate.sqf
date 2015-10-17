TWC_fnc_timePlayed = {
    (profileNamespace getVariable ["TWCPub_timePlayed", [0, 0]]) params ["_timePlayed"];
    local _minutes = _timePlayed % 60;
    local _hours = (_timePlayed - _minutes) / 60;

    hint format ["You have played %1:%2 h.", _hours, _minutes];
};
