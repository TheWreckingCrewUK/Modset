waitUntil {!isNull player};
waitUntil {player == player};

_pilots = [p31, p33];
_jetPilots = [p53,p56];
_groundUnits = [P54, P55, P56, P53];

if ((player) in _pilots && (count playableUnits) < 5) then {
    ["end4", false, 0] call BIS_fnc_endMission;
};

if ((player) in _jetPilots && ((count playableUnits) <= 13 || !((getPlayerUID player) in memberIDArray))) then {
    ["end7", false, 0] call BIS_fnc_endMission;
};

if((player) in _groundUnits && (count playableUnits) <= 13) then {
    ["end4", false, 0] call BIS_fnc_endMission;
};



