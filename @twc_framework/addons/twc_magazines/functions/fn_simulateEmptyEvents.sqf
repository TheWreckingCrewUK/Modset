params ["_fullMagazineCount", "_arrayOfAmmoCounts", "_numberOf"];

_arrayOfAmmoCounts = +_arrayOfAmmoCounts;
_arrayOfAmmoCounts sort true;

private _fnc_newMag = {
	_time = _time + ace_magazinerepack_TimePerMagazine;
	_events pushBack [_time, false, +_arrayOfAmmoCounts];
};

private _lowIndex = 0;
private _highIndex = (count _arrayOfAmmoCounts) - 1;
private _ammoToTransfer = 0;
private _ammoAvailable = 0;
private _time = 0;
private _events = [];

private _currentMagIter = 0;
private _ammoToTransfer = 0;
private _ammoAvailable = 0;
private _time = 0;
private _events = [];

while {_currentMagIter < _numberOf} do {
	_ammoAvailable = _arrayOfAmmoCounts select _lowIndex;
	
	if (_ammoAvailable > 0) then {
		
	};
};

while {_lowIndex < _highIndex} do {
	private _ammoNeeded = _fullMagazineCount - (_arrayOfAmmoCounts select _highIndex);
	_ammoAvailable = _arrayOfAmmoCounts select _lowIndex;

	if (_ammoAvailable == 0) then {
		_lowIndex = _lowIndex + 1;
		call _fnc_newMag;
	} else {

		if (_ammoNeeded == 0) then {
			_highIndex = _highIndex - 1;
			call _fnc_newMag;
		} else {
			private _ammoSwaped = _ammoAvailable min _ammoNeeded;

			if (_isBelt) then {
				_time = _time + ace_magazinerepack_TimePerBeltLink;
				_arrayOfAmmoCounts set [_lowIndex, (_arrayOfAmmoCounts select _lowIndex) - _ammoSwaped];
				_arrayOfAmmoCounts set [_highIndex, (_arrayOfAmmoCounts select _highIndex) + _ammoSwaped];
				_events pushBack [_time, true, +_arrayOfAmmoCounts];
			} else {

				for "_swapProgress" from 0 to (_ammoSwaped - 1) do {
					_time = _time + ace_magazinerepack_TimePerAmmo;
					_arrayOfAmmoCounts set [_lowIndex, (_arrayOfAmmoCounts select _lowIndex) - 1];
					_arrayOfAmmoCounts set [_highIndex, (_arrayOfAmmoCounts select _highIndex) + 1];
					_events pushBack [_time, true, +_arrayOfAmmoCounts];
				};
			};
		};
	};
};

_events