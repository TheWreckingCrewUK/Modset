
sleep (random 10);
//if (!((getPlayerUIDOld player) in memberUIDArray)) exitWith {};
if (side player == civilian) exitWith {};

_timePlayed = 0;
_nameSpaceValue = profileNamespace getVariable ["TWCPub_timePlayed", [-1, -1]];
(findDisplay 46) displayAddEventHandler ["MouseMoving", "TWC_mouseMoving = true"];

if ((_nameSpaceValue select 1) == ((_nameSpaceValue select 0) call TWC_fnc_minVer))
then {_timePlayed = _nameSpaceValue select 0}
else {_timePlayed = 0};

*/
_timeplayed = 0 ;

while {true} do {
    TWC_mouseMoving = false;
    _timeNow = diag_tickTime;
    waitUntil {diag_tickTime - _timeNow >5};
    _timePlayed = _timePlayed + 1;
    _secondValue = (_timePlayed call TWC_fnc_minVer);
    profileNamespace setVariable ["TWCPub_timePlayed", [_timePlayed, _secondValue]];
    saveProfileNamespace;

    hint format ["%1",_timePlayed];
};