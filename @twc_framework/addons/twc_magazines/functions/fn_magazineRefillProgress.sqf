params ["_args", "_elapsedTime", "_totalTime"];
_args params ["_magazineClassname", "_startingAmmoCounts", "_simEvents", "_fillsFrom", "_startingLooseAmmoPiles", "_fullMagazineCount"];

if !((_simEvents select 0) params ["_nextEventTime", "_nextEventIsBullet", "_nextEventMags", "_nextEventIsNewPile", "_nextLoosePile"]) exitWith {};
if (_nextEventTime > _elapsedTime) exitWith { true };

private _currentAmmoCount = [];
private _currentLooseCount = [];

{
	_x params ["_xClassname", "_xCount"];

	if (_xClassname == _magazineClassname) then {
		_currentAmmoCount pushBack _xCount;
	};
	
	if (_xClassname == _fillsFrom) then {
		_currentLooseCount pushBack _xCount;
	};
} forEach ([ACE_player] call TWC_Magazines_fnc_magazineDetails);


private _addedMagazines = +_currentAmmoCount;
private _addedLoosePiles = +_currentLooseCount;

private _missingAmmo = false;
private _missingLoose = false;

{
	private _index = _addedMagazines find _x;

	if (_index != -1) then {
		_addedMagazines deleteAt _index;
	} else {
		_missingAmmo = true;
	};
} forEach _startingAmmoCounts;

{
	private _loindex = _addedLoosePiles find _x;

	if (_loindex != -1) then {
		_addedLoosePiles deleteAt _loindex;
		systemChat format ["%1 --- %2", _addedLoosePiles, _startingLooseAmmoPiles];
	} else {
		_missingLoose = true;
		systemChat "missing loose";
		systemChat format ["%1 --- %2", _addedLoosePiles, _startingLooseAmmoPiles];
	};
} forEach _startingLooseAmmoPiles;

if (_missingAmmo || _missingLoose) exitWith { false };

private _updateMagazinesOnPlayerFnc = {
	ACE_player removeMagazines _magazineClassname;
	ACE_player removeMagazines _fillsFrom;

	{
		ACE_player addMagazine [_magazineClassname, _x];
	} forEach (_addedMagazines + _nextEventMags);
	
	{
		ACE_player addMagazine [_fillsFrom, _x];
	} forEach (_addedLoosePiles + _nextLoosePile);

	_args set [1, _nextEventMags];
	_args set [4, _nextLoosePile];
};

if (_nextEventIsBullet) then {
	playSound "ace_magazinerepack_soundRoundFinished";
	
	if ((((count _simEvents) % 3) == 0) || {(count _simEvents) == 1}) then {
		call _updateMagazinesOnPlayerFnc;
	};
} else {
	if !(_nextEventIsNewPile) then {
		playSound "ace_magazinerepack_soundMagazineFinished";
	};
	
	call _updateMagazinesOnPlayerFnc;
};

_simEvents deleteAt 0;

true