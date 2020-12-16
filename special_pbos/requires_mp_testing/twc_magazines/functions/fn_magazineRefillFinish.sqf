params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
_args params ["_magazineClassname", "_startingMagAmmoCounts", "_simEvents", "_fillsFrom", "_startingLooseAmmoPiles", "_fullMagazineCount"];

private _fullMagazineCount = getNumber (configFile >> "CfgMagazines" >> _magazineClassname >> "count");

if (!([ACE_player, objNull, ["isNotInside", "isNotSitting", "isNotSwimming"]] call ace_common_fnc_canInteractWith)) exitWith {};

private _fullMags = 0;
private _partialMags = 0;
private _bulletsLeft = 0;
private _emptyMags = 0;

private _loosePiles = [];

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
	
	if (_classname == _fillsFrom) then {
		_loosePiles pushBack _count;
	};
} forEach ([ACE_player] call TWC_Magazines_fnc_magazineDetails);

// remove empty loose piles!
ACE_player removeMagazines _fillsFrom;

{
	if (_x > 0) then {
		ACE_player addMagazine [_fillsFrom, _x];
	};
} forEach _loosePiles;

private _structuredOutputText = if (_errorCode == 0) then {
	private _repackedMagsText = format [localize "STR_TWC_MagazineRepack_RepackedMagazinesDetail", _fullMags, _partialMags, _emptyMags];
	format ["<t align='center'>%1</t><br/>%2", localize "STR_ace_magazinerepack_RepackComplete", _repackedMagsText];
} else {
	private _repackedMagsText = format [localize "STR_TWC_magazinerepack_RepackedMagazinesCount", _fullMags, _partialMags, _emptyMags];
	format ["<t align='center'>%1</t><br/>%2", localize "STR_ace_magazinerepack_RepackInterrupted", _repackedMagsText];
};

private _picture = getText (configFile >> "CfgMagazines" >> _magazineClassname >> "picture");
[_structuredOutputText, _picture, nil, nil, 2.5] call ace_common_fnc_displayTextPicture;