params ["_fullMagazineCount", "_arrayOfAmmoCounts", "_arrayOfLooseAmmoCounts"];

// _fullMagazineCount, _startingMagAmmoCounts, _startingLooseAmmoCounts

_arrayOfAmmoCounts = +_arrayOfAmmoCounts;
_arrayOfAmmoCounts sort true;

_arrayOfLooseAmmoCounts = +_arrayOfLooseAmmoCounts;
_arrayOfLooseAmmoCounts sort true;

private _fnc_nextLoosePile = {
	_time = _time + 0.5;
	_events pushBack [_time, false, +_arrayOfAmmoCounts, true, +_arrayOfLooseAmmoCounts];
};

private _fnc_newMag = {
	_time = _time + ace_magazinerepack_TimePerMagazine;
	_events pushBack [_time, false, +_arrayOfAmmoCounts, false, +_arrayOfLooseAmmoCounts];
};

private _currentMagIter = 0;
private _lIndex = 0;
private _magCount = (count _arrayOfAmmoCounts) - 1;
private _ammoAvailable = 0;
private _time = 0;
private _events = [];

while {_currentMagIter <= _magCount} do {
	_ammoNeeded = _fullMagazineCount - (_arrayOfAmmoCounts select _currentMagIter);
	_ammoAvailable = _arrayOfLooseAmmoCounts select _lIndex;
	
	if (_ammoAvailable == 0) then {
		_lIndex = _lIndex + 1;
		call _fnc_nextLoosePile;
	} else {
		if (_ammoNeeded == 0) then {
			_currentMagIter = _currentMagIter + 1;
			call _fnc_newMag;
		} else {
			private _transfer = _ammoAvailable min _ammoNeeded;

			for "_swapProgress" from 0 to (_transfer - 1) do {
				_time = _time + ace_magazinerepack_TimePerAmmo;
				_arrayOfLooseAmmoCounts set [_lIndex, (_arrayOfLooseAmmoCounts select _lIndex) - 1];
				_arrayOfAmmoCounts set [_currentMagIter, (_arrayOfAmmoCounts select _currentMagIter) + 1];
				_events pushBack [_time, true, +_arrayOfAmmoCounts, false, +_arrayOfLooseAmmoCounts];
			};
		};
	};
};

_events