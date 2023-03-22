params ["", "_key"];

private _picPath = ctrlText 421;
private _pathSplit = _picPath splitString "\.";
private _sizePath = count _pathSplit;

private _range = parseNumber (_pathSplit select (_sizePath - 2));

if (_key isEqualTo 0) then {
	_range = (_range + 100) min 2300;
} else {
	_range = (_range - 100) max 200;
};

_pathSplit set [_sizePath - 2, str _range];
_pathSplit deleteAt (_sizePath - 1);

private _newPath = _pathSplit joinString "\";
_newPath = format["\%1.paa", _newPath];

ctrlSetText [421, _newPath];