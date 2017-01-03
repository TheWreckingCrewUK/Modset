params ["_array","_filter", ["_inPlace",false]];

private ["_arrayOut", "_x"];

if (_inPlace) then {
    _arrayOut = _array;
} else {
    _arrayOut = [];
    _arrayOut resize (count _array);
};

for "_i" from 0 to ((count _array) - 1) do {
    _x = _array select _i;
    _arrayOut set [_i, call _filter];
};

_arrayOut;