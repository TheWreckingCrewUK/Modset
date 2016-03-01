waitUntil {!isNull player};
waitUntil {player == player};

_pilots = [p31,p32];

if ((player) in _pilots && (count playableUnits) < 5) then {
    ["end1", false, 0] call BIS_fnc_endMission;
};