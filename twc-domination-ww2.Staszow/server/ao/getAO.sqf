/*
* After completion of an AO this gets the location of a new one and passes it to twc_fnc_ao
*/

sleep 10;
if (aosToComplete == 0)exitWith{"Won" call BIS_fnc_endMissionServer};
aosToComplete = aosToComplete - 1;
_rand = round (random townNumber);
if(_rand == 0)exitWith {execVM "server\ao\getAO.sqf"};
_pos = getPos (townLocationArray select _rand);
_name = text (townLocationArray select _rand);
if(_name in badAOs)exitWith {execVM "server\ao\getAO.sqf";};
if(_name == lastAO)exitWith {execVM "server\ao\getAO.sqf";};
[_pos, _name] call twc_fnc_ao;