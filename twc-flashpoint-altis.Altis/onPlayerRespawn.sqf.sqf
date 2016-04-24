private ["_unit", "_axisx", "_axisy"];

_unit  = _this select 0;
_axisx = getPos _unit select 0;
_axisy = getPos _unit select 1;

switch (side _unit) do
{
    case west: { _unit setPos [_axisx, _axisy,  15] };
    case east: { _unit setPos [_axisx, _axisy, -3] };
};