params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
_args params ["_magazineClassname", "_lastAmmoCount", "_simEvents", "_startingMagazineCount", "_emptiesTo"];

private _fullMagazineCount = getNumber (configFile >> "CfgMagazines" >> _magazineClassname >> "count");

if (!([ACE_player, objNull, ["isNotInside", "isNotSitting", "isNotSwimming"]] call ace_common_fnc_canInteractWith)) exitWith {};

private _fullMags = 0;
private _partialMags = 0;
private _bulletsLeft = 0;
private _emptyMags = 0;

private _looseCount = [];

{
	_x params ["_classname", "_count"];

	if (_classname == _magazineClassname) then {
		if (_count > 0) then {
			if (_count == _fullMagazineCount) then {
				_fullMags = _fullMags + 1;
			} else {
				_partialMags = _partialMags + 1;
				_bulletsLeft = _count;
			};
		} else {
			_emptyMags = _emptyMags + 1;
		};
	};
} forEach (magazinesAmmoFull ACE_player);

_emptyCount = _startingMagazineCount - (_fullMags + _partialMags);

if (_emptyCount > 0) then {
	for "_i" from 1 to _emptyCount do {
		ACE_player addMagazine [_magazineClassname, 0];
	};
};



private _structuredOutputText = if (_errorCode == 0) then {
	private _repackedMagsText = format [localize "STR_TWC_MagazineRepack_RepackedMagazinesDetail", _fullMags, _partialMags, _emptyMags];
	format ["<t align='center'>%1</t><br/>%2", localize "STR_ace_magazinerepack_RepackComplete", _repackedMagsText];
} else {
	private _repackedMagsText = format [localize "STR_TWC_magazinerepack_RepackedMagazinesCount", _fullMags, _partialMags, _emptyMags];
	format ["<t align='center'>%1</t><br/>%2", localize "STR_ace_magazinerepack_RepackInterrupted", _repackedMagsText];
};

private _picture = getText (configFile >> "CfgMagazines" >> _magazineClassname >> "picture");
[_structuredOutputText, _picture, nil, nil, 2.5] call ace_common_fnc_displayTextPicture;