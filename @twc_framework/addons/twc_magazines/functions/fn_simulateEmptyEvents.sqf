params ["_fullMagazineCount", "_arrayOfAmmoCounts", "_numberOf"];

_arrayOfAmmoCounts = +_arrayOfAmmoCounts;
_arrayOfAmmoCounts sort false;

private _fnc_newMag = {
	_time = _time + ace_magazinerepack_TimePerMagazine;
	_events pushBack [_time, false, +_arrayOfAmmoCounts];
};

private _currentMagIter = 0;
private _index = 0;
private _ammoAvailable = 0;
private _time = 0;
private _events = [];

while {_currentMagIter < _numberOf} do {
	_ammoAvailable = _arrayOfAmmoCounts select _index;
	
	if (_ammoAvailable == 0) then {
		_index = _index + 1;
		call _fnc_newMag;
	} else {
		_currentMagIter = _currentMagIter + 1;

		for "_swapProgress" from 0 to (_ammoAvailable - 1) do {
			_time = _time + ace_magazinerepack_TimePerAmmo;
			_arrayOfAmmoCounts set [_index, (_arrayOfAmmoCounts select _index) - 1];
			_events pushBack [_time, true, +_arrayOfAmmoCounts];
		};
	};
};

_events