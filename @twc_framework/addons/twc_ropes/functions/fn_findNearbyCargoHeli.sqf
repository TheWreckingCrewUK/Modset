_nearHelis = position player nearObjects ["Helicopter", 30];
_nearCargoHelis = [];

{
	_heli = _x;

	{
		_ends = ropeEndPosition _x;
		if (count _ends == 2) then {
			_end1 = _ends select 0;
			_end2 = _ends select 1;
			if(((position player) distance _end1) < 5 || ((position player) distance _end2) < 5 ) then {
				if !(_heli in _nearCargoHelis) then {
					_nearCargoHelis = _nearCargoHelis + [_heli];
				}
			}
		};
	} forEach (_heli getVariable ["twc_rope_cargo_ropes", []]);
} forEach _nearHelis;

_nearCargoHelis;