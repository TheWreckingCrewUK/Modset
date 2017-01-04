params ["_group","_position", ["_radius",0], ["_override",false]];

_group = _group call CBA_fnc_getGroup;
if !(local _group) exitWith {}; // Don't create waypoints on each machine

// Allow TaskAttack to override other set waypoints
if (_override) then {
    [_group] call CBA_fnc_clearWaypoints;
};

[_group, _position, _radius, "SAD", "COMBAT", "RED"] call CBA_fnc_addWaypoint;
