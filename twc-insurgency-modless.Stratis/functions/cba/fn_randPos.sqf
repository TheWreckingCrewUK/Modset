params [
    ["_entity", objNull, [objNull, grpNull, "", locationNull, taskNull, []]],
    ["_radius", 0, [0]]
];

private _position = _entity call CBA_fnc_getPos;

_position set [0, (_position select 0) + (_radius - 2 * random _radius)];
_position set [1, (_position select 1) + (_radius - 2 * random _radius)];
_position