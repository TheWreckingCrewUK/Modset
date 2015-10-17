
sleep (random 10);
if (!((getPlayerUID player) in memberIDArray)) exitWith {};
if (side player == civilian) exitWith {};

_timePlayed = 0;
_nameSpaceValue = profileNamespace getVariable ["TWCPub_timePlayed", [-1, -1]];


if ((_nameSpaceValue select 1) == TWCserverID)
then {_timePlayed = _nameSpaceValue select 0}
else {_timePlayed = 0};


while {true} do {

    _timeNow = diag_tickTime;
    waitUntil {diag_tickTime - _timeNow > 60};
    _timePlayed = _timePlayed + 1;
    profileNamespace setVariable ["TWCPub_timePlayed", [_timePlayed, TWCserverID]];
    saveProfileNamespace;
};


