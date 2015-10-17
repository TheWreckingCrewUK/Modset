TWC_fnc_timePlayed = {
    _timePlayedArray = profileNamespace getVariable ["TWCPub_timePlayed", [0, 0]];
    _timePlayedArray params ["_timePlayed"];
    _message = if (_timePlayed <= 30) then {
        "You've only just started playing!"
    } else {
        _hours = floor (_timePlayed / 60);
        _minutes = _timePlayed - (_hours * 60);
        if (_hours <= 0) then {format ["%1 minutes.", _minutes]} else {format ["%1 hours %2 minutes.", _hours, _minutes]}
    };
    if (_message != "") then {hint _message};
};
