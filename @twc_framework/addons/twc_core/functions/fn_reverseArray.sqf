params ["_array"];

for [
	{_i = 0; _j = count _array - 1},
	{_i < _j},
	{_i = _i + 1; _j = _j - 1}
] do {
	_tmp = _array select _i;
	_array set [_i, _array select _j];
	_array set [_j, _tmp];
};

_array