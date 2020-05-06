params ["_fullMagazineCount", "_fullLooseCount", "_arrayOfAmmoCounts", "_arrayOfLooseAmmoCounts", "_loopCount"];

_arrayOfAmmoCounts = +_arrayOfAmmoCounts;
_arrayOfAmmoCounts sort false;

_arrayOfLooseAmmoCounts = +_arrayOfLooseAmmoCounts;
_arrayOfLooseAmmoCounts sort false;

private _fnc_nextMag = {
	_time = _time + 0.5;
	_events pushBack [_time, false, +_arrayOfAmmoCounts, false, +_arrayOfLooseAmmoCounts];
};

private _fnc_nextLoosePile = {
	_time = _time + 0.5;
	_events pushBack [_time, true, +_arrayOfAmmoCounts, true, +_arrayOfLooseAmmoCounts];
};

private _currentMagIter = 0;
private _index = 0;
private _lIndex = 0;
private _ammoAvailable = 0;
private _time = 0;
private _events = [];

while {_currentMagIter < _loopCount} do {
	_ammoAvailable = _arrayOfAmmoCounts select _index;
	_currentLooseAmmo = _arrayOfLooseAmmoCounts select _lIndex;
	
	if (_ammoAvailable == 0) then {
		_index = _index + 1;
		call _fnc_nextMag;
	} else {
		_currentMagIter = _currentMagIter + 1;

		private _transfer = _ammoAvailable min (_fullLooseCount - _currentLooseAmmo);

		for "_swapProgress" from 0 to (_transfer - 1) do {
			_time = _time + 0.25;
			
			_arrayOfAmmoCounts set [_index, (_arrayOfAmmoCounts select _index) - 1];
			
			if (_currentLooseAmmo < _fullLooseCount) then {
				_arrayOfLooseAmmoCounts set [_lIndex, (_arrayOfLooseAmmoCounts select _lIndex) + 1];
				_events pushBack [_time, true, +_arrayOfAmmoCounts, false, +_arrayOfLooseAmmoCounts];
			} else {
				_lIndex = _lIndex + 1;
				call _fnc_nextLoosePile;
			};
		};
	};
};

_events