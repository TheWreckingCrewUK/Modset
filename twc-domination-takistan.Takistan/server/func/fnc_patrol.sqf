
params["_group","_position","_radius","_count"];
if(isNil "_position") then {_position = getPos _group};
if(isNil "_radius") then {_radius = 50};
if(isNil "_count") then {_count = 3};

if !(local _group) exitWith {hint "somehow the group was not local"}; // Don't create waypoints on each machine

_this =+ _this;
if (count _this > 3) then {
    _this deleteAt 3;
};
for "_x" from 1 to _count do {
    _this call CBA_fnc_addWaypoint;
};
_this2 =+ _this;
_this2 set [3, "CYCLE"];
_this2 call CBA_fnc_addWaypoint;

deleteWaypoint ((waypoints _group) select 0);